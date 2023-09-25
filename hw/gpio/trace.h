/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_GPIO_GENERATED_TRACERS_H
#define TRACE_HW_GPIO_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_NRF51_GPIO_READ_EVENT;
extern TraceEvent _TRACE_NRF51_GPIO_WRITE_EVENT;
extern TraceEvent _TRACE_NRF51_GPIO_SET_EVENT;
extern TraceEvent _TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_EVENT;
extern uint16_t _TRACE_NRF51_GPIO_READ_DSTATE;
extern uint16_t _TRACE_NRF51_GPIO_WRITE_DSTATE;
extern uint16_t _TRACE_NRF51_GPIO_SET_DSTATE;
extern uint16_t _TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_DSTATE;
#define TRACE_NRF51_GPIO_READ_ENABLED 1
#define TRACE_NRF51_GPIO_WRITE_ENABLED 1
#define TRACE_NRF51_GPIO_SET_ENABLED 1
#define TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_ENABLED 1
#include "qemu/log-for-trace.h"


#define TRACE_NRF51_GPIO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_READ) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_read(uint64_t offset, uint64_t r)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:nrf51_gpio_read " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , offset, r);
    }
}

static inline void trace_nrf51_gpio_read(uint64_t offset, uint64_t r)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_read(offset, r);
    }
}

#define TRACE_NRF51_GPIO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_WRITE) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_write(uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:nrf51_gpio_write " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , offset, value);
    }
}

static inline void trace_nrf51_gpio_write(uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_write(offset, value);
    }
}

#define TRACE_NRF51_GPIO_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_SET) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_set(int64_t line, int64_t value)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:nrf51_gpio_set " "line %" PRIi64 " value %" PRIi64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , line, value);
    }
}

static inline void trace_nrf51_gpio_set(int64_t line, int64_t value)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_set(line, value);
    }
}

#define TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_update_output_irq(int64_t line, int64_t value)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:nrf51_gpio_update_output_irq " "line %" PRIi64 " value %" PRIi64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , line, value);
    }
}

static inline void trace_nrf51_gpio_update_output_irq(int64_t line, int64_t value)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_update_output_irq(line, value);
    }
}
#endif /* TRACE_HW_GPIO_GENERATED_TRACERS_H */
