#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// GunScript
struct GunScript_t3877404171;
// LevelManagerScript/Level
struct Level_t644710249;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_GunScript3877404171.h"
#include "AssemblyU2DCSharp_LevelManagerScript_Level644710249.h"

#pragma once
// GunScript[]
struct GunScriptU5BU5D_t132172138  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GunScript_t3877404171 * m_Items[1];

public:
	inline GunScript_t3877404171 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GunScript_t3877404171 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GunScript_t3877404171 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// LevelManagerScript/Level[]
struct LevelU5BU5D_t316043476  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Level_t644710249 * m_Items[1];

public:
	inline Level_t644710249 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Level_t644710249 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Level_t644710249 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
