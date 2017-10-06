#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t2796375743;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_EnemyScript_EnemyManeuver56795301.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManagerScript/Level
struct  Level_t644710249  : public Il2CppObject
{
public:
	// System.Int32 LevelManagerScript/Level::number
	int32_t ___number_0;
	// System.Int32 LevelManagerScript/Level::stars
	int32_t ___stars_1;
	// System.Boolean LevelManagerScript/Level::locked
	bool ___locked_2;
	// System.Single LevelManagerScript/Level::gunSpeedModifier
	float ___gunSpeedModifier_3;
	// System.Single LevelManagerScript/Level::gunReloadModifier
	float ___gunReloadModifier_4;
	// System.Single LevelManagerScript/Level::bulletSpeedModifier
	float ___bulletSpeedModifier_5;
	// System.Single LevelManagerScript/Level::enemySpeed
	float ___enemySpeed_6;
	// System.Single LevelManagerScript/Level::spawnRate
	float ___spawnRate_7;
	// System.Single LevelManagerScript/Level::enemySize
	float ___enemySize_8;
	// System.Single LevelManagerScript/Level::friendSpawnChance
	float ___friendSpawnChance_9;
	// System.Single LevelManagerScript/Level::armoredSpawnChance
	float ___armoredSpawnChance_10;
	// System.Single LevelManagerScript/Level::armedSpawnChance
	float ___armedSpawnChance_11;
	// EnemyScript/EnemyManeuver LevelManagerScript/Level::enemyType
	int32_t ___enemyType_12;
	// UnityEngine.UI.Button/ButtonClickedEvent LevelManagerScript/Level::onButtonClicked
	ButtonClickedEvent_t2796375743 * ___onButtonClicked_13;

public:
	inline static int32_t get_offset_of_number_0() { return static_cast<int32_t>(offsetof(Level_t644710249, ___number_0)); }
	inline int32_t get_number_0() const { return ___number_0; }
	inline int32_t* get_address_of_number_0() { return &___number_0; }
	inline void set_number_0(int32_t value)
	{
		___number_0 = value;
	}

	inline static int32_t get_offset_of_stars_1() { return static_cast<int32_t>(offsetof(Level_t644710249, ___stars_1)); }
	inline int32_t get_stars_1() const { return ___stars_1; }
	inline int32_t* get_address_of_stars_1() { return &___stars_1; }
	inline void set_stars_1(int32_t value)
	{
		___stars_1 = value;
	}

	inline static int32_t get_offset_of_locked_2() { return static_cast<int32_t>(offsetof(Level_t644710249, ___locked_2)); }
	inline bool get_locked_2() const { return ___locked_2; }
	inline bool* get_address_of_locked_2() { return &___locked_2; }
	inline void set_locked_2(bool value)
	{
		___locked_2 = value;
	}

	inline static int32_t get_offset_of_gunSpeedModifier_3() { return static_cast<int32_t>(offsetof(Level_t644710249, ___gunSpeedModifier_3)); }
	inline float get_gunSpeedModifier_3() const { return ___gunSpeedModifier_3; }
	inline float* get_address_of_gunSpeedModifier_3() { return &___gunSpeedModifier_3; }
	inline void set_gunSpeedModifier_3(float value)
	{
		___gunSpeedModifier_3 = value;
	}

	inline static int32_t get_offset_of_gunReloadModifier_4() { return static_cast<int32_t>(offsetof(Level_t644710249, ___gunReloadModifier_4)); }
	inline float get_gunReloadModifier_4() const { return ___gunReloadModifier_4; }
	inline float* get_address_of_gunReloadModifier_4() { return &___gunReloadModifier_4; }
	inline void set_gunReloadModifier_4(float value)
	{
		___gunReloadModifier_4 = value;
	}

