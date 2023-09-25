/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace.h"

uint16_t _TRACE_XEN_PLATFORM_LOG_DSTATE;
uint16_t _TRACE_XEN_PV_MMIO_READ_DSTATE;
uint16_t _TRACE_XEN_PV_MMIO_WRITE_DSTATE;
uint16_t _TRACE_XEN_RAM_ALLOC_DSTATE;
uint16_t _TRACE_XEN_CLIENT_SET_MEMORY_DSTATE;
uint16_t _TRACE_HANDLE_IOREQ_DSTATE;
uint16_t _TRACE_HANDLE_IOREQ_READ_DSTATE;
uint16_t _TRACE_HANDLE_IOREQ_WRITE_DSTATE;
uint16_t _TRACE_CPU_IOREQ_PIO_DSTATE;
uint16_t _TRACE_CPU_IOREQ_PIO_READ_REG_DSTATE;
uint16_t _TRACE_CPU_IOREQ_PIO_WRITE_REG_DSTATE;
uint16_t _TRACE_CPU_IOREQ_MOVE_DSTATE;
uint16_t _TRACE_XEN_MAP_RESOURCE_IOREQ_DSTATE;
uint16_t _TRACE_CPU_IOREQ_CONFIG_READ_DSTATE;
uint16_t _TRACE_CPU_IOREQ_CONFIG_WRITE_DSTATE;
uint16_t _TRACE_XEN_MAP_CACHE_DSTATE;
uint16_t _TRACE_XEN_REMAP_BUCKET_DSTATE;
uint16_t _TRACE_XEN_MAP_CACHE_RETURN_DSTATE;
TraceEvent _TRACE_XEN_PLATFORM_LOG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_platform_log",
    .sstate = TRACE_XEN_PLATFORM_LOG_ENABLED,
    .dstate = &_TRACE_XEN_PLATFORM_LOG_DSTATE 
};
TraceEvent _TRACE_XEN_PV_MMIO_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_pv_mmio_read",
    .sstate = TRACE_XEN_PV_MMIO_READ_ENABLED,
    .dstate = &_TRACE_XEN_PV_MMIO_READ_DSTATE 
};
TraceEvent _TRACE_XEN_PV_MMIO_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_pv_mmio_write",
    .sstate = TRACE_XEN_PV_MMIO_WRITE_ENABLED,
    .dstate = &_TRACE_XEN_PV_MMIO_WRITE_DSTATE 
};
TraceEvent _TRACE_XEN_RAM_ALLOC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_ram_alloc",
    .sstate = TRACE_XEN_RAM_ALLOC_ENABLED,
    .dstate = &_TRACE_XEN_RAM_ALLOC_DSTATE 
};
TraceEvent _TRACE_XEN_CLIENT_SET_MEMORY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_client_set_memory",
    .sstate = TRACE_XEN_CLIENT_SET_MEMORY_ENABLED,
    .dstate = &_TRACE_XEN_CLIENT_SET_MEMORY_DSTATE 
};
TraceEvent _TRACE_HANDLE_IOREQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_ioreq",
    .sstate = TRACE_HANDLE_IOREQ_ENABLED,
    .dstate = &_TRACE_HANDLE_IOREQ_DSTATE 
};
TraceEvent _TRACE_HANDLE_IOREQ_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_ioreq_read",
    .sstate = TRACE_HANDLE_IOREQ_READ_ENABLED,
    .dstate = &_TRACE_HANDLE_IOREQ_READ_DSTATE 
};
TraceEvent _TRACE_HANDLE_IOREQ_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_ioreq_write",
    .sstate = TRACE_HANDLE_IOREQ_WRITE_ENABLED,
    .dstate = &_TRACE_HANDLE_IOREQ_WRITE_DSTATE 
};
TraceEvent _TRACE_CPU_IOREQ_PIO_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cpu_ioreq_pio",
    .sstate = TRACE_CPU_IOREQ_PIO_ENABLED,
    .dstate = &_TRACE_CPU_IOREQ_PIO_DSTATE 
};
TraceEvent _TRACE_CPU_IOREQ_PIO_READ_REG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cpu_ioreq_pio_read_reg",
    .sstate = TRACE_CPU_IOREQ_PIO_READ_REG_ENABLED,
    .dstate = &_TRACE_CPU_IOREQ_PIO_READ_REG_DSTATE 
};
TraceEvent _TRACE_CPU_IOREQ_PIO_WRITE_REG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cpu_ioreq_pio_write_reg",
    .sstate = TRACE_CPU_IOREQ_PIO_WRITE_REG_ENABLED,
    .dstate = &_TRACE_CPU_IOREQ_PIO_WRITE_REG_DSTATE 
};
TraceEvent _TRACE_CPU_IOREQ_MOVE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cpu_ioreq_move",
    .sstate = TRACE_CPU_IOREQ_MOVE_ENABLED,
    .dstate = &_TRACE_CPU_IOREQ_MOVE_DSTATE 
};
TraceEvent _TRACE_XEN_MAP_RESOURCE_IOREQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_map_resource_ioreq",
    .sstate = TRACE_XEN_MAP_RESOURCE_IOREQ_ENABLED,
    .dstate = &_TRACE_XEN_MAP_RESOURCE_IOREQ_DSTATE 
};
TraceEvent _TRACE_CPU_IOREQ_CONFIG_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cpu_ioreq_config_read",
    .sstate = TRACE_CPU_IOREQ_CONFIG_READ_ENABLED,
    .dstate = &_TRACE_CPU_IOREQ_CONFIG_READ_DSTATE 
};
TraceEvent _TRACE_CPU_IOREQ_CONFIG_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cpu_ioreq_config_write",
    .sstate = TRACE_CPU_IOREQ_CONFIG_WRITE_ENABLED,
    .dstate = &_TRACE_CPU_IOREQ_CONFIG_WRITE_DSTATE 
};
TraceEvent _TRACE_XEN_MAP_CACHE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_map_cache",
    .sstate = TRACE_XEN_MAP_CACHE_ENABLED,
    .dstate = &_TRACE_XEN_MAP_CACHE_DSTATE 
};
TraceEvent _TRACE_XEN_REMAP_BUCKET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_remap_bucket",
    .sstate = TRACE_XEN_REMAP_BUCKET_ENABLED,
    .dstate = &_TRACE_XEN_REMAP_BUCKET_DSTATE 
};
TraceEvent _TRACE_XEN_MAP_CACHE_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "xen_map_cache_return",
    .sstate = TRACE_XEN_MAP_CACHE_RETURN_ENABLED,
    .dstate = &_TRACE_XEN_MAP_CACHE_RETURN_DSTATE 
};
TraceEvent *hw_i386_xen_trace_events[] = {
    &_TRACE_XEN_PLATFORM_LOG_EVENT,
    &_TRACE_XEN_PV_MMIO_READ_EVENT,
    &_TRACE_XEN_PV_MMIO_WRITE_EVENT,
    &_TRACE_XEN_RAM_ALLOC_EVENT,
    &_TRACE_XEN_CLIENT_SET_MEMORY_EVENT,
    &_TRACE_HANDLE_IOREQ_EVENT,
    &_TRACE_HANDLE_IOREQ_READ_EVENT,
    &_TRACE_HANDLE_IOREQ_WRITE_EVENT,
    &_TRACE_CPU_IOREQ_PIO_EVENT,
    &_TRACE_CPU_IOREQ_PIO_READ_REG_EVENT,
    &_TRACE_CPU_IOREQ_PIO_WRITE_REG_EVENT,
    &_TRACE_CPU_IOREQ_MOVE_EVENT,
    &_TRACE_XEN_MAP_RESOURCE_IOREQ_EVENT,
    &_TRACE_CPU_IOREQ_CONFIG_READ_EVENT,
    &_TRACE_CPU_IOREQ_CONFIG_WRITE_EVENT,
    &_TRACE_XEN_MAP_CACHE_EVENT,
    &_TRACE_XEN_REMAP_BUCKET_EVENT,
    &_TRACE_XEN_MAP_CACHE_RETURN_EVENT,
  NULL,
};

static void trace_hw_i386_xen_register_events(void)
{
    trace_event_register_group(hw_i386_xen_trace_events);
}
trace_init(trace_hw_i386_xen_register_events)
