#include "qemu/osdep.h"
#include "qemu/cutils.h"
#include "qemu/log.h"
#include "hw/block/block.h"
#include "hw/pci/msix.h"
#include "hw/qdev-properties.h"
#include "sysemu/sysemu.h"
#include "sysemu/block-backend.h"
#include "qapi/error.h"

#include "hw/qdev-core.h"

#include "nvme.h"
#include "nvme-ns.h"

static uint64_t nvme_ns_calc_blks(NvmeNamespace *ns)
{
    return ns->size / nvme_ns_lbads_bytes(ns);
}

static void nvme_ns_init_identify(NvmeIdNs *id_ns)
{
    id_ns->lbaf[0].ds = BDRV_SECTOR_BITS;
}

static int nvme_ns_init(NvmeNamespace *ns)
{
    uint64_t ns_blks;
    NvmeIdNs *id_ns = &ns->id_ns;

    nvme_ns_init_identify(id_ns);

    ns_blks = nvme_ns_calc_blks(ns);
    id_ns->nuse = id_ns->ncap = id_ns->nsze = cpu_to_le64(ns_blks);

    return 0;
}

static int nvme_ns_init_blk(NvmeNamespace *ns, NvmeIdCtrl *id, Error **errp)
{
    blkconf_blocksizes(&ns->conf);

    if (!blkconf_apply_backend_options(&ns->conf,
        blk_is_read_only(ns->conf.blk), false, errp)) {
        return 1;
    }

    ns->size = blk_getlength(ns->conf.blk);
    if (ns->size < 0) {
        error_setg_errno(errp, -ns->size, "blk_getlength");
        return 1;
    }

    if (!blk_enable_write_cache(ns->conf.blk)) {
        id->vwc = 0;
    }

    return 0;
}

static int nvme_ns_check_constraints(NvmeNamespace *ns, Error **errp)
{
    if (!ns->conf.blk) {
        error_setg(errp, "nvme-ns: block backend not configured");
        return 1;
    }

    return 0;
}


static void nvme_ns_realize(DeviceState *dev, Error **errp)
{
    NvmeNamespace *ns = NVME_NS(dev);
    BusState *s = qdev_get_parent_bus(dev);
    NvmeCtrl *n = NVME(s->parent);
    Error *local_err = NULL;

    if (nvme_ns_check_constraints(ns, &local_err)) {
        error_propagate_prepend(errp, local_err,
            "nvme_ns_check_constraints: ");
        return;
    }

    if (nvme_ns_init_blk(ns, &n->id_ctrl, &local_err)) {
        error_propagate_prepend(errp, local_err, "nvme_ns_init_blk: ");
        return;
    }

    nvme_ns_init(ns);
    if (nvme_register_namespace(n, ns, &local_err)) {
        error_propagate_prepend(errp, local_err, "nvme_register_namespace: ");
        return;
    }
}

static Property nvme_ns_props[] = {
    DEFINE_BLOCK_PROPERTIES(NvmeNamespace, conf),
    DEFINE_NVME_NS_PROPERTIES(NvmeNamespace, params),
    DEFINE_PROP_END_OF_LIST(),
};

static void nvme_ns_class_init(ObjectClass *oc, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(oc);

    set_bit(DEVICE_CATEGORY_STORAGE, dc->categories);

    dc->bus_type = TYPE_NVME_BUS;
    dc->realize = nvme_ns_realize;
    dc->props = nvme_ns_props;
    dc->desc = "virtual nvme namespace";
}

static void nvme_ns_instance_init(Object *obj)
{
    NvmeNamespace *ns = NVME_NS(obj);
    char *bootindex = g_strdup_printf("/namespace@%d,0", ns->params.nsid);

    device_add_bootindex_property(obj, &ns->conf.bootindex, "bootindex",
        bootindex, DEVICE(obj), &error_abort);

    g_free(bootindex);
}

static const TypeInfo nvme_ns_info = {
    .name = TYPE_NVME_NS,
    .parent = TYPE_DEVICE,
    .class_init = nvme_ns_class_init,
    .instance_size = sizeof(NvmeNamespace),
    .instance_init = nvme_ns_instance_init,
};

static void nvme_ns_register_types(void)
{
    type_register_static(&nvme_ns_info);
}

type_init(nvme_ns_register_types)
