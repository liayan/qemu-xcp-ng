/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace.h"

uint16_t _TRACE_XEN_DEFAULT_IOREQ_SERVER_DSTATE;
uint16_t _TRACE_XEN_IOREQ_SERVER_CREATE_DSTATE;
uint16_t _TRACE_XEN_IOREQ_SERVER_DESTROY_DSTATE;
uint16_t _TRACE_XEN_IOREQ_SERVER_STATE_DSTATE;
uint16_t _TRACE_XEN_MAP_MMIO_RANGE_DSTATE;
uint16_t _TRACE_XEN_UNMAP_MMIO_RANGE_DSTATE;
uint16_t _TRACE_XEN_MAP_PORTIO_RANGE_DSTATE;
uint16_t _TRACE_XEN_UNMAP_PORTIO_RANGE_DSTATE;
uint16_t _TRACE_XEN_MAP_PCIDEV_DSTATE;
uint16_t _TRACE_XEN_UNMAP_PCIDEV_DSTATE;
uint16_t _TRACE_XEN_DOMID_RESTRICT_DSTATE;
uint16_t _TRACE_XEN_BUS_REALIZE_DSTATE;
uint16_t _TRACE_XEN_BUS_UNREALIZE_DSTATE;
uint16_t _TRACE_XEN_BUS_ENUMERATE_DSTATE;
uint16_t _TRACE_XEN_BUS_CLEANUP_DSTATE;
uint16_t _TRACE_XEN_BUS_TYPE_ENUMERATE_DSTATE;
uint16_t _TRACE_XEN_BUS_BACKEND_CREATE_DSTATE;
uint16_t _TRACE_XEN_BUS_DEVICE_CLEANUP_DSTATE;
uint16_t _TRACE_XEN_BUS_ADD_WATCH_DSTATE;
uint16_t _TRACE_XEN_BUS_REMOVE_WATCH_DSTATE;
uint16_t _TRACE_XEN_DEVICE_REALIZE_DSTATE;
uint16_t _TRACE_XEN_DEVICE_UNREALIZE_DSTATE;
uint16_t _TRACE_XEN_DEVICE_BACKEND_STATE_DSTATE;
uint16_t _TRACE_XEN_DEVICE_BACKEND_ONLINE_DSTATE;
uint16_t _TRACE_XEN_DEVICE_BACKEND_CHANGED_DSTATE;
uint16_t _TRACE_XEN_DEVICE_FRONTEND_STATE_DSTATE;
uint16_t _TRACE_XEN_DEVICE_FRONTEND_CHANGED_DSTATE;
uint16_t _TRACE_XEN_DEVICE_UNPLUG_DSTATE;
uint16_t _TRACE_XEN_DEVICE_ADD_WATCH_DSTATE;
uint16_t _TRACE_XEN_DEVICE_REMOVE_WATCH_DSTATE;
uint16_t _TRACE_XS_NODE_CREATE_DSTATE;
uint16_t _TRACE_XS_NODE_DESTROY_DSTATE;
uint16_t _TRACE_XS_NODE_VPRINTF_DSTATE;
uint16_t _TRACE_XS_NODE_VSCANF_DSTATE;
uint16_t _TRACE_XS_NODE_WATCH_DSTATE;
uint16_t _TRACE_XS_NODE_UNWATCH_DSTATE;
TraceEvent _TRACE_XEN_DEFAULT_IOREQ_SERVER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_default_ioreq_server",
    .sstate = TRACE_XEN_DEFAULT_IOREQ_SERVER_ENABLED,
    .dstate = &_TRACE_XEN_DEFAULT_IOREQ_SERVER_DSTATE 
};
TraceEvent _TRACE_XEN_IOREQ_SERVER_CREATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_ioreq_server_create",
    .sstate = TRACE_XEN_IOREQ_SERVER_CREATE_ENABLED,
    .dstate = &_TRACE_XEN_IOREQ_SERVER_CREATE_DSTATE 
};
TraceEvent _TRACE_XEN_IOREQ_SERVER_DESTROY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_ioreq_server_destroy",
    .sstate = TRACE_XEN_IOREQ_SERVER_DESTROY_ENABLED,
    .dstate = &_TRACE_XEN_IOREQ_SERVER_DESTROY_DSTATE 
};
TraceEvent _TRACE_XEN_IOREQ_SERVER_STATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_ioreq_server_state",
    .sstate = TRACE_XEN_IOREQ_SERVER_STATE_ENABLED,
    .dstate = &_TRACE_XEN_IOREQ_SERVER_STATE_DSTATE 
};
TraceEvent _TRACE_XEN_MAP_MMIO_RANGE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_map_mmio_range",
    .sstate = TRACE_XEN_MAP_MMIO_RANGE_ENABLED,
    .dstate = &_TRACE_XEN_MAP_MMIO_RANGE_DSTATE 
};
TraceEvent _TRACE_XEN_UNMAP_MMIO_RANGE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_unmap_mmio_range",
    .sstate = TRACE_XEN_UNMAP_MMIO_RANGE_ENABLED,
    .dstate = &_TRACE_XEN_UNMAP_MMIO_RANGE_DSTATE 
};
TraceEvent _TRACE_XEN_MAP_PORTIO_RANGE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_map_portio_range",
    .sstate = TRACE_XEN_MAP_PORTIO_RANGE_ENABLED,
    .dstate = &_TRACE_XEN_MAP_PORTIO_RANGE_DSTATE 
};
TraceEvent _TRACE_XEN_UNMAP_PORTIO_RANGE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_unmap_portio_range",
    .sstate = TRACE_XEN_UNMAP_PORTIO_RANGE_ENABLED,
    .dstate = &_TRACE_XEN_UNMAP_PORTIO_RANGE_DSTATE 
};
TraceEvent _TRACE_XEN_MAP_PCIDEV_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_map_pcidev",
    .sstate = TRACE_XEN_MAP_PCIDEV_ENABLED,
    .dstate = &_TRACE_XEN_MAP_PCIDEV_DSTATE 
};
TraceEvent _TRACE_XEN_UNMAP_PCIDEV_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_unmap_pcidev",
    .sstate = TRACE_XEN_UNMAP_PCIDEV_ENABLED,
    .dstate = &_TRACE_XEN_UNMAP_PCIDEV_DSTATE 
};
TraceEvent _TRACE_XEN_DOMID_RESTRICT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_domid_restrict",
    .sstate = TRACE_XEN_DOMID_RESTRICT_ENABLED,
    .dstate = &_TRACE_XEN_DOMID_RESTRICT_DSTATE 
};
TraceEvent _TRACE_XEN_BUS_REALIZE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_bus_realize",
    .sstate = TRACE_XEN_BUS_REALIZE_ENABLED,
    .dstate = &_TRACE_XEN_BUS_REALIZE_DSTATE 
};
TraceEvent _TRACE_XEN_BUS_UNREALIZE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_bus_unrealize",
    .sstate = TRACE_XEN_BUS_UNREALIZE_ENABLED,
    .dstate = &_TRACE_XEN_BUS_UNREALIZE_DSTATE 
};
TraceEvent _TRACE_XEN_BUS_ENUMERATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_bus_enumerate",
    .sstate = TRACE_XEN_BUS_ENUMERATE_ENABLED,
    .dstate = &_TRACE_XEN_BUS_ENUMERATE_DSTATE 
};
TraceEvent _TRACE_XEN_BUS_CLEANUP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_bus_cleanup",
    .sstate = TRACE_XEN_BUS_CLEANUP_ENABLED,
    .dstate = &_TRACE_XEN_BUS_CLEANUP_DSTATE 
};
TraceEvent _TRACE_XEN_BUS_TYPE_ENUMERATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_bus_type_enumerate",
    .sstate = TRACE_XEN_BUS_TYPE_ENUMERATE_ENABLED,
    .dstate = &_TRACE_XEN_BUS_TYPE_ENUMERATE_DSTATE 
};
TraceEvent _TRACE_XEN_BUS_BACKEND_CREATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_bus_backend_create",
    .sstate = TRACE_XEN_BUS_BACKEND_CREATE_ENABLED,
    .dstate = &_TRACE_XEN_BUS_BACKEND_CREATE_DSTATE 
};
TraceEvent _TRACE_XEN_BUS_DEVICE_CLEANUP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_bus_device_cleanup",
    .sstate = TRACE_XEN_BUS_DEVICE_CLEANUP_ENABLED,
    .dstate = &_TRACE_XEN_BUS_DEVICE_CLEANUP_DSTATE 
};
TraceEvent _TRACE_XEN_BUS_ADD_WATCH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_bus_add_watch",
    .sstate = TRACE_XEN_BUS_ADD_WATCH_ENABLED,
    .dstate = &_TRACE_XEN_BUS_ADD_WATCH_DSTATE 
};
TraceEvent _TRACE_XEN_BUS_REMOVE_WATCH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_bus_remove_watch",
    .sstate = TRACE_XEN_BUS_REMOVE_WATCH_ENABLED,
    .dstate = &_TRACE_XEN_BUS_REMOVE_WATCH_DSTATE 
};
TraceEvent _TRACE_XEN_DEVICE_REALIZE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_device_realize",
    .sstate = TRACE_XEN_DEVICE_REALIZE_ENABLED,
    .dstate = &_TRACE_XEN_DEVICE_REALIZE_DSTATE 
};
TraceEvent _TRACE_XEN_DEVICE_UNREALIZE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_device_unrealize",
    .sstate = TRACE_XEN_DEVICE_UNREALIZE_ENABLED,
    .dstate = &_TRACE_XEN_DEVICE_UNREALIZE_DSTATE 
};
TraceEvent _TRACE_XEN_DEVICE_BACKEND_STATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_device_backend_state",
    .sstate = TRACE_XEN_DEVICE_BACKEND_STATE_ENABLED,
    .dstate = &_TRACE_XEN_DEVICE_BACKEND_STATE_DSTATE 
};
TraceEvent _TRACE_XEN_DEVICE_BACKEND_ONLINE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_device_backend_online",
    .sstate = TRACE_XEN_DEVICE_BACKEND_ONLINE_ENABLED,
    .dstate = &_TRACE_XEN_DEVICE_BACKEND_ONLINE_DSTATE 
};
TraceEvent _TRACE_XEN_DEVICE_BACKEND_CHANGED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_device_backend_changed",
    .sstate = TRACE_XEN_DEVICE_BACKEND_CHANGED_ENABLED,
    .dstate = &_TRACE_XEN_DEVICE_BACKEND_CHANGED_DSTATE 
};
TraceEvent _TRACE_XEN_DEVICE_FRONTEND_STATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_device_frontend_state",
    .sstate = TRACE_XEN_DEVICE_FRONTEND_STATE_ENABLED,
    .dstate = &_TRACE_XEN_DEVICE_FRONTEND_STATE_DSTATE 
};
TraceEvent _TRACE_XEN_DEVICE_FRONTEND_CHANGED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_device_frontend_changed",
    .sstate = TRACE_XEN_DEVICE_FRONTEND_CHANGED_ENABLED,
    .dstate = &_TRACE_XEN_DEVICE_FRONTEND_CHANGED_DSTATE 
};
TraceEvent _TRACE_XEN_DEVICE_UNPLUG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_device_unplug",
    .sstate = TRACE_XEN_DEVICE_UNPLUG_ENABLED,
    .dstate = &_TRACE_XEN_DEVICE_UNPLUG_DSTATE 
};
TraceEvent _TRACE_XEN_DEVICE_ADD_WATCH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_device_add_watch",
    .sstate = TRACE_XEN_DEVICE_ADD_WATCH_ENABLED,
    .dstate = &_TRACE_XEN_DEVICE_ADD_WATCH_DSTATE 
};
TraceEvent _TRACE_XEN_DEVICE_REMOVE_WATCH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_device_remove_watch",
    .sstate = TRACE_XEN_DEVICE_REMOVE_WATCH_ENABLED,
    .dstate = &_TRACE_XEN_DEVICE_REMOVE_WATCH_DSTATE 
};
TraceEvent _TRACE_XS_NODE_CREATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xs_node_create",
    .sstate = TRACE_XS_NODE_CREATE_ENABLED,
    .dstate = &_TRACE_XS_NODE_CREATE_DSTATE 
};
TraceEvent _TRACE_XS_NODE_DESTROY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xs_node_destroy",
    .sstate = TRACE_XS_NODE_DESTROY_ENABLED,
    .dstate = &_TRACE_XS_NODE_DESTROY_DSTATE 
};
TraceEvent _TRACE_XS_NODE_VPRINTF_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xs_node_vprintf",
    .sstate = TRACE_XS_NODE_VPRINTF_ENABLED,
    .dstate = &_TRACE_XS_NODE_VPRINTF_DSTATE 
};
TraceEvent _TRACE_XS_NODE_VSCANF_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xs_node_vscanf",
    .sstate = TRACE_XS_NODE_VSCANF_ENABLED,
    .dstate = &_TRACE_XS_NODE_VSCANF_DSTATE 
};
TraceEvent _TRACE_XS_NODE_WATCH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xs_node_watch",
    .sstate = TRACE_XS_NODE_WATCH_ENABLED,
    .dstate = &_TRACE_XS_NODE_WATCH_DSTATE 
};
TraceEvent _TRACE_XS_NODE_UNWATCH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xs_node_unwatch",
    .sstate = TRACE_XS_NODE_UNWATCH_ENABLED,
    .dstate = &_TRACE_XS_NODE_UNWATCH_DSTATE 
};
TraceEvent *hw_xen_trace_events[] = {
    &_TRACE_XEN_DEFAULT_IOREQ_SERVER_EVENT,
    &_TRACE_XEN_IOREQ_SERVER_CREATE_EVENT,
    &_TRACE_XEN_IOREQ_SERVER_DESTROY_EVENT,
    &_TRACE_XEN_IOREQ_SERVER_STATE_EVENT,
    &_TRACE_XEN_MAP_MMIO_RANGE_EVENT,
    &_TRACE_XEN_UNMAP_MMIO_RANGE_EVENT,
    &_TRACE_XEN_MAP_PORTIO_RANGE_EVENT,
    &_TRACE_XEN_UNMAP_PORTIO_RANGE_EVENT,
    &_TRACE_XEN_MAP_PCIDEV_EVENT,
    &_TRACE_XEN_UNMAP_PCIDEV_EVENT,
    &_TRACE_XEN_DOMID_RESTRICT_EVENT,
    &_TRACE_XEN_BUS_REALIZE_EVENT,
    &_TRACE_XEN_BUS_UNREALIZE_EVENT,
    &_TRACE_XEN_BUS_ENUMERATE_EVENT,
    &_TRACE_XEN_BUS_CLEANUP_EVENT,
    &_TRACE_XEN_BUS_TYPE_ENUMERATE_EVENT,
    &_TRACE_XEN_BUS_BACKEND_CREATE_EVENT,
    &_TRACE_XEN_BUS_DEVICE_CLEANUP_EVENT,
    &_TRACE_XEN_BUS_ADD_WATCH_EVENT,
    &_TRACE_XEN_BUS_REMOVE_WATCH_EVENT,
    &_TRACE_XEN_DEVICE_REALIZE_EVENT,
    &_TRACE_XEN_DEVICE_UNREALIZE_EVENT,
    &_TRACE_XEN_DEVICE_BACKEND_STATE_EVENT,
    &_TRACE_XEN_DEVICE_BACKEND_ONLINE_EVENT,
    &_TRACE_XEN_DEVICE_BACKEND_CHANGED_EVENT,
    &_TRACE_XEN_DEVICE_FRONTEND_STATE_EVENT,
    &_TRACE_XEN_DEVICE_FRONTEND_CHANGED_EVENT,
    &_TRACE_XEN_DEVICE_UNPLUG_EVENT,
    &_TRACE_XEN_DEVICE_ADD_WATCH_EVENT,
    &_TRACE_XEN_DEVICE_REMOVE_WATCH_EVENT,
    &_TRACE_XS_NODE_CREATE_EVENT,
    &_TRACE_XS_NODE_DESTROY_EVENT,
    &_TRACE_XS_NODE_VPRINTF_EVENT,
    &_TRACE_XS_NODE_VSCANF_EVENT,
    &_TRACE_XS_NODE_WATCH_EVENT,
    &_TRACE_XS_NODE_UNWATCH_EVENT,
  NULL,
};

static void trace_hw_xen_register_events(void)
{
    trace_event_register_group(hw_xen_trace_events);
}
trace_init(trace_hw_xen_register_events)
