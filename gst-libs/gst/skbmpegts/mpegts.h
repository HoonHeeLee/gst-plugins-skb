/*
 * mpegts.h -
 * Copyright (C) 2013 Edward Hervey
 *
 * Authors:
 *   Edward Hervey <edward@collabora.com>
 *
 * This library is free softwagre; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef _GST_MPEGTS_H_
#define _GST_MPEGTS_H_

#ifndef GST_USE_UNSTABLE_API
#warning "The GStreamer mpegts library is unstable API and may change in future."
#warning "You can define GST_USE_UNSTABLE_API to avoid this warning."
#endif

#include <gst/skbmpegts/gstmpegtsdescriptor.h>
#include <gst/skbmpegts/gst-dvb-descriptor.h>
#include <gst/skbmpegts/gstmpegtssection.h>
#include <gst/skbmpegts/gst-atsc-section.h>
#include <gst/skbmpegts/gst-dvb-section.h>
#include <gst/skbmpegts/gstmpegts-enumtypes.h>

void gst_mpegts_initialize (void);

#endif
