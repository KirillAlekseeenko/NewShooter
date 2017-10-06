#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t4241557075;
// System.Collections.Generic.List`1<LevelManagerScript/Level>
struct List_1_t2012895801;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;
// LevelManagerScript/Level
struct Level_t644710249;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.UI.InputField
struct InputField_t609046876;
// UnityEngine.UI.Dropdown
struct Dropdown_t4201779933;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManagerScript
struct  LevelManagerScript_t3685989844  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Font LevelManagerScript::font
	Font_t4241557075 * ___font_2;
	// System.Collections.Generic.List`1<LevelManagerScript/Level> LevelManagerScript::initialLevelList
	List_1_t2012895801 * ___initialLevelList_3;
	// System.Collections.Generic.List`1<LevelManagerScript/Level> LevelManagerScript::levelList
	List_1_t2012895801 * ___levelList_4;
	// UnityEngine.GameObject LevelManagerScript::Button
	GameObject_t3674682005 * ___Button_5;
	// UnityEngine.Transform LevelManagerScript::ButtonPanel
	Transform_t1659122786 * ___ButtonPanel_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LevelManagerScript::levelButtons
	List_1_t747900261 * ___levelButtons_8;
	// System.Single LevelManagerScript::button_appear
	float ___button_appear_9;
	// UnityEngine.Animator LevelManagerScript::transitionImage
	Animator_t2776330603 * ___transitionImage_10;
	// UnityEngine.UI.InputField LevelManagerScript::EnemySizeTextBox
	InputField_t609046876 * ___EnemySizeTextBox_11;
	// UnityEngine.UI.InputField LevelManagerScript::EnemySpeedTextBox
	InputField_t609046876 * ___EnemySpeedTextBox_12;
	// UnityEngine.UI.InputField LevelManagerScript::SpawnRateTextBox
	InputField_t609046876 * ___SpawnRateTextBox_13;
	// UnityEngine.UI.Dropdown LevelManagerScript::EnemyTypeDropdown
	Dropdown_t4201779933 * ___EnemyTypeDropdown_14;
	// UnityEngine.UI.InputField LevelManagerScript::GunSpeedTextBox
	InputField_t609046876 * ___GunSpeedTextBox_15;
	// UnityEngine.UI.InputField LevelManagerScript::ReloadTextBox
	InputField_t609046876 * ___ReloadTextBox_16;
	// UnityEngine.UI.InputField LevelManagerScript::BulletSpeedTextBox
	InputField_t609046876 * ___BulletSpeedTextBox_17;
	// UnityEngine.UI.InputField LevelManagerScript::FriendSpawnChanceTextBox
	InputField_t609046876 * ___FriendSpawnChanceTextBox_18;
	// UnityEngine.UI.InputField LevelManagerScript::ArmoredSpawnChanceTextBox
	InputField_t609046876 * ___ArmoredSpawnChanceTextBox_19;
	// UnityEngine.UI.InputField LevelManagerScript::ArmedSpawnChanceTextBox
	InputField_t609046876 * ___ArmedSpawnChanceTextBox_20;

