#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<LevelManagerScript/Level>
struct List_1_t2012895801;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManagerScript/LevelListWrapper
struct  LevelListWrapper_t2708912876  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<LevelManagerScript/Level> LevelManagerScript/LevelListWrapper::levelList
	List_1_t2012895801 * ___levelList_0;

public:
	inline static int32_t get_offset_of_levelList_0() { return static_cast<int32_t>(offsetof(LevelListWrapper_t2708912876, ___levelList_0)); }
	inline List_1_t2012895801 * get_levelList_0() const { return ___levelList_0; }
	inline List_1_t2012895801 ** get_address_of_levelList_0() { return &___levelList_0; }
	inline void set_levelList_0(List_1_t2012895801 * value)
	{
		___levelList_0 = value;
		Il2CppCodeGenWriteBarrier(&___levelList_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
