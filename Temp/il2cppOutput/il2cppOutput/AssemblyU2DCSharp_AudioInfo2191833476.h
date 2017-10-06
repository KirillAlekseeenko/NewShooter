#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioInfo
struct  AudioInfo_t2191833476  : public Il2CppObject
{
public:
	// System.Boolean AudioInfo::muted
	bool ___muted_0;
	// System.Single AudioInfo::audioVolume
	float ___audioVolume_1;
	// System.Single AudioInfo::musicVolume
	float ___musicVolume_2;
	// System.Single AudioInfo::effectsVolume
	float ___effectsVolume_3;

public:
	inline static int32_t get_offset_of_muted_0() { return static_cast<int32_t>(offsetof(AudioInfo_t2191833476, ___muted_0)); }
	inline bool get_muted_0() const { return ___muted_0; }
	inline bool* get_address_of_muted_0() { return &___muted_0; }
	inline void set_muted_0(bool value)
	{
		___muted_0 = value;
	}

	inline static int32_t get_offset_of_audioVolume_1() { return static_cast<int32_t>(offsetof(AudioInfo_t2191833476, ___audioVolume_1)); }
	inline float get_audioVolume_1() const { return ___audioVolume_1; }
	inline float* get_address_of_audioVolume_1() { return &___audioVolume_1; }
	inline void set_audioVolume_1(float value)
	{
		___audioVolume_1 = value;
	}

	inline static int32_t get_offset_of_musicVolume_2() { return static_cast<int32_t>(offsetof(AudioInfo_t2191833476, ___musicVolume_2)); }
	inline float get_musicVolume_2() const { return ___musicVolume_2; }
	inline float* get_address_of_musicVolume_2() { return &___musicVolume_2; }
	inline void set_musicVolume_2(float value)
	{
		___musicVolume_2 = value;
	}

	inline static int32_t get_offset_of_effectsVolume_3() { return static_cast<int32_t>(offsetof(AudioInfo_t2191833476, ___effectsVolume_3)); }
	inline float get_effectsVolume_3() const { return ___effectsVolume_3; }
	inline float* get_address_of_effectsVolume_3() { return &___effectsVolume_3; }
	inline void set_effectsVolume_3(float value)
	{
		___effectsVolume_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
