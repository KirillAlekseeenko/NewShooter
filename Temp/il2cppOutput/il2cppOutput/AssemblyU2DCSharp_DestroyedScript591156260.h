#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyedScript
struct  DestroyedScript_t591156260  : public MonoBehaviour_t667441552
{
public:
	// System.Single DestroyedScript::lifetime
	float ___lifetime_2;
	// System.Single DestroyedScript::explosionForce
	float ___explosionForce_3;
	// System.Single DestroyedScript::explosionRadius
	float ___explosionRadius_4;
	// UnityEngine.Vector3 DestroyedScript::explosionSite
	Vector3_t4282066566  ___explosionSite_5;

public:
	inline static int32_t get_offset_of_lifetime_2() { return static_cast<int32_t>(offsetof(DestroyedScript_t591156260, ___lifetime_2)); }
	inline float get_lifetime_2() const { return ___lifetime_2; }
	inline float* get_address_of_lifetime_2() { return &___lifetime_2; }
	inline void set_lifetime_2(float value)
	{
		___lifetime_2 = value;
	}

	inline static int32_t get_offset_of_explosionForce_3() { return static_cast<int32_t>(offsetof(DestroyedScript_t591156260, ___explosionForce_3)); }
	inline float get_explosionForce_3() const { return ___explosionForce_3; }
	inline float* get_address_of_explosionForce_3() { return &___explosionForce_3; }
	inline void set_explosionForce_3(float value)
	{
		___explosionForce_3 = value;
	}

	inline static int32_t get_offset_of_explosionRadius_4() { return static_cast<int32_t>(offsetof(DestroyedScript_t591156260, ___explosionRadius_4)); }
	inline float get_explosionRadius_4() const { return ___explosionRadius_4; }
	inline float* get_address_of_explosionRadius_4() { return &___explosionRadius_4; }
	inline void set_explosionRadius_4(float value)
	{
		___explosionRadius_4 = value;
	}

	inline static int32_t get_offset_of_explosionSite_5() { return static_cast<int32_t>(offsetof(DestroyedScript_t591156260, ___explosionSite_5)); }
	inline Vector3_t4282066566  get_explosionSite_5() const { return ___explosionSite_5; }
	inline Vector3_t4282066566 * get_address_of_explosionSite_5() { return &___explosionSite_5; }
	inline void set_explosionSite_5(Vector3_t4282066566  value)
	{
		___explosionSite_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
