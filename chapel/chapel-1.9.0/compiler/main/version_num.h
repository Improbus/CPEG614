/**************************************************************************
  Copyright (c) 2004-2014, Cray Inc.  (See LICENSE file for more details)
**************************************************************************/


#ifndef _version_num_H_
#define _version_num_H_

#define MAJOR_VERSION 1
#define MINOR_VERSION "9"
#define UPDATE_VERSION "0"

static const int BUILD_VERSION =
#include "BUILD_VERSION"
;

#endif