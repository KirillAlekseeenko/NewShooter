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
// UnityEngine.UI.Toggle
struct Toggle_t110812896;
// UnityEngine.UI.Slider
struct Slider_t79469677;
// UnityEngine.Animator
struct Animator_t2776330603;
// System.Collections.Generic.List`1<UnityEngine.Animator>
struct List_1_t4144516155;
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

// MainMenuScript
struct  MainMenuScript_t3453528515  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean MainMenuScript::isAudioLocked
	bool ___isAudioLocked_2;
	// System.Single MainMenuScript::musicVolume
	float ___musicVolume_3;
	// System.Single MainMenuScript::effectsVolume
	float ___effectsVolume_4;
	// UnityEngine.AudioClip MainMenuScript::backgroundMusic
	AudioClip_t794140988 * ___backgroundMusic_5;
	// UnityEngine.GameObject MainMenuScript::MainPanel
	GameObject_t3674682005 * ___MainPanel_6;
	// UnityEngine.GameObject MainMenuScript::AudioPanel
	GameObject_t3674682005 * ___AudioPanel_7;
	// UnityEngine.GameObject MainMenuScript::InfoPanel
	GameObject_t3674682005 * ___InfoPanel_8;
	// UnityEngine.GameObject MainMenuScript::LevelPanel
	GameObject_t3674682005 * ___LevelPanel_9;
	// UnityEngine.GameObject MainMenuScript::LevelManager
	GameObject_t3674682005 * ___LevelManager_10;
	// UnityEngine.UI.Toggle MainMenuScript::audioToggle
	Toggle_t110812896 * ___audioToggle_11;
	// UnityEngine.UI.Slider MainMenuScript::effectsSlider
	Slider_t79469677 * ___effectsSlider_12;
	// UnityEngine.UI.Slider MainMenuScript::musicSlider
	Slider_t79469677 * ___musicSlider_13;
	// UnityEngine.UI.Slider MainMenuScript::audioSlider
	Slider_t79469677 * ___audioSlider_14;
	// UnityEngine.Animator MainMenuScript::titlePanel
	Animator_t2776330603 * ___titlePanel_15;
	// System.Collections.Generic.List`1<UnityEngine.Animator> MainMenuScript::mainMenuButtons
	List_1_t4144516155 * ___mainMenuButtons_16;
	// System.Collections.Generic.List`1<UnityEngine.Animator> MainMenuScript::audioUI
	List_1_t4144516155 * ___audioUI_17;
	// System.Collections.Generic.List`1<UnityEngine.Animator> MainMenuScript::levelUI
	List_1_t4144516155 * ___levelUI_18;
	// System.Single MainMenuScript::transition_time
	float ___transition_time_19;
	// System.Single MainMenuScript::animation_time
	float ___animation_time_20;
	// UnityEngine.GameObject MainMenuScript::testPanel
	GameObject_t3674682005 * ___testPanel_21;
	// UnityEngine.UI.InputField MainMenuScript::EnemySizeTextBox
	InputField_t609046876 * ___EnemySizeTextBox_22;
	// UnityEngine.UI.InputField MainMenuScript::EnemySpeedTextBox
	InputField_t609046876 * ___EnemySpeedTextBox_23;
	// UnityEngine.UI.InputField MainMenuScript::SpawnRateTextBox
	InputField_t609046876 * ___SpawnRateTextBox_24;
	// UnityEngine.UI.Dropdown MainMenuScript::EnemyTypeDropdown
	Dropdown_t4201779933 * ___EnemyTypeDropdown_25;
	// UnityEngine.UI.InputField MainMenuScript::GunSpeedTextBox
	InputField_t609046876 * ___GunSpeedTextBox_26;
	// UnityEngine.UI.InputField MainMenuScript::ReloadTextBox
	InputField_t609046876 * ___ReloadTextBox_27;
	// UnityEngine.UI.InputField MainMenuScript::BulletSpeedTextBox
	InputField_t609046876 * ___BulletSpeedTextBox_28;
	// UnityEngine.UI.InputField MainMenuScript::FriendSpawnChanceTextBox
	InputField_t609046876 * ___FriendSpawnChanceTextBox_29;
	// UnityEngine.UI.InputField MainMenuScript::ArmoredSpawnChanceTextBox
	InputField_t609046876 * ___ArmoredSpawnChanceTextBox_30;
	// UnityEngine.UI.InputField MainMenuScript::ArmedSpawnChanceTextBox
	InputField_t609046876 * ___ArmedSpawnChanceTextBox_31;

