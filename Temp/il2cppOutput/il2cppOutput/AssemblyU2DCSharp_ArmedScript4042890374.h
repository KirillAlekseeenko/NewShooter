#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// GunScript[]
struct GunScriptU5BU5D_t132172138;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArmedScript
struct  ArmedScript_t4042890374  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioClip ArmedScript::shootEffect
	AudioClip_t794140988 * ___shootEffect_2;
	// UnityEngine.GameObject[] ArmedScript::targets
	GameObjectU5BU5D_t2662109048* ___targets_3;
	// GunScript[] ArmedScript::targetComponents
	GunScriptU5BU5D_t132172138* ___targetComponents_4;
	// UnityEngine.GameObject ArmedScript::traceParticlePrefab
	GameObject_t3674682005 * ___traceParticlePrefab_5;
	// UnityEngine.GameObject ArmedScript::traceParticle
	GameObject_t3674682005 * ___traceParticle_6;
	// UnityEngine.ParticleSystem ArmedScript::traceComponent
	ParticleSystem_t381473177 * ___traceComponent_7;
	// System.Boolean ArmedScript::isShooting
	bool ___isShooting_8;
	// System.Single ArmedScript::damage
	float ___damage_9;
	// System.Single ArmedScript::scatter
	float ___scatter_10;
	// System.Single ArmedScript::shift
	float ___shift_11;

public:
	inline static int32_t get_offset_of_shootEffect_2() { return static_cast<int32_t>(offsetof(ArmedScript_t4042890374, ___shootEffect_2)); }
	inline AudioClip_t794140988 * get_shootEffect_2() const { return ___shootEffect_2; }
	inline AudioClip_t794140988 ** get_address_of_shootEffect_2() { return &___shootEffect_2; }
	inline void set_shootEffect_2(AudioClip_t794140988 * value)
	{
		___shootEffect_2 = value;
		Il2CppCodeGenWriteBarrier(&___shootEffect_2, value);
	}

	inline static int32_t get_offset_of_targets_3() { return static_cast<int32_t>(offsetof(ArmedScript_t4042890374, ___targets_3)); }
	inline GameObjectU5BU5D_t2662109048* get_targets_3() const { return ___targets_3; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_targets_3() { return &___targets_3; }
	inline void set_targets_3(GameObjectU5BU5D_t2662109048* value)
	{
		___targets_3 = value;
		Il2CppCodeGenWriteBarrier(&___targets_3, value);
	}

	inline static int32_t get_offset_of_targetComponents_4() { return static_cast<int32_t>(offsetof(ArmedScript_t4042890374, ___targetComponents_4)); }
	inline GunScriptU5BU5D_t132172138* get_targetComponents_4() const { return ___targetComponents_4; }
	inline GunScriptU5BU5D_t132172138** get_address_of_targetComponents_4() { return &___targetComponents_4; }
	inline void set_targetComponents_4(GunScriptU5BU5D_t132172138* value)
	{
		___targetComponents_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetComponents_4, value);
	}

	inline static int32_t get_offset_of_traceParticlePrefab_5() { return static_cast<int32_t>(offsetof(ArmedScript_t4042890374, ___traceParticlePrefab_5)); }
	inline GameObject_t3674682005 * get_traceParticlePrefab_5() const { return ___traceParticlePrefab_5; }
	inline GameObject_t3674682005 ** get_address_of_traceParticlePrefab_5() { return &___traceParticlePrefab_5; }
	inline void set_traceParticlePrefab_5(GameObject_t3674682005 * value)
	{
		___traceParticlePrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___traceParticlePrefab_5, value);
	}

	inline static int32_t get_offset_of_traceParticle_6() { return static_cast<int32_t>(offsetof(ArmedScript_t4042890374, ___traceParticle_6)); }
	inline GameObject_t3674682005 * get_traceParticle_6() const { return ___traceParticle_6; }
	inline GameObject_t3674682005 ** get_address_of_traceParticle_6() { return &___traceParticle_6; }
	inline void set_traceParticle_6(GameObject_t3674682005 * value)
	{
		___traceParticle_6 = value;
		Il2CppCodeGenWriteBarrier(&___traceParticle_6, value);
	}

	inline static int32_t get_offset_of_traceComponent_7() { return static_cast<int32_t>(offsetof(ArmedScript_t4042890374, ___traceComponent_7)); }
	inline ParticleSystem_t381473177 * get_traceComponent_7() const { return ___traceComponent_7; }
	inline ParticleSystem_t381473177 ** get_address_of_traceComponent_7() { return &___traceComponent_7; }
	inline void set_traceComponent_7(ParticleSystem_t381473177 * value)
	{
		___traceComponent_7 = value;
		Il2CppCodeGenWriteBarrier(&___traceComponent_7, value);
	}

	inline static int32_t get_offset_of_isShooting_8() { return static_cast<int32_t>(offsetof(ArmedScript_t4042890374, ___isShooting_8)); }
	inline bool get_isShooting_8() const { return ___isShooting_8; }
	inline bool* get_address_of_isShooting_8() { return &___isShooting_8; }
	inline void set_isShooting_8(bool value)
	{
		___isShooting_8 = value;
	}

	inline static int32_t get_offset_of_damage_9() { return static_cast<int32_t>(offsetof(ArmedScript_t4042890374, ___damage_9)); }
	inline float get_damage_9() const { return ___damage_9; }
	inline float* get_address_of_damage_9() { return &___damage_9; }
	inline void set_damage_9(float value)
	{
		___damage_9 = value;
	}

	inline static int32_t get_offset_of_scatter_10() { return static_cast<int32_t>(offsetof(ArmedScript_t4042890374, ___scatter_10)); }
	inline float get_scatter_10() const { return ___scatter_10; }
	inline float* get_address_of_scatter_10() { return &___scatter_10; }
	inline void set_scatter_10(float value)
	{
		___scatter_10 = value;
	}

	inline static int32_t get_offset_of_shift_11() { return static_cast<int32_t>(offsetof(ArmedScript_t4042890374, ___shift_11)); }
	inline float get_shift_11() const { return ___shift_11; }
	inline float* get_address_of_shift_11() { return &___shift_11; }
	inline void set_shift_11(float value)
	{
		___shift_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
