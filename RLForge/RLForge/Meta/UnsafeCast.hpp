#pragma once

#include <type_traits>
#include <utility>


template<typename Target,typename Source,class = std::enable_if_t<(sizeof(Target) == sizeof(Source))>>
inline Target unsafe_cast(const Source& Source)
{
	union _u
	{
		Source s;
		Target t;
	} u;
	u.s = Source;
	return u.t;
}