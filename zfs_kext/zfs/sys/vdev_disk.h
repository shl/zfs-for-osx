/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License, Version 1.0 only
 * (the "License").  You may not use this file except in compliance
 * with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*
 * Copyright 2005 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 * Portions Copyright 2007 Apple Inc. All rights reserved.
 * Use is subject to license terms.
 */

#ifndef _SYS_VDEV_DISK_H
#define	_SYS_VDEV_DISK_H

#pragma ident	"%Z%%M%	%I%	%E% SMI"

#include <sys/vdev.h>
#ifndef __APPLE__
#ifdef _KERNEL
#include <sys/sunldi.h>
#include <sys/sunddi.h>
#endif
#endif /* !__APPLE__ */

#ifdef	__cplusplus
extern "C" {
#endif

typedef struct vdev_disk {
#ifdef __APPLE__
	char		*vd_minor;
	struct vnode	*vd_devvp;
#else
	ddi_devid_t	vd_devid;
	char		*vd_minor;
	ldi_handle_t	vd_lh;
#endif
} vdev_disk_t;

#ifdef	__cplusplus
}
#endif

#endif	/* _SYS_VDEV_DISK_H */
