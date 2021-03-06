/*======================================================================
 FILE: icalmime.h
 CREATOR: eric 26 July 2000

 (C) COPYRIGHT 2000, Eric Busboom <eric@civicknowledge.com>

 This library is free software; you can redistribute it and/or modify
 it under the terms of either:

    The LGPL as published by the Free Software Foundation, version
    2.1, available at: https://www.gnu.org/licenses/lgpl-2.1.html

 Or:

    The Mozilla Public License Version 2.0. You may obtain a copy of
    the License at https://www.mozilla.org/MPL/
======================================================================*/

#ifndef ICALMIME_H
#define ICALMIME_H

#include "libical_ical_export.h"
#include "icalcomponent.h"

LIBICAL_ICAL_EXPORT icalcomponent *icalmime_parse(char *(*line_gen_func) (char *s,
                                                                          size_t size,
                                                                          void *d), void *data);

#endif /* !ICALMIME_H */