public:
	inline static int32_t get_offset_of_isAudioLocked_2() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___isAudioLocked_2)); }
	inline bool get_isAudioLocked_2() const { return ___isAudioLocked_2; }
	inline bool* get_address_of_isAudioLocked_2() { return &___isAudioLocked_2; }
	inline void set_isAudioLocked_2(bool value)
	{
		___isAudioLocked_2 = value;
	}

	inline static int32_t get_offset_of_musicVolume_3() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___musicVolume_3)); }
	inline float get_musicVolume_3() const { return ___musicVolume_3; }
	inline float* get_address_of_musicVolume_3() { return &___musicVolume_3; }
	inline void set_musicVolume_3(float value)
	{
		___musicVolume_3 = value;
	}

	inline static int32_t get_offset_of_effectsVolume_4() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___effectsVolume_4)); }
	inline float get_effectsVolume_4() const { return ___effectsVolume_4; }
	inline float* get_address_of_effectsVolume_4() { return &___effectsVolume_4; }
	inline void set_effectsVolume_4(float value)
	{
		___effectsVolume_4 = value;
	}

	inline static int32_t get_offset_of_backgroundMusic_5() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___backgroundMusic_5)); }
	inline AudioClip_t794140988 * get_backgroundMusic_5() const { return ___backgroundMusic_5; }
	inline AudioClip_t794140988 ** get_address_of_backgroundMusic_5() { return &___backgroundMusic_5; }
	inline void set_backgroundMusic_5(AudioClip_t794140988 * value)
	{
		___backgroundMusic_5 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundMusic_5, value);
	}

	inline static int32_t get_offset_of_MainPanel_6() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___MainPanel_6)); }
	inline GameObject_t3674682005 * get_MainPanel_6() const { return ___MainPanel_6; }
	inline GameObject_t3674682005 ** get_address_of_MainPanel_6() { return &___MainPanel_6; }
	inline void set_MainPanel_6(GameObject_t3674682005 * value)
	{
		___MainPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___MainPanel_6, value);
	}

	inline static int32_t get_offset_of_AudioPanel_7() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___AudioPanel_7)); }
	inline GameObject_t3674682005 * get_AudioPanel_7() const { return ___AudioPanel_7; }
	inline GameObject_t3674682005 ** get_address_of_AudioPanel_7() { return &___AudioPanel_7; }
	inline void set_AudioPanel_7(GameObject_t3674682005 * value)
	{
		___AudioPanel_7 = value;
		Il2CppCodeGenWriteBarrier(&___AudioPanel_7, value);
	}

	inline static int32_t get_offset_of_InfoPanel_8() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___InfoPanel_8)); }
	inline GameObject_t3674682005 * get_InfoPanel_8() const { return ___InfoPanel_8; }
	inline GameObject_t3674682005 ** get_address_of_InfoPanel_8() { return &___InfoPanel_8; }
	inline void set_InfoPanel_8(GameObject_t3674682005 * value)
	{
		___InfoPanel_8 = value;
		Il2CppCodeGenWriteBarrier(&___InfoPanel_8, value);
	}

	inline static int32_t get_offset_of_LevelPanel_9() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___LevelPanel_9)); }
	inline GameObject_t3674682005 * get_LevelPanel_9() const { return ___LevelPanel_9; }
	inline GameObject_t3674682005 ** get_address_of_LevelPanel_9() { return &___LevelPanel_9; }
	inline void set_LevelPanel_9(GameObject_t3674682005 * value)
	{
		___LevelPanel_9 = value;
		Il2CppCodeGenWriteBarrier(&___LevelPanel_9, value);
	}

	inline static int32_t get_offset_of_LevelManager_10() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___LevelManager_10)); }
	inline GameObject_t3674682005 * get_LevelManager_10() const { return ___LevelManager_10; }
	inline GameObject_t3674682005 ** get_address_of_LevelManager_10() { return &___LevelManager_10; }
	inline void set_LevelManager_10(GameObject_t3674682005 * value)
	{
		___LevelManager_10 = value;
		Il2CppCodeGenWriteBarrier(&___LevelManager_10, value);
	}

	inline static int32_t get_offset_of_audioToggle_11() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___audioToggle_11)); }
	inline Toggle_t110812896 * get_audioToggle_11() const { return ___audioToggle_11; }
	inline Toggle_t110812896 ** get_address_of_audioToggle_11() { return &___audioToggle_11; }
	inline void set_audioToggle_11(Toggle_t110812896 * value)
	{
		___audioToggle_11 = value;
		Il2CppCodeGenWriteBarrier(&___audioToggle_11, value);
	}

	inline static int32_t get_offset_of_effectsSlider_12() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___effectsSlider_12)); }
	inline Slider_t79469677 * get_effectsSlider_12() const { return ___effectsSlider_12; }
	inline Slider_t79469677 ** get_address_of_effectsSlider_12() { return &___effectsSlider_12; }
	inline void set_effectsSlider_12(Slider_t79469677 * value)
	{
		___effectsSlider_12 = value;
		Il2CppCodeGenWriteBarrier(&___effectsSlider_12, value);
	}

	inline static int32_t get_offset_of_musicSlider_13() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___musicSlider_13)); }
	inline Slider_t79469677 * get_musicSlider_13() const { return ___musicSlider_13; }
	inline Slider_t79469677 ** get_address_of_musicSlider_13() { return &___musicSlider_13; }
	inline void set_musicSlider_13(Slider_t79469677 * value)
	{
		___musicSlider_13 = value;
		Il2CppCodeGenWriteBarrier(&___musicSlider_13, value);
	}

	inline static int32_t get_offset_of_audioSlider_14() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___audioSlider_14)); }
	inline Slider_t79469677 * get_audioSlider_14() const { return ___audioSlider_14; }
	inline Slider_t79469677 ** get_address_of_audioSlider_14() { return &___audioSlider_14; }
	inline void set_audioSlider_14(Slider_t79469677 * value)
	{
		___audioSlider_14 = value;
		Il2CppCodeGenWriteBarrier(&___audioSlider_14, value);
	}

	inline static int32_t get_offset_of_titlePanel_15() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___titlePanel_15)); }
	inline Animator_t2776330603 * get_titlePanel_15() const { return ___titlePanel_15; }
	inline Animator_t2776330603 ** get_address_of_titlePanel_15() { return &___titlePanel_15; }
	inline void set_titlePanel_15(Animator_t2776330603 * value)
	{
		___titlePanel_15 = value;
		Il2CppCodeGenWriteBarrier(&___titlePanel_15, value);
	}

	inline static int32_t get_offset_of_mainMenuButtons_16() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___mainMenuButtons_16)); }
	inline List_1_t4144516155 * get_mainMenuButtons_16() const { return ___mainMenuButtons_16; }
	inline List_1_t4144516155 ** get_address_of_mainMenuButtons_16() { return &___mainMenuButtons_16; }
	inline void set_mainMenuButtons_16(List_1_t4144516155 * value)
	{
		___mainMenuButtons_16 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenuButtons_16, value);
	}

	inline static int32_t get_offset_of_audioUI_17() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___audioUI_17)); }
	inline List_1_t4144516155 * get_audioUI_17() const { return ___audioUI_17; }
	inline List_1_t4144516155 ** get_address_of_audioUI_17() { return &___audioUI_17; }
	inline void set_audioUI_17(List_1_t4144516155 * value)
	{
		___audioUI_17 = value;
		Il2CppCodeGenWriteBarrier(&___audioUI_17, value);
	}

	inline static int32_t get_offset_of_levelUI_18() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___levelUI_18)); }
	inline List_1_t4144516155 * get_levelUI_18() const { return ___levelUI_18; }
	inline List_1_t4144516155 ** get_address_of_levelUI_18() { return &___levelUI_18; }
	inline void set_levelUI_18(List_1_t4144516155 * value)
	{
		___levelUI_18 = value;
		Il2CppCodeGenWriteBarrier(&___levelUI_18, value);
	}

	inline static int32_t get_offset_of_transition_time_19() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___transition_time_19)); }
	inline float get_transition_time_19() const { return ___transition_time_19; }
	inline float* get_address_of_transition_time_19() { return &___transition_time_19; }
	inline void set_transition_time_19(float value)
	{
		___transition_time_19 = value;
	}

	inline static int32_t get_offset_of_animation_time_20() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___animation_time_20)); }
	inline float get_animation_time_20() const { return ___animation_time_20; }
	inline float* get_address_of_animation_time_20() { return &___animation_time_20; }
	inline void set_animation_time_20(float value)
	{
		___animation_time_20 = value;
	}

	inline static int32_t get_offset_of_testPanel_21() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___testPanel_21)); }
	inline GameObject_t3674682005 * get_testPanel_21() const { return ___testPanel_21; }
	inline GameObject_t3674682005 ** get_address_of_testPanel_21() { return &___testPanel_21; }
	inline void set_testPanel_21(GameObject_t3674682005 * value)
	{
		___testPanel_21 = value;
		Il2CppCodeGenWriteBarrier(&___testPanel_21, value);
	}

	inline static int32_t get_offset_of_EnemySizeTextBox_22() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___EnemySizeTextBox_22)); }
	inline InputField_t609046876 * get_EnemySizeTextBox_22() const { return ___EnemySizeTextBox_22; }
	inline InputField_t609046876 ** get_address_of_EnemySizeTextBox_22() { return &___EnemySizeTextBox_22; }
	inline void set_EnemySizeTextBox_22(InputField_t609046876 * value)
	{
		___EnemySizeTextBox_22 = value;
		Il2CppCodeGenWriteBarrier(&___EnemySizeTextBox_22, value);
	}

	inline static int32_t get_offset_of_EnemySpeedTextBox_23() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___EnemySpeedTextBox_23)); }
	inline InputField_t609046876 * get_EnemySpeedTextBox_23() const { return ___EnemySpeedTextBox_23; }
	inline InputField_t609046876 ** get_address_of_EnemySpeedTextBox_23() { return &___EnemySpeedTextBox_23; }
	inline void set_EnemySpeedTextBox_23(InputField_t609046876 * value)
	{
		___EnemySpeedTextBox_23 = value;
		Il2CppCodeGenWriteBarrier(&___EnemySpeedTextBox_23, value);
	}

	inline static int32_t get_offset_of_SpawnRateTextBox_24() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___SpawnRateTextBox_24)); }
	inline InputField_t609046876 * get_SpawnRateTextBox_24() const { return ___SpawnRateTextBox_24; }
	inline InputField_t609046876 ** get_address_of_SpawnRateTextBox_24() { return &___SpawnRateTextBox_24; }
	inline void set_SpawnRateTextBox_24(InputField_t609046876 * value)
	{
		___SpawnRateTextBox_24 = value;
		Il2CppCodeGenWriteBarrier(&___SpawnRateTextBox_24, value);
	}

	inline static int32_t get_offset_of_EnemyTypeDropdown_25() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___EnemyTypeDropdown_25)); }
	inline Dropdown_t4201779933 * get_EnemyTypeDropdown_25() const { return ___EnemyTypeDropdown_25; }
	inline Dropdown_t4201779933 ** get_address_of_EnemyTypeDropdown_25() { return &___EnemyTypeDropdown_25; }
	inline void set_EnemyTypeDropdown_25(Dropdown_t4201779933 * value)
	{
		___EnemyTypeDropdown_25 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyTypeDropdown_25, value);
	}

	inline static int32_t get_offset_of_GunSpeedTextBox_26() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___GunSpeedTextBox_26)); }
	inline InputField_t609046876 * get_GunSpeedTextBox_26() const { return ___GunSpeedTextBox_26; }
	inline InputField_t609046876 ** get_address_of_GunSpeedTextBox_26() { return &___GunSpeedTextBox_26; }
	inline void set_GunSpeedTextBox_26(InputField_t609046876 * value)
	{
		___GunSpeedTextBox_26 = value;
		Il2CppCodeGenWriteBarrier(&___GunSpeedTextBox_26, value);
	}

	inline static int32_t get_offset_of_ReloadTextBox_27() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___ReloadTextBox_27)); }
	inline InputField_t609046876 * get_ReloadTextBox_27() const { return ___ReloadTextBox_27; }
	inline InputField_t609046876 ** get_address_of_ReloadTextBox_27() { return &___ReloadTextBox_27; }
	inline void set_ReloadTextBox_27(InputField_t609046876 * value)
	{
		___ReloadTextBox_27 = value;
		Il2CppCodeGenWriteBarrier(&___ReloadTextBox_27, value);
	}

	inline static int32_t get_offset_of_BulletSpeedTextBox_28() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___BulletSpeedTextBox_28)); }
	inline InputField_t609046876 * get_BulletSpeedTextBox_28() const { return ___BulletSpeedTextBox_28; }
	inline InputField_t609046876 ** get_address_of_BulletSpeedTextBox_28() { return &___BulletSpeedTextBox_28; }
	inline void set_BulletSpeedTextBox_28(InputField_t609046876 * value)
	{
		___BulletSpeedTextBox_28 = value;
		Il2CppCodeGenWriteBarrier(&___BulletSpeedTextBox_28, value);
	}

	inline static int32_t get_offset_of_FriendSpawnChanceTextBox_29() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___FriendSpawnChanceTextBox_29)); }
	inline InputField_t609046876 * get_FriendSpawnChanceTextBox_29() const { return ___FriendSpawnChanceTextBox_29; }
	inline InputField_t609046876 ** get_address_of_FriendSpawnChanceTextBox_29() { return &___FriendSpawnChanceTextBox_29; }
	inline void set_FriendSpawnChanceTextBox_29(InputField_t609046876 * value)
	{
		___FriendSpawnChanceTextBox_29 = value;
		Il2CppCodeGenWriteBarrier(&___FriendSpawnChanceTextBox_29, value);
	}

	inline static int32_t get_offset_of_ArmoredSpawnChanceTextBox_30() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___ArmoredSpawnChanceTextBox_30)); }
	inline InputField_t609046876 * get_ArmoredSpawnChanceTextBox_30() const { return ___ArmoredSpawnChanceTextBox_30; }
	inline InputField_t609046876 ** get_address_of_ArmoredSpawnChanceTextBox_30() { return &___ArmoredSpawnChanceTextBox_30; }
	inline void set_ArmoredSpawnChanceTextBox_30(InputField_t609046876 * value)
	{
		___ArmoredSpawnChanceTextBox_30 = value;
		Il2CppCodeGenWriteBarrier(&___ArmoredSpawnChanceTextBox_30, value);
	}

	inline static int32_t get_offset_of_ArmedSpawnChanceTextBox_31() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___ArmedSpawnChanceTextBox_31)); }
	inline InputField_t609046876 * get_ArmedSpawnChanceTextBox_31() const { return ___ArmedSpawnChanceTextBox_31; }
	inline InputField_t609046876 ** get_address_of_ArmedSpawnChanceTextBox_31() { return &___ArmedSpawnChanceTextBox_31; }
	inline void set_ArmedSpawnChanceTextBox_31(InputField_t609046876 * value)
	{
		___ArmedSpawnChanceTextBox_31 = value;
		Il2CppCodeGenWriteBarrier(&___ArmedSpawnChanceTextBox_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
