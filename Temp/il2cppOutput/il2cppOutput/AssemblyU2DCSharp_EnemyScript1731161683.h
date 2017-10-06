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
// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_EnemyScript_Direction452054691.h"
#include "AssemblyU2DCSharp_EnemyScript_EnemyManeuver56795301.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyScript
struct  EnemyScript_t1731161683  : public MonoBehaviour_t667441552
{
public:
	// System.Single EnemyScript::enemySpeed
	float ___enemySpeed_2;
	// System.Single EnemyScript::changeDirectionTime
	float ___changeDirectionTime_3;
	// System.Single EnemyScript::size
	float ___size_4;
	// System.Single EnemyScript::time
	float ___time_5;
	// UnityEngine.GameObject EnemyScript::EnemyInAdvance
	GameObject_t3674682005 * ___EnemyInAdvance_6;
	// UnityEngine.Vector3 EnemyScript::velocity
	Vector3_t4282066566  ___velocity_7;
	// UnityEngine.Vector3 EnemyScript::actualVelocity
	Vector3_t4282066566  ___actualVelocity_8;
	// System.Boolean EnemyScript::outOfBorder
	bool ___outOfBorder_9;
	// EnemyScript/Direction EnemyScript::direction
	int32_t ___direction_10;
	// System.Single EnemyScript::border
	float ___border_11;
	// System.Single EnemyScript::stopPlace
	float ___stopPlace_12;
	// System.Boolean EnemyScript::isStopped
	bool ___isStopped_13;
	// System.Boolean EnemyScript::isTurning
	bool ___isTurning_14;
	// System.Single EnemyScript::turnSpeed
	float ___turnSpeed_15;
	// EnemyScript/EnemyManeuver EnemyScript::type
	int32_t ___type_16;
	// UnityEngine.Animator EnemyScript::Model
	Animator_t2776330603 * ___Model_17;

public:
	inline static int32_t get_offset_of_enemySpeed_2() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___enemySpeed_2)); }
	inline float get_enemySpeed_2() const { return ___enemySpeed_2; }
	inline float* get_address_of_enemySpeed_2() { return &___enemySpeed_2; }
	inline void set_enemySpeed_2(float value)
	{
		___enemySpeed_2 = value;
	}

	inline static int32_t get_offset_of_changeDirectionTime_3() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___changeDirectionTime_3)); }
	inline float get_changeDirectionTime_3() const { return ___changeDirectionTime_3; }
	inline float* get_address_of_changeDirectionTime_3() { return &___changeDirectionTime_3; }
	inline void set_changeDirectionTime_3(float value)
	{
		___changeDirectionTime_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___size_4)); }
	inline float get_size_4() const { return ___size_4; }
	inline float* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(float value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_EnemyInAdvance_6() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___EnemyInAdvance_6)); }
	inline GameObject_t3674682005 * get_EnemyInAdvance_6() const { return ___EnemyInAdvance_6; }
	inline GameObject_t3674682005 ** get_address_of_EnemyInAdvance_6() { return &___EnemyInAdvance_6; }
	inline void set_EnemyInAdvance_6(GameObject_t3674682005 * value)
	{
		___EnemyInAdvance_6 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyInAdvance_6, value);
	}

	inline static int32_t get_offset_of_velocity_7() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___velocity_7)); }
	inline Vector3_t4282066566  get_velocity_7() const { return ___velocity_7; }
	inline Vector3_t4282066566 * get_address_of_velocity_7() { return &___velocity_7; }
	inline void set_velocity_7(Vector3_t4282066566  value)
	{
		___velocity_7 = value;
	}

	inline static int32_t get_offset_of_actualVelocity_8() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___actualVelocity_8)); }
	inline Vector3_t4282066566  get_actualVelocity_8() const { return ___actualVelocity_8; }
	inline Vector3_t4282066566 * get_address_of_actualVelocity_8() { return &___actualVelocity_8; }
	inline void set_actualVelocity_8(Vector3_t4282066566  value)
	{
		___actualVelocity_8 = value;
	}

	inline static int32_t get_offset_of_outOfBorder_9() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___outOfBorder_9)); }
	inline bool get_outOfBorder_9() const { return ___outOfBorder_9; }
	inline bool* get_address_of_outOfBorder_9() { return &___outOfBorder_9; }
	inline void set_outOfBorder_9(bool value)
	{
		___outOfBorder_9 = value;
	}

	inline static int32_t get_offset_of_direction_10() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___direction_10)); }
	inline int32_t get_direction_10() const { return ___direction_10; }
	inline int32_t* get_address_of_direction_10() { return &___direction_10; }
	inline void set_direction_10(int32_t value)
	{
		___direction_10 = value;
	}

	inline static int32_t get_offset_of_border_11() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___border_11)); }
	inline float get_border_11() const { return ___border_11; }
	inline float* get_address_of_border_11() { return &___border_11; }
	inline void set_border_11(float value)
	{
		___border_11 = value;
	}

	inline static int32_t get_offset_of_stopPlace_12() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___stopPlace_12)); }
	inline float get_stopPlace_12() const { return ___stopPlace_12; }
	inline float* get_address_of_stopPlace_12() { return &___stopPlace_12; }
	inline void set_stopPlace_12(float value)
	{
		___stopPlace_12 = value;
	}

	inline static int32_t get_offset_of_isStopped_13() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___isStopped_13)); }
	inline bool get_isStopped_13() const { return ___isStopped_13; }
	inline bool* get_address_of_isStopped_13() { return &___isStopped_13; }
	inline void set_isStopped_13(bool value)
	{
		___isStopped_13 = value;
	}

	inline static int32_t get_offset_of_isTurning_14() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___isTurning_14)); }
	inline bool get_isTurning_14() const { return ___isTurning_14; }
	inline bool* get_address_of_isTurning_14() { return &___isTurning_14; }
	inline void set_isTurning_14(bool value)
	{
		___isTurning_14 = value;
	}

	inline static int32_t get_offset_of_turnSpeed_15() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___turnSpeed_15)); }
	inline float get_turnSpeed_15() const { return ___turnSpeed_15; }
	inline float* get_address_of_turnSpeed_15() { return &___turnSpeed_15; }
	inline void set_turnSpeed_15(float value)
	{
		___turnSpeed_15 = value;
	}

	inline static int32_t get_offset_of_type_16() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___type_16)); }
	inline int32_t get_type_16() const { return ___type_16; }
	inline int32_t* get_address_of_type_16() { return &___type_16; }
	inline void set_type_16(int32_t value)
	{
		___type_16 = value;
	}

	inline static int32_t get_offset_of_Model_17() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___Model_17)); }
	inline Animator_t2776330603 * get_Model_17() const { return ___Model_17; }
	inline Animator_t2776330603 ** get_address_of_Model_17() { return &___Model_17; }
	inline void set_Model_17(Animator_t2776330603 * value)
	{
		___Model_17 = value;
		Il2CppCodeGenWriteBarrier(&___Model_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
