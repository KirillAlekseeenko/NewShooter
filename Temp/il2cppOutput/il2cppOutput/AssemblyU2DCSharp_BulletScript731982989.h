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
// UnityEngine.GameObject
struct GameObject_t3674682005;
// BulletScript/hitAction
struct hitAction_t1151084711;
// BulletScript/friendlyFireAction
struct friendlyFireAction_t763880409;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_EnemyScript_EnemyManeuver56795301.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletScript
struct  BulletScript_t731982989  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioClip BulletScript::shotEffect
	AudioClip_t794140988 * ___shotEffect_2;
	// UnityEngine.AudioClip BulletScript::reboundEffect
	AudioClip_t794140988 * ___reboundEffect_3;
	// System.Single BulletScript::lifetime
	float ___lifetime_4;
	// UnityEngine.GameObject BulletScript::Explosion
	GameObject_t3674682005 * ___Explosion_5;
	// UnityEngine.GameObject BulletScript::Destroyed
	GameObject_t3674682005 * ___Destroyed_6;
	// EnemyScript/EnemyManeuver BulletScript::enemyType
	int32_t ___enemyType_7;

public:
	inline static int32_t get_offset_of_shotEffect_2() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___shotEffect_2)); }
	inline AudioClip_t794140988 * get_shotEffect_2() const { return ___shotEffect_2; }
	inline AudioClip_t794140988 ** get_address_of_shotEffect_2() { return &___shotEffect_2; }
	inline void set_shotEffect_2(AudioClip_t794140988 * value)
	{
		___shotEffect_2 = value;
		Il2CppCodeGenWriteBarrier(&___shotEffect_2, value);
	}

	inline static int32_t get_offset_of_reboundEffect_3() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___reboundEffect_3)); }
	inline AudioClip_t794140988 * get_reboundEffect_3() const { return ___reboundEffect_3; }
	inline AudioClip_t794140988 ** get_address_of_reboundEffect_3() { return &___reboundEffect_3; }
	inline void set_reboundEffect_3(AudioClip_t794140988 * value)
	{
		___reboundEffect_3 = value;
		Il2CppCodeGenWriteBarrier(&___reboundEffect_3, value);
	}

	inline static int32_t get_offset_of_lifetime_4() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___lifetime_4)); }
	inline float get_lifetime_4() const { return ___lifetime_4; }
	inline float* get_address_of_lifetime_4() { return &___lifetime_4; }
	inline void set_lifetime_4(float value)
	{
		___lifetime_4 = value;
	}

	inline static int32_t get_offset_of_Explosion_5() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___Explosion_5)); }
	inline GameObject_t3674682005 * get_Explosion_5() const { return ___Explosion_5; }
	inline GameObject_t3674682005 ** get_address_of_Explosion_5() { return &___Explosion_5; }
	inline void set_Explosion_5(GameObject_t3674682005 * value)
	{
		___Explosion_5 = value;
		Il2CppCodeGenWriteBarrier(&___Explosion_5, value);
	}

	inline static int32_t get_offset_of_Destroyed_6() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___Destroyed_6)); }
	inline GameObject_t3674682005 * get_Destroyed_6() const { return ___Destroyed_6; }
	inline GameObject_t3674682005 ** get_address_of_Destroyed_6() { return &___Destroyed_6; }
	inline void set_Destroyed_6(GameObject_t3674682005 * value)
	{
		___Destroyed_6 = value;
		Il2CppCodeGenWriteBarrier(&___Destroyed_6, value);
	}

	inline static int32_t get_offset_of_enemyType_7() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___enemyType_7)); }
	inline int32_t get_enemyType_7() const { return ___enemyType_7; }
	inline int32_t* get_address_of_enemyType_7() { return &___enemyType_7; }
	inline void set_enemyType_7(int32_t value)
	{
		___enemyType_7 = value;
	}
};

struct BulletScript_t731982989_StaticFields
{
public:
	// BulletScript/hitAction BulletScript::onHit
	hitAction_t1151084711 * ___onHit_8;
	// BulletScript/friendlyFireAction BulletScript::onFriendlyFire
	friendlyFireAction_t763880409 * ___onFriendlyFire_9;

public:
	inline static int32_t get_offset_of_onHit_8() { return static_cast<int32_t>(offsetof(BulletScript_t731982989_StaticFields, ___onHit_8)); }
	inline hitAction_t1151084711 * get_onHit_8() const { return ___onHit_8; }
	inline hitAction_t1151084711 ** get_address_of_onHit_8() { return &___onHit_8; }
	inline void set_onHit_8(hitAction_t1151084711 * value)
	{
		___onHit_8 = value;
		Il2CppCodeGenWriteBarrier(&___onHit_8, value);
	}

	inline static int32_t get_offset_of_onFriendlyFire_9() { return static_cast<int32_t>(offsetof(BulletScript_t731982989_StaticFields, ___onFriendlyFire_9)); }
	inline friendlyFireAction_t763880409 * get_onFriendlyFire_9() const { return ___onFriendlyFire_9; }
	inline friendlyFireAction_t763880409 ** get_address_of_onFriendlyFire_9() { return &___onFriendlyFire_9; }
	inline void set_onFriendlyFire_9(friendlyFireAction_t763880409 * value)
	{
		___onFriendlyFire_9 = value;
		Il2CppCodeGenWriteBarrier(&___onFriendlyFire_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