public:
	inline static int32_t get_offset_of_font_2() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___font_2)); }
	inline Font_t4241557075 * get_font_2() const { return ___font_2; }
	inline Font_t4241557075 ** get_address_of_font_2() { return &___font_2; }
	inline void set_font_2(Font_t4241557075 * value)
	{
		___font_2 = value;
		Il2CppCodeGenWriteBarrier(&___font_2, value);
	}

	inline static int32_t get_offset_of_initialLevelList_3() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___initialLevelList_3)); }
	inline List_1_t2012895801 * get_initialLevelList_3() const { return ___initialLevelList_3; }
	inline List_1_t2012895801 ** get_address_of_initialLevelList_3() { return &___initialLevelList_3; }
	inline void set_initialLevelList_3(List_1_t2012895801 * value)
	{
		___initialLevelList_3 = value;
		Il2CppCodeGenWriteBarrier(&___initialLevelList_3, value);
	}

	inline static int32_t get_offset_of_levelList_4() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___levelList_4)); }
	inline List_1_t2012895801 * get_levelList_4() const { return ___levelList_4; }
	inline List_1_t2012895801 ** get_address_of_levelList_4() { return &___levelList_4; }
	inline void set_levelList_4(List_1_t2012895801 * value)
	{
		___levelList_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelList_4, value);
	}

	inline static int32_t get_offset_of_Button_5() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___Button_5)); }
	inline GameObject_t3674682005 * get_Button_5() const { return ___Button_5; }
	inline GameObject_t3674682005 ** get_address_of_Button_5() { return &___Button_5; }
	inline void set_Button_5(GameObject_t3674682005 * value)
	{
		___Button_5 = value;
		Il2CppCodeGenWriteBarrier(&___Button_5, value);
	}

	inline static int32_t get_offset_of_ButtonPanel_6() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___ButtonPanel_6)); }
	inline Transform_t1659122786 * get_ButtonPanel_6() const { return ___ButtonPanel_6; }
	inline Transform_t1659122786 ** get_address_of_ButtonPanel_6() { return &___ButtonPanel_6; }
	inline void set_ButtonPanel_6(Transform_t1659122786 * value)
	{
		___ButtonPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonPanel_6, value);
	}

	inline static int32_t get_offset_of_levelButtons_8() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___levelButtons_8)); }
	inline List_1_t747900261 * get_levelButtons_8() const { return ___levelButtons_8; }
	inline List_1_t747900261 ** get_address_of_levelButtons_8() { return &___levelButtons_8; }
	inline void set_levelButtons_8(List_1_t747900261 * value)
	{
		___levelButtons_8 = value;
		Il2CppCodeGenWriteBarrier(&___levelButtons_8, value);
	}

	inline static int32_t get_offset_of_button_appear_9() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___button_appear_9)); }
	inline float get_button_appear_9() const { return ___button_appear_9; }
	inline float* get_address_of_button_appear_9() { return &___button_appear_9; }
	inline void set_button_appear_9(float value)
	{
		___button_appear_9 = value;
	}

	inline static int32_t get_offset_of_transitionImage_10() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___transitionImage_10)); }
	inline Animator_t2776330603 * get_transitionImage_10() const { return ___transitionImage_10; }
	inline Animator_t2776330603 ** get_address_of_transitionImage_10() { return &___transitionImage_10; }
	inline void set_transitionImage_10(Animator_t2776330603 * value)
	{
		___transitionImage_10 = value;
		Il2CppCodeGenWriteBarrier(&___transitionImage_10, value);
	}

	inline static int32_t get_offset_of_EnemySizeTextBox_11() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___EnemySizeTextBox_11)); }
	inline InputField_t609046876 * get_EnemySizeTextBox_11() const { return ___EnemySizeTextBox_11; }
	inline InputField_t609046876 ** get_address_of_EnemySizeTextBox_11() { return &___EnemySizeTextBox_11; }
	inline void set_EnemySizeTextBox_11(InputField_t609046876 * value)
	{
		___EnemySizeTextBox_11 = value;
		Il2CppCodeGenWriteBarrier(&___EnemySizeTextBox_11, value);
	}

	inline static int32_t get_offset_of_EnemySpeedTextBox_12() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___EnemySpeedTextBox_12)); }
	inline InputField_t609046876 * get_EnemySpeedTextBox_12() const { return ___EnemySpeedTextBox_12; }
	inline InputField_t609046876 ** get_address_of_EnemySpeedTextBox_12() { return &___EnemySpeedTextBox_12; }
	inline void set_EnemySpeedTextBox_12(InputField_t609046876 * value)
	{
		___EnemySpeedTextBox_12 = value;
		Il2CppCodeGenWriteBarrier(&___EnemySpeedTextBox_12, value);
	}

	inline static int32_t get_offset_of_SpawnRateTextBox_13() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___SpawnRateTextBox_13)); }
	inline InputField_t609046876 * get_SpawnRateTextBox_13() const { return ___SpawnRateTextBox_13; }
	inline InputField_t609046876 ** get_address_of_SpawnRateTextBox_13() { return &___SpawnRateTextBox_13; }
	inline void set_SpawnRateTextBox_13(InputField_t609046876 * value)
	{
		___SpawnRateTextBox_13 = value;
		Il2CppCodeGenWriteBarrier(&___SpawnRateTextBox_13, value);
	}

	inline static int32_t get_offset_of_EnemyTypeDropdown_14() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___EnemyTypeDropdown_14)); }
	inline Dropdown_t4201779933 * get_EnemyTypeDropdown_14() const { return ___EnemyTypeDropdown_14; }
	inline Dropdown_t4201779933 ** get_address_of_EnemyTypeDropdown_14() { return &___EnemyTypeDropdown_14; }
	inline void set_EnemyTypeDropdown_14(Dropdown_t4201779933 * value)
	{
		___EnemyTypeDropdown_14 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyTypeDropdown_14, value);
	}

	inline static int32_t get_offset_of_GunSpeedTextBox_15() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___GunSpeedTextBox_15)); }
	inline InputField_t609046876 * get_GunSpeedTextBox_15() const { return ___GunSpeedTextBox_15; }
	inline InputField_t609046876 ** get_address_of_GunSpeedTextBox_15() { return &___GunSpeedTextBox_15; }
	inline void set_GunSpeedTextBox_15(InputField_t609046876 * value)
	{
		___GunSpeedTextBox_15 = value;
		Il2CppCodeGenWriteBarrier(&___GunSpeedTextBox_15, value);
	}

	inline static int32_t get_offset_of_ReloadTextBox_16() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___ReloadTextBox_16)); }
	inline InputField_t609046876 * get_ReloadTextBox_16() const { return ___ReloadTextBox_16; }
	inline InputField_t609046876 ** get_address_of_ReloadTextBox_16() { return &___ReloadTextBox_16; }
	inline void set_ReloadTextBox_16(InputField_t609046876 * value)
	{
		___ReloadTextBox_16 = value;
		Il2CppCodeGenWriteBarrier(&___ReloadTextBox_16, value);
	}

	inline static int32_t get_offset_of_BulletSpeedTextBox_17() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___BulletSpeedTextBox_17)); }
	inline InputField_t609046876 * get_BulletSpeedTextBox_17() const { return ___BulletSpeedTextBox_17; }
	inline InputField_t609046876 ** get_address_of_BulletSpeedTextBox_17() { return &___BulletSpeedTextBox_17; }
	inline void set_BulletSpeedTextBox_17(InputField_t609046876 * value)
	{
		___BulletSpeedTextBox_17 = value;
		Il2CppCodeGenWriteBarrier(&___BulletSpeedTextBox_17, value);
	}

	inline static int32_t get_offset_of_FriendSpawnChanceTextBox_18() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___FriendSpawnChanceTextBox_18)); }
	inline InputField_t609046876 * get_FriendSpawnChanceTextBox_18() const { return ___FriendSpawnChanceTextBox_18; }
	inline InputField_t609046876 ** get_address_of_FriendSpawnChanceTextBox_18() { return &___FriendSpawnChanceTextBox_18; }
	inline void set_FriendSpawnChanceTextBox_18(InputField_t609046876 * value)
	{
		___FriendSpawnChanceTextBox_18 = value;
		Il2CppCodeGenWriteBarrier(&___FriendSpawnChanceTextBox_18, value);
	}

	inline static int32_t get_offset_of_ArmoredSpawnChanceTextBox_19() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___ArmoredSpawnChanceTextBox_19)); }
	inline InputField_t609046876 * get_ArmoredSpawnChanceTextBox_19() const { return ___ArmoredSpawnChanceTextBox_19; }
	inline InputField_t609046876 ** get_address_of_ArmoredSpawnChanceTextBox_19() { return &___ArmoredSpawnChanceTextBox_19; }
	inline void set_ArmoredSpawnChanceTextBox_19(InputField_t609046876 * value)
	{
		___ArmoredSpawnChanceTextBox_19 = value;
		Il2CppCodeGenWriteBarrier(&___ArmoredSpawnChanceTextBox_19, value);
	}

	inline static int32_t get_offset_of_ArmedSpawnChanceTextBox_20() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844, ___ArmedSpawnChanceTextBox_20)); }
	inline InputField_t609046876 * get_ArmedSpawnChanceTextBox_20() const { return ___ArmedSpawnChanceTextBox_20; }
	inline InputField_t609046876 ** get_address_of_ArmedSpawnChanceTextBox_20() { return &___ArmedSpawnChanceTextBox_20; }
	inline void set_ArmedSpawnChanceTextBox_20(InputField_t609046876 * value)
	{
		___ArmedSpawnChanceTextBox_20 = value;
		Il2CppCodeGenWriteBarrier(&___ArmedSpawnChanceTextBox_20, value);
	}
};

struct LevelManagerScript_t3685989844_StaticFields
{
public:
	// LevelManagerScript/Level LevelManagerScript::currentLevel
	Level_t644710249 * ___currentLevel_7;

public:
	inline static int32_t get_offset_of_currentLevel_7() { return static_cast<int32_t>(offsetof(LevelManagerScript_t3685989844_StaticFields, ___currentLevel_7)); }
	inline Level_t644710249 * get_currentLevel_7() const { return ___currentLevel_7; }
	inline Level_t644710249 ** get_address_of_currentLevel_7() { return &___currentLevel_7; }
	inline void set_currentLevel_7(Level_t644710249 * value)
	{
		___currentLevel_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentLevel_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
