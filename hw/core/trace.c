/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace.h"

uint16_t _TRACE_LOADER_WRITE_ROM_DSTATE;
TraceEvent _TRACE_LOADER_WRITE_ROM_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "loader_write_rom",
    .sstate = TRACE_LOADER_WRITE_ROM_ENABLED,
    .dstate = &_TRACE_LOADER_WRITE_ROM_DSTATE 
};
TraceEvent *hw_core_trace_events[] = {
    &_TRACE_LOADER_WRITE_ROM_EVENT,
  NULL,
};

static void trace_hw_core_register_events(void)
{
    trace_event_register_group(hw_core_trace_events);
}
trace_init(trace_hw_core_register_events)