/*
 * SNOOPY LOGGER
 *
 * File: snoopy/input/snoopy_version.c
 *
 * Copyright (c) 2014 bostjan@a2o.si
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */



/*
 * SNOOPY INPUT: snoopy_version
 *
 * Description:
 *     Dummy input provider that returns snoopy version.
 *
 * Params:
 *     input: pointer to string, to write result into
 *
 * Return:
 *     number of characters in the returned string
 */
#include "snoopy.h"
#include <stdio.h>
/* Needed to get getpgid and getsid on older glibc */
#define   _XOPEN_SOURCE   500
#include <unistd.h>
#include <sys/types.h>



int snoopy_input_snoopy_version (char *input, char *arg)
{
    return snprintf(input, SNOOPY_INPUT_MESSAGE_MAX_SIZE, "%s", SNOOPY_VERSION);
}
