/*
 * Copyright (C) 2012 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * Author: Debarshi Ray <debarshir@freedesktop.org>
 */

#ifndef __TPL_LOG_WALKER_INTERNAL_H__
#define __TPL_LOG_WALKER_INTERNAL_H__

#include "log-iter-internal.h"
#include "log-manager.h"
#include "log-walker.h"

G_BEGIN_DECLS

TplLogWalker *tpl_log_walker_new (TplLogEventFilter filter,
    gpointer filter_data);

void tpl_log_walker_add_iter (TplLogWalker *walker,
    TplLogIter *iter);

G_END_DECLS

#endif /* __TPL_LOG_WALKER_INTERNAL_H__ */
