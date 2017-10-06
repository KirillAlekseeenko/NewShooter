#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_EnemyScript_EnemyManeuver56795301.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GunScript
struct  GunScript_t3877404171  : public MonoBehaviour_t667441552
{
public:
	// System.Single GunScript::speed
	float ___speed_2;
	// System.Single GunScript::bulletSpeed
	float ___bulletSpeed_3;
	// EnemyScript/EnemyManeuver GunScript::enemyType
	int32_t ___enemyType_4;
	// UnityEngine.GameObject GunScript::bullet
	GameObject_t3674682005 * ___bullet_5;
	// UnityEngine.GameObject GunScript::bulletSpawn
	GameObject_t3674682005 * ___bulletSpawn_6;
	// UnityEngine.GameObject GunScript::reloadBar
	GameObject_t3674682005 * ___reloadBar_7;
	// UnityEngine.GameObject GunScript::healthBar
	GameObject_t3674682005 * ___healthBar_8;
	// System.Single GunScript::fireRate
	float ___fireRate_9;
	// System.String GunScript::inputName
	String_t* ___inputName_10;
	// System.Single GunScript::nextFire
	float ___nextFire_11;
	// System.Single GunScript::catet
	float ___catet_12;
	// System.Single GunScript::laserLength
	float ___laserLength_13;
	// System.Single GunScript::fullHealth
	float ___fullHealth_14;
	// System.Single GunScript::health
	float ___health_15;
	// System.Single GunScript::repairedPerFrame
	float ___repairedPerFrame_16;
	// System.Boolean GunScript::isFreezed
	bool ___isFreezed_17;
	// UnityEngine.GameObject GunScript::destroyedGun
	GameObject_t3674682005 * ___destroyedGun_18;
	// UnityEngine.GameObject GunScript::normalGun
	GameObject_t3674682005 * ___normalGun_19;
	// UnityEngine.GameObject GunScript::explosion
	GameObject_t3674682005 * ___explosion_20;
	// UnityEngine.GameObject GunScript::mainLaser
	GameObject_t3674682005 * ___mainLaser_21;
	// UnityEngine.GameObject GunScript::laserReflection
	GameObject_t3674682005 * ___laserReflection_22;
	// UnityEngine.GameObject GunScript::wallReflection
	GameObject_t3674682005 * ___wallReflection_23;
	// System.Boolean GunScript::isRight
	bool ___isRight_24;
	// System.Boolean GunScript::isReflectionOn
	bool ___isReflectionOn_25;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_bulletSpeed_3() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___bulletSpeed_3)); }
	inline float get_bulletSpeed_3() const { return ___bulletSpeed_3; }
	inline float* get_address_of_bulletSpeed_3() { return &___bulletSpeed_3; }
	inline void set_bulletSpeed_3(float value)
	{
		___bulletSpeed_3 = value;
	}

	inline static int32_t get_offset_of_enemyType_4() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___enemyType_4)); }
	inline int32_t get_enemyType_4() const { return ___enemyType_4; }
	inline int32_t* get_address_of_enemyType_4() { return &___enemyType_4; }
	inline void set_enemyType_4(int32_t value)
	{
		___enemyType_4 = value;
	}

	inline static int32_t get_offset_of_bullet_5() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___bullet_5)); }
	inline GameObject_t3674682005 * get_bullet_5() const { return ___bullet_5; }
	inline GameObject_t3674682005 ** get_address_of_bullet_5() { return &___bullet_5; }
	inline void set_bullet_5(GameObject_t3674682005 * value)
	{
		___bullet_5 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_5, value);
	}

	inline static int32_t get_offset_of_bulletSpawn_6() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___bulletSpawn_6)); }
	inline GameObject_t3674682005 * get_bulletSpawn_6() const { return ___bulletSpawn_6; }
	inline GameObject_t3674682005 ** get_address_of_bulletSpawn_6() { return &___bulletSpawn_6; }
	inline void set_bulletSpawn_6(GameObject_t3674682005 * value)
	{
		___bulletSpawn_6 = value;
		Il2CppCodeGenWriteBarrier(&___bulletSpawn_6, value);
	}

	inline static int32_t get_offset_of_reloadBar_7() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___reloadBar_7)); }
	inline GameObject_t3674682005 * get_reloadBar_7() const { return ___reloadBar_7; }
	inline GameObject_t3674682005 ** get_address_of_reloadBar_7() { return &___reloadBar_7; }
	inline void set_reloadBar_7(GameObject_t3674682005 * value)
	{
		___reloadBar_7 = value;
		Il2CppCodeGenWriteBarrier(&___reloadBar_7, value);
	}

	inline static int32_t get_offset_of_healthBar_8() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___healthBar_8)); }
	inline GameObject_t3674682005 * get_healthBar_8() const { return ___healthBar_8; }
	inline GameObject_t3674682005 ** get_address_of_healthBar_8() { return &___healthBar_8; }
	inline void set_healthBar_8(GameObject_t3674682005 * value)
	{
		___healthBar_8 = value;
		Il2CppCodeGenWriteBarrier(&___healthBar_8, value);
	}

	inline static int32_t get_offset_of_fireRate_9() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___fireRate_9)); }
	inline float get_fireRate_9() const { return ___fireRate_9; }
	inline float* get_address_of_fireRate_9() { return &___fireRate_9; }
	inline void set_fireRate_9(float value)
	{
		___fireRate_9 = value;
	}

	inline static int32_t get_offset_of_inputName_10() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___inputName_10)); }
	inline String_t* get_inputName_10() const { return ___inputName_10; }
	inline String_t** get_address_of_inputName_10() { return &___inputName_10; }
	inline void set_inputName_10(String_t* value)
	{
		___inputName_10 = value;
		Il2CppCodeGenWriteBarrier(&___inputName_10, value);
	}

	inline static int32_t get_offset_of_nextFire_11() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___nextFire_11)); }
	inline float get_nextFire_11() const { return ___nextFire_11; }
	inline float* get_address_of_nextFire_11() { return &___nextFire_11; }
	inline void set_nextFire_11(float value)
	{
		___nextFire_11 = value;
	}

	inline static int32_t get_offset_of_catet_12() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___catet_12)); }
	inline float get_catet_12() const { return ___catet_12; }
	inline float* get_address_of_catet_12() { return &___catet_12; }
	inline void set_catet_12(float value)
	{
		___catet_12 = value;
	}

	inline static int32_t get_offset_of_laserLength_13() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___laserLength_13)); }
	inline float get_laserLength_13() const { return ___laserLength_13; }
	inline float* get_address_of_laserLength_13() { return &___laserLength_13; }
	inline void set_laserLength_13(float value)
	{
		___laserLength_13 = value;
	}

	inline static int32_t get_offset_of_fullHealth_14() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___fullHealth_14)); }
	inline float get_fullHealth_14() const { return ___fullHealth_14; }
	inline float* get_address_of_fullHealth_14() { return &___fullHealth_14; }
	inline void set_fullHealth_14(float value)
	{
		___fullHealth_14 = value;
	}

	inline static int32_t get_offset_of_health_15() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___health_15)); }
	inline float get_health_15() const { return ___health_15; }
	inline float* get_address_of_health_15() { return &___health_15; }
	inline void set_health_15(float value)
	{
		___health_15 = value;
	}

	inline static int32_t get_offset_of_repairedPerFrame_16() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___repairedPerFrame_16)); }
	inline float get_repairedPerFrame_16() const { return ___repairedPerFrame_16; }
	inline float* get_address_of_repairedPerFrame_16() { return &___repairedPerFrame_16; }
	inline void set_repairedPerFrame_16(float value)
	{
		___repairedPerFrame_16 = value;
	}

	inline static int32_t get_offset_of_isFreezed_17() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___isFreezed_17)); }
	inline bool get_isFreezed_17() const { return ___isFreezed_17; }
	inline bool* get_address_of_isFreezed_17() { return &___isFreezed_17; }
	inline void set_isFreezed_17(bool value)
	{
		___isFreezed_17 = value;
	}

	inline static int32_t get_offset_of_destroyedGun_18() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___destroyedGun_18)); }
	inline GameObject_t3674682005 * get_destroyedGun_18() const { return ___destroyedGun_18; }
	inline GameObject_t3674682005 ** get_address_of_destroyedGun_18() { return &___destroyedGun_18; }
	inline void set_destroyedGun_18(GameObject_t3674682005 * value)
	{
		___destroyedGun_18 = value;
		Il2CppCodeGenWriteBarrier(&___destroyedGun_18, value);
	}

	inline static int32_t get_offset_of_normalGun_19() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___normalGun_19)); }
	inline GameObject_t3674682005 * get_normalGun_19() const { return ___normalGun_19; }
	inline GameObject_t3674682005 ** get_address_of_normalGun_19() { return &___normalGun_19; }
	inline void set_normalGun_19(GameObject_t3674682005 * value)
	{
		___normalGun_19 = value;
		Il2CppCodeGenWriteBarrier(&___normalGun_19, value);
	}

	inline static int32_t get_offset_of_explosion_20() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___explosion_20)); }
	inline GameObject_t3674682005 * get_explosion_20() const { return ___explosion_20; }
	inline GameObject_t3674682005 ** get_address_of_explosion_20() { return &___explosion_20; }
	inline void set_explosion_20(GameObject_t3674682005 * value)
	{
		___explosion_20 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_20, value);
	}

	inline static int32_t get_offset_of_mainLaser_21() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___mainLaser_21)); }
	inline GameObject_t3674682005 * get_mainLaser_21() const { return ___mainLaser_21; }
	inline GameObject_t3674682005 ** get_address_of_mainLaser_21() { return &___mainLaser_21; }
	inline void set_mainLaser_21(GameObject_t3674682005 * value)
	{
		___mainLaser_21 = value;
		Il2CppCodeGenWriteBarrier(&___mainLaser_21, value);
	}

	inline static int32_t get_offset_of_laserReflection_22() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___laserReflection_22)); }
	inline GameObject_t3674682005 * get_laserReflection_22() const { return ___laserReflection_22; }
	inline GameObject_t3674682005 ** get_address_of_laserReflection_22() { return &___laserReflection_22; }
	inline void set_laserReflection_22(GameObject_t3674682005 * value)
	{
		___laserReflection_22 = value;
		Il2CppCodeGenWriteBarrier(&___laserReflection_22, value);
	}

	inline static int32_t get_offset_of_wallReflection_23() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___wallReflection_23)); }
	inline GameObject_t3674682005 * get_wallReflection_23() const { return ___wallReflection_23; }
	inline GameObject_t3674682005 ** get_address_of_wallReflection_23() { return &___wallReflection_23; }
	inline void set_wallReflection_23(GameObject_t3674682005 * value)
	{
		___wallReflection_23 = value;
		Il2CppCodeGenWriteBarrier(&___wallReflection_23, value);
	}

	inline static int32_t get_offset_of_isRight_24() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___isRight_24)); }
	inline bool get_isRight_24() const { return ___isRight_24; }
	inline bool* get_address_of_isRight_24() { return &___isRight_24; }
	inline void set_isRight_24(bool value)
	{
		___isRight_24 = value;
	}

	inline static int32_t get_offset_of_isReflectionOn_25() { return static_cast<int32_t>(offsetof(GunScript_t3877404171, ___isReflectionOn_25)); }
	inline bool get_isReflectionOn_25() const { return ___isReflectionOn_25; }
	inline bool* get_address_of_isReflectionOn_25() { return &___isReflectionOn_25; }
	inline void set_isReflectionOn_25(bool value)
	{
		___isReflectionOn_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
