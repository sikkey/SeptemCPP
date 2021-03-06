/*
	Copyright (c) 2013-2019 7Mersenne All Rights Reserved.

	LICENSE:	GNU General Public License V3.0

	As a special exception,  you may use this file  as part of a free software library without
	restriction.  Specifically,  if other files instantiate templates  or use macros or inline
	functions from this file, or you compile this file and link it with other files to produce
	an executable,  this file does not by itself cause the resulting executable to be covered
	by the GNU General Public License. This exception does not however invalidate any other
	reasons why the executable file might be covered by the GNU General Public License.

	Support Email:	guij@sari.ac.cn
*/

#pragma once

#include "SeptemBuffer.h"
#include <time.h>

namespace Septem
{
	// system timestamp
	static uint64 UnixTimestampMillisecond()
	{
		timespec tp;
		clock_gettime(CLOCK_REALTIME, &tp);
		return tp.tv_sec * 1000LL + tp.tv_nsec / 1000000LL;
	}
}