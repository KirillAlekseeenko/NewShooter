#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t2162326540;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExplosionScript
struct  ExplosionScript_t628245536  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> ExplosionScript::explosionEffects
	List_1_t2162326540 * ___explosionEffects_2;
	// System.Single ExplosionScript::lifetime
	float ___lifetime_3;

public:
	inline static int32_t get_offset_of_explosionEffects_2() { return static_cast<int32_t>(offsetof(ExplosionScript_t628245536, ___explosionEffects_2)); }
	inline List_1_t2162326540 * get_explosionEffects_2() const { return ___explosionEffects_2; }
	inline List_1_t2162326540 ** get_address_of_explosionEffects_2() { return &___explosionEffects_2; }
	inline void set_explosionEffects_2(List_1_t2162326540 * value)
	{
		___explosionEffects_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosionEffects_2, value);
	}

	inline static int32_t get_offset_of_lifetime_3() { return static_cast<int32_t>(offsetof(ExplosionScript_t628245536, ___lifetime_3)); }
	inline float get_lifetime_3() const { return ___lifetime_3; }
	inline float* get_address_of_lifetime_3() { return &___lifetime_3; }
	inline void set_lifetime_3(float value)
	{
		___lifetime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
