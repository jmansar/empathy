/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 2009 Collabora Ltd.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 * 
 * Author: Cosimo Cecchi <cosimo.cecchi@collabora.co.uk>
 *
 */

#ifndef __EMPATHY_MISC_H__
#define __EMPATHY_MISC_H__

#include <glib.h>

G_BEGIN_DECLS

/* FIXME: this should *really* belong to libnotify. */
typedef enum {
	NOTIFICATION_CLOSED_INVALID = 0,
	NOTIFICATION_CLOSED_EXPIRED = 1,
	NOTIFICATION_CLOSED_DISMISSED = 2,
	NOTIFICATION_CLOSED_PROGRAMMATICALY = 3,
	NOTIFICATION_CLOSED_RESERVED = 4
} NotificationClosedReason;

gboolean    empathy_notification_is_enabled  (void);

G_END_DECLS

#endif /* __EMPATHY_MISC_H__ */