	inline static int32_t get_offset_of_bulletSpeedModifier_5() { return static_cast<int32_t>(offsetof(Level_t644710249, ___bulletSpeedModifier_5)); }
	inline float get_bulletSpeedModifier_5() const { return ___bulletSpeedModifier_5; }
	inline float* get_address_of_bulletSpeedModifier_5() { return &___bulletSpeedModifier_5; }
	inline void set_bulletSpeedModifier_5(float value)
	{
		___bulletSpeedModifier_5 = value;
	}

	inline static int32_t get_offset_of_enemySpeed_6() { return static_cast<int32_t>(offsetof(Level_t644710249, ___enemySpeed_6)); }
	inline float get_enemySpeed_6() const { return ___enemySpeed_6; }
	inline float* get_address_of_enemySpeed_6() { return &___enemySpeed_6; }
	inline void set_enemySpeed_6(float value)
	{
		___enemySpeed_6 = value;
	}

	inline static int32_t get_offset_of_spawnRate_7() { return static_cast<int32_t>(offsetof(Level_t644710249, ___spawnRate_7)); }
	inline float get_spawnRate_7() const { return ___spawnRate_7; }
	inline float* get_address_of_spawnRate_7() { return &___spawnRate_7; }
	inline void set_spawnRate_7(float value)
	{
		___spawnRate_7 = value;
	}

	inline static int32_t get_offset_of_enemySize_8() { return static_cast<int32_t>(offsetof(Level_t644710249, ___enemySize_8)); }
	inline float get_enemySize_8() const { return ___enemySize_8; }
	inline float* get_address_of_enemySize_8() { return &___enemySize_8; }
	inline void set_enemySize_8(float value)
	{
		___enemySize_8 = value;
	}

	inline static int32_t get_offset_of_friendSpawnChance_9() { return static_cast<int32_t>(offsetof(Level_t644710249, ___friendSpawnChance_9)); }
	inline float get_friendSpawnChance_9() const { return ___friendSpawnChance_9; }
	inline float* get_address_of_friendSpawnChance_9() { return &___friendSpawnChance_9; }
	inline void set_friendSpawnChance_9(float value)
	{
		___friendSpawnChance_9 = value;
	}

	inline static int32_t get_offset_of_armoredSpawnChance_10() { return static_cast<int32_t>(offsetof(Level_t644710249, ___armoredSpawnChance_10)); }
	inline float get_armoredSpawnChance_10() const { return ___armoredSpawnChance_10; }
	inline float* get_address_of_armoredSpawnChance_10() { return &___armoredSpawnChance_10; }
	inline void set_armoredSpawnChance_10(float value)
	{
		___armoredSpawnChance_10 = value;
	}

	inline static int32_t get_offset_of_armedSpawnChance_11() { return static_cast<int32_t>(offsetof(Level_t644710249, ___armedSpawnChance_11)); }
	inline float get_armedSpawnChance_11() const { return ___armedSpawnChance_11; }
	inline float* get_address_of_armedSpawnChance_11() { return &___armedSpawnChance_11; }
	inline void set_armedSpawnChance_11(float value)
	{
		___armedSpawnChance_11 = value;
	}

	inline static int32_t get_offset_of_enemyType_12() { return static_cast<int32_t>(offsetof(Level_t644710249, ___enemyType_12)); }
	inline int32_t get_enemyType_12() const { return ___enemyType_12; }
	inline int32_t* get_address_of_enemyType_12() { return &___enemyType_12; }
	inline void set_enemyType_12(int32_t value)
	{
		___enemyType_12 = value;
	}

	inline static int32_t get_offset_of_onButtonClicked_13() { return static_cast<int32_t>(offsetof(Level_t644710249, ___onButtonClicked_13)); }
	inline ButtonClickedEvent_t2796375743 * get_onButtonClicked_13() const { return ___onButtonClicked_13; }
	inline ButtonClickedEvent_t2796375743 ** get_address_of_onButtonClicked_13() { return &___onButtonClicked_13; }
	inline void set_onButtonClicked_13(ButtonClickedEvent_t2796375743 * value)
	{
		___onButtonClicked_13 = value;
		Il2CppCodeGenWriteBarrier(&___onButtonClicked_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
