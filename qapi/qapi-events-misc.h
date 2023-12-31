/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP events
 *
 * Copyright (c) 2014 Wenchao Xia
 * Copyright (c) 2015-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_EVENTS_MISC_H
#define QAPI_EVENTS_MISC_H

#include "qapi-events-common.h"
#include "qapi/util.h"
#include "qapi-types-misc.h"

void qapi_event_send_balloon_change(int64_t actual);

void qapi_event_send_mem_unplug_error(const char *device, const char *msg);

void qapi_event_send_acpi_device_ost(ACPIOSTInfo *info);

void qapi_event_send_xen_platform_pv_driver_info(int64_t product_num, int64_t build_num);

#endif /* QAPI_EVENTS_MISC_H */
