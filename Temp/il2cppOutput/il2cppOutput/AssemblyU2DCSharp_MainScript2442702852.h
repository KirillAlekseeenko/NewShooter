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
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Button
struct Button_t3896396478;
// ScoreText
struct ScoreText_t4132929215;
// UnityEngine.UI.Toggle
struct Toggle_t110812896;
// UnityEngine.UI.Slider
struct Slider_t79469677;
// UnityEngine.Animator
struct Animator_t2776330603;
// System.Collections.Generic.List`1<UnityEngine.Animator>
struct List_1_t4144516155;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainScript
struct  MainScript_t2442702852  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 MainScript::levelNumber
	int32_t ___levelNumber_2;
	// UnityEngine.GameObject MainScript::Enemy
	GameObject_t3674682005 * ___Enemy_3;
	// UnityEngine.GameObject MainScript::Friend
	GameObject_t3674682005 * ___Friend_4;
	// UnityEngine.GameObject MainScript::Armored
	GameObject_t3674682005 * ___Armored_5;
	// UnityEngine.GameObject MainScript::Armed
	GameObject_t3674682005 * ___Armed_6;
	// UnityEngine.Transform MainScript::Background
	Transform_t1659122786 * ___Background_7;
	// System.Single MainScript::SpawnEnemyBorder
	float ___SpawnEnemyBorder_8;
	// System.Single MainScript::SpawnHeight
	float ___SpawnHeight_9;
	// System.Single MainScript::timeToSpawn
	float ___timeToSpawn_10;
	// System.Int32 MainScript::score
	int32_t ___score_11;
	// System.Int32 MainScript::remain
	int32_t ___remain_12;
	// System.Int32 MainScript::spawned
	int32_t ___spawned_13;
	// System.Boolean MainScript::finished
	bool ___finished_14;
	// System.Int32 MainScript::initialNumberOfEnemies
	int32_t ___initialNumberOfEnemies_15;
	// System.Single MainScript::SpawnTime
	float ___SpawnTime_16;
	// System.Int32 MainScript::initialScore
	int32_t ___initialScore_17;
	// System.Int32 MainScript::addToScore
	int32_t ___addToScore_18;
	// System.Int32 MainScript::takeFromScore
	int32_t ___takeFromScore_19;
	// System.Int32 MainScript::oneStarBorder
	int32_t ___oneStarBorder_20;
	// System.Int32 MainScript::twoStarsBorder
	int32_t ___twoStarsBorder_21;
	// System.Int32 MainScript::threeStarsBorder
	int32_t ___threeStarsBorder_22;
	// System.Single MainScript::friendSpawnChance
	float ___friendSpawnChance_23;
	// System.Single MainScript::armoredSpawnChance
	float ___armoredSpawnChance_24;
	// System.Single MainScript::armedSpawnChance
	float ___armedSpawnChance_25;
	// System.Int32 MainScript::friendAmount
	int32_t ___friendAmount_26;
	// System.Int32 MainScript::armoredAmount
	int32_t ___armoredAmount_27;
	// System.Int32 MainScript::armedAmount
	int32_t ___armedAmount_28;
	// UnityEngine.GameObject MainScript::mainUIPanel
	GameObject_t3674682005 * ___mainUIPanel_29;
	// UnityEngine.GameObject MainScript::pausePanel
	GameObject_t3674682005 * ___pausePanel_30;
	// UnityEngine.GameObject MainScript::resultPanel
	GameObject_t3674682005 * ___resultPanel_31;
	// UnityEngine.GameObject MainScript::audioPanel
	GameObject_t3674682005 * ___audioPanel_32;
	// UnityEngine.UI.Text MainScript::resultScoreText
	Text_t9039225 * ___resultScoreText_33;
	// UnityEngine.GameObject MainScript::Star_1
	GameObject_t3674682005 * ___Star_1_34;
	// UnityEngine.GameObject MainScript::Star_2
	GameObject_t3674682005 * ___Star_2_35;
	// UnityEngine.GameObject MainScript::Star_3
	GameObject_t3674682005 * ___Star_3_36;
	// UnityEngine.UI.Button MainScript::nextButton
	Button_t3896396478 * ___nextButton_37;
	// UnityEngine.UI.Button MainScript::pauseButton
	Button_t3896396478 * ___pauseButton_38;
	// UnityEngine.UI.Button MainScript::RightButton
	Button_t3896396478 * ___RightButton_39;
	// UnityEngine.UI.Button MainScript::LeftButton
	Button_t3896396478 * ___LeftButton_40;
	// ScoreText MainScript::scoreText
	ScoreText_t4132929215 * ___scoreText_41;
	// ScoreText MainScript::remainText
	ScoreText_t4132929215 * ___remainText_42;
	// UnityEngine.UI.Toggle MainScript::audioToggle
	Toggle_t110812896 * ___audioToggle_43;
	// UnityEngine.UI.Slider MainScript::effectsSlider
	Slider_t79469677 * ___effectsSlider_44;
	// UnityEngine.UI.Slider MainScript::musicSlider
	Slider_t79469677 * ___musicSlider_45;
	// UnityEngine.UI.Slider MainScript::audioSlider
	Slider_t79469677 * ___audioSlider_46;
	// UnityEngine.Animator MainScript::transitionImage
	Animator_t2776330603 * ___transitionImage_47;
	// System.Collections.Generic.List`1<UnityEngine.Animator> MainScript::pauseButtons
	List_1_t4144516155 * ___pauseButtons_48;
	// System.Boolean MainScript::isChanging
	bool ___isChanging_49;

public:
	inline static int32_t get_offset_of_levelNumber_2() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___levelNumber_2)); }
	inline int32_t get_levelNumber_2() const { return ___levelNumber_2; }
	inline int32_t* get_address_of_levelNumber_2() { return &___levelNumber_2; }
	inline void set_levelNumber_2(int32_t value)
	{
		___levelNumber_2 = value;
	}

	inline static int32_t get_offset_of_Enemy_3() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___Enemy_3)); }
	inline GameObject_t3674682005 * get_Enemy_3() const { return ___Enemy_3; }
	inline GameObject_t3674682005 ** get_address_of_Enemy_3() { return &___Enemy_3; }
	inline void set_Enemy_3(GameObject_t3674682005 * value)
	{
		___Enemy_3 = value;
		Il2CppCodeGenWriteBarrier(&___Enemy_3, value);
	}

	inline static int32_t get_offset_of_Friend_4() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___Friend_4)); }
	inline GameObject_t3674682005 * get_Friend_4() const { return ___Friend_4; }
	inline GameObject_t3674682005 ** get_address_of_Friend_4() { return &___Friend_4; }
	inline void set_Friend_4(GameObject_t3674682005 * value)
	{
		___Friend_4 = value;
		Il2CppCodeGenWriteBarrier(&___Friend_4, value);
	}

	inline static int32_t get_offset_of_Armored_5() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___Armored_5)); }
	inline GameObject_t3674682005 * get_Armored_5() const { return ___Armored_5; }
	inline GameObject_t3674682005 ** get_address_of_Armored_5() { return &___Armored_5; }
	inline void set_Armored_5(GameObject_t3674682005 * value)
	{
		___Armored_5 = value;
		Il2CppCodeGenWriteBarrier(&___Armored_5, value);
	}

	inline static int32_t get_offset_of_Armed_6() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___Armed_6)); }
	inline GameObject_t3674682005 * get_Armed_6() const { return ___Armed_6; }
	inline GameObject_t3674682005 ** get_address_of_Armed_6() { return &___Armed_6; }
	inline void set_Armed_6(GameObject_t3674682005 * value)
	{
		___Armed_6 = value;
		Il2CppCodeGenWriteBarrier(&___Armed_6, value);
	}

	inline static int32_t get_offset_of_Background_7() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___Background_7)); }
	inline Transform_t1659122786 * get_Background_7() const { return ___Background_7; }
	inline Transform_t1659122786 ** get_address_of_Background_7() { return &___Background_7; }
	inline void set_Background_7(Transform_t1659122786 * value)
	{
		___Background_7 = value;
		Il2CppCodeGenWriteBarrier(&___Background_7, value);
	}

	inline static int32_t get_offset_of_SpawnEnemyBorder_8() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___SpawnEnemyBorder_8)); }
	inline float get_SpawnEnemyBorder_8() const { return ___SpawnEnemyBorder_8; }
	inline float* get_address_of_SpawnEnemyBorder_8() { return &___SpawnEnemyBorder_8; }
	inline void set_SpawnEnemyBorder_8(float value)
	{
		___SpawnEnemyBorder_8 = value;
	}

	inline static int32_t get_offset_of_SpawnHeight_9() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___SpawnHeight_9)); }
	inline float get_SpawnHeight_9() const { return ___SpawnHeight_9; }
	inline float* get_address_of_SpawnHeight_9() { return &___SpawnHeight_9; }
	inline void set_SpawnHeight_9(float value)
	{
		___SpawnHeight_9 = value;
	}

	inline static int32_t get_offset_of_timeToSpawn_10() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___timeToSpawn_10)); }
	inline float get_timeToSpawn_10() const { return ___timeToSpawn_10; }
	inline float* get_address_of_timeToSpawn_10() { return &___timeToSpawn_10; }
	inline void set_timeToSpawn_10(float value)
	{
		___timeToSpawn_10 = value;
	}

	inline static int32_t get_offset_of_score_11() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___score_11)); }
	inline int32_t get_score_11() const { return ___score_11; }
	inline int32_t* get_address_of_score_11() { return &___score_11; }
	inline void set_score_11(int32_t value)
	{
		___score_11 = value;
	}

	inline static int32_t get_offset_of_remain_12() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___remain_12)); }
	inline int32_t get_remain_12() const { return ___remain_12; }
	inline int32_t* get_address_of_remain_12() { return &___remain_12; }
	inline void set_remain_12(int32_t value)
	{
		___remain_12 = value;
	}

	inline static int32_t get_offset_of_spawned_13() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___spawned_13)); }
	inline int32_t get_spawned_13() const { return ___spawned_13; }
	inline int32_t* get_address_of_spawned_13() { return &___spawned_13; }
	inline void set_spawned_13(int32_t value)
	{
		___spawned_13 = value;
	}

	inline static int32_t get_offset_of_finished_14() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___finished_14)); }
	inline bool get_finished_14() const { return ___finished_14; }
	inline bool* get_address_of_finished_14() { return &___finished_14; }
	inline void set_finished_14(bool value)
	{
		___finished_14 = value;
	}

	inline static int32_t get_offset_of_initialNumberOfEnemies_15() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___initialNumberOfEnemies_15)); }
	inline int32_t get_initialNumberOfEnemies_15() const { return ___initialNumberOfEnemies_15; }
	inline int32_t* get_address_of_initialNumberOfEnemies_15() { return &___initialNumberOfEnemies_15; }
	inline void set_initialNumberOfEnemies_15(int32_t value)
	{
		___initialNumberOfEnemies_15 = value;
	}

	inline static int32_t get_offset_of_SpawnTime_16() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___SpawnTime_16)); }
	inline float get_SpawnTime_16() const { return ___SpawnTime_16; }
	inline float* get_address_of_SpawnTime_16() { return &___SpawnTime_16; }
	inline void set_SpawnTime_16(float value)
	{
		___SpawnTime_16 = value;
	}

	inline static int32_t get_offset_of_initialScore_17() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___initialScore_17)); }
	inline int32_t get_initialScore_17() const { return ___initialScore_17; }
	inline int32_t* get_address_of_initialScore_17() { return &___initialScore_17; }
	inline void set_initialScore_17(int32_t value)
	{
		___initialScore_17 = value;
	}

	inline static int32_t get_offset_of_addToScore_18() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___addToScore_18)); }
	inline int32_t get_addToScore_18() const { return ___addToScore_18; }
	inline int32_t* get_address_of_addToScore_18() { return &___addToScore_18; }
	inline void set_addToScore_18(int32_t value)
	{
		___addToScore_18 = value;
	}

	inline static int32_t get_offset_of_takeFromScore_19() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___takeFromScore_19)); }
	inline int32_t get_takeFromScore_19() const { return ___takeFromScore_19; }
	inline int32_t* get_address_of_takeFromScore_19() { return &___takeFromScore_19; }
	inline void set_takeFromScore_19(int32_t value)
	{
		___takeFromScore_19 = value;
	}

	inline static int32_t get_offset_of_oneStarBorder_20() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___oneStarBorder_20)); }
	inline int32_t get_oneStarBorder_20() const { return ___oneStarBorder_20; }
	inline int32_t* get_address_of_oneStarBorder_20() { return &___oneStarBorder_20; }
	inline void set_oneStarBorder_20(int32_t value)
	{
		___oneStarBorder_20 = value;
	}

	inline static int32_t get_offset_of_twoStarsBorder_21() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___twoStarsBorder_21)); }
	inline int32_t get_twoStarsBorder_21() const { return ___twoStarsBorder_21; }
	inline int32_t* get_address_of_twoStarsBorder_21() { return &___twoStarsBorder_21; }
	inline void set_twoStarsBorder_21(int32_t value)
	{
		___twoStarsBorder_21 = value;
	}

	inline static int32_t get_offset_of_threeStarsBorder_22() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___threeStarsBorder_22)); }
	inline int32_t get_threeStarsBorder_22() const { return ___threeStarsBorder_22; }
	inline int32_t* get_address_of_threeStarsBorder_22() { return &___threeStarsBorder_22; }
	inline void set_threeStarsBorder_22(int32_t value)
	{
		___threeStarsBorder_22 = value;
	}

	inline static int32_t get_offset_of_friendSpawnChance_23() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___friendSpawnChance_23)); }
	inline float get_friendSpawnChance_23() const { return ___friendSpawnChance_23; }
	inline float* get_address_of_friendSpawnChance_23() { return &___friendSpawnChance_23; }
	inline void set_friendSpawnChance_23(float value)
	{
		___friendSpawnChance_23 = value;
	}

	inline static int32_t get_offset_of_armoredSpawnChance_24() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___armoredSpawnChance_24)); }
	inline float get_armoredSpawnChance_24() const { return ___armoredSpawnChance_24; }
	inline float* get_address_of_armoredSpawnChance_24() { return &___armoredSpawnChance_24; }
	inline void set_armoredSpawnChance_24(float value)
	{
		___armoredSpawnChance_24 = value;
	}

	inline static int32_t get_offset_of_armedSpawnChance_25() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___armedSpawnChance_25)); }
	inline float get_armedSpawnChance_25() const { return ___armedSpawnChance_25; }
	inline float* get_address_of_armedSpawnChance_25() { return &___armedSpawnChance_25; }
	inline void set_armedSpawnChance_25(float value)
	{
		___armedSpawnChance_25 = value;
	}

	inline static int32_t get_offset_of_friendAmount_26() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___friendAmount_26)); }
	inline int32_t get_friendAmount_26() const { return ___friendAmount_26; }
	inline int32_t* get_address_of_friendAmount_26() { return &___friendAmount_26; }
	inline void set_friendAmount_26(int32_t value)
	{
		___friendAmount_26 = value;
	}

	inline static int32_t get_offset_of_armoredAmount_27() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___armoredAmount_27)); }
	inline int32_t get_armoredAmount_27() const { return ___armoredAmount_27; }
	inline int32_t* get_address_of_armoredAmount_27() { return &___armoredAmount_27; }
	inline void set_armoredAmount_27(int32_t value)
	{
		___armoredAmount_27 = value;
	}

	inline static int32_t get_offset_of_armedAmount_28() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___armedAmount_28)); }
	inline int32_t get_armedAmount_28() const { return ___armedAmount_28; }
	inline int32_t* get_address_of_armedAmount_28() { return &___armedAmount_28; }
	inline void set_armedAmount_28(int32_t value)
	{
		___armedAmount_28 = value;
	}

	inline static int32_t get_offset_of_mainUIPanel_29() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___mainUIPanel_29)); }
	inline GameObject_t3674682005 * get_mainUIPanel_29() const { return ___mainUIPanel_29; }
	inline GameObject_t3674682005 ** get_address_of_mainUIPanel_29() { return &___mainUIPanel_29; }
	inline void set_mainUIPanel_29(GameObject_t3674682005 * value)
	{
		___mainUIPanel_29 = value;
		Il2CppCodeGenWriteBarrier(&___mainUIPanel_29, value);
	}

	inline static int32_t get_offset_of_pausePanel_30() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___pausePanel_30)); }
	inline GameObject_t3674682005 * get_pausePanel_30() const { return ___pausePanel_30; }
	inline GameObject_t3674682005 ** get_address_of_pausePanel_30() { return &___pausePanel_30; }
	inline void set_pausePanel_30(GameObject_t3674682005 * value)
	{
		___pausePanel_30 = value;
		Il2CppCodeGenWriteBarrier(&___pausePanel_30, value);
	}

	inline static int32_t get_offset_of_resultPanel_31() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___resultPanel_31)); }
	inline GameObject_t3674682005 * get_resultPanel_31() const { return ___resultPanel_31; }
	inline GameObject_t3674682005 ** get_address_of_resultPanel_31() { return &___resultPanel_31; }
	inline void set_resultPanel_31(GameObject_t3674682005 * value)
	{
		___resultPanel_31 = value;
		Il2CppCodeGenWriteBarrier(&___resultPanel_31, value);
	}

	inline static int32_t get_offset_of_audioPanel_32() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___audioPanel_32)); }
	inline GameObject_t3674682005 * get_audioPanel_32() const { return ___audioPanel_32; }
	inline GameObject_t3674682005 ** get_address_of_audioPanel_32() { return &___audioPanel_32; }
	inline void set_audioPanel_32(GameObject_t3674682005 * value)
	{
		___audioPanel_32 = value;
		Il2CppCodeGenWriteBarrier(&___audioPanel_32, value);
	}

	inline static int32_t get_offset_of_resultScoreText_33() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___resultScoreText_33)); }
	inline Text_t9039225 * get_resultScoreText_33() const { return ___resultScoreText_33; }
	inline Text_t9039225 ** get_address_of_resultScoreText_33() { return &___resultScoreText_33; }
	inline void set_resultScoreText_33(Text_t9039225 * value)
	{
		___resultScoreText_33 = value;
		Il2CppCodeGenWriteBarrier(&___resultScoreText_33, value);
	}

	inline static int32_t get_offset_of_Star_1_34() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___Star_1_34)); }
	inline GameObject_t3674682005 * get_Star_1_34() const { return ___Star_1_34; }
	inline GameObject_t3674682005 ** get_address_of_Star_1_34() { return &___Star_1_34; }
	inline void set_Star_1_34(GameObject_t3674682005 * value)
	{
		___Star_1_34 = value;
		Il2CppCodeGenWriteBarrier(&___Star_1_34, value);
	}

	inline static int32_t get_offset_of_Star_2_35() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___Star_2_35)); }
	inline GameObject_t3674682005 * get_Star_2_35() const { return ___Star_2_35; }
	inline GameObject_t3674682005 ** get_address_of_Star_2_35() { return &___Star_2_35; }
	inline void set_Star_2_35(GameObject_t3674682005 * value)
	{
		___Star_2_35 = value;
		Il2CppCodeGenWriteBarrier(&___Star_2_35, value);
	}

	inline static int32_t get_offset_of_Star_3_36() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___Star_3_36)); }
	inline GameObject_t3674682005 * get_Star_3_36() const { return ___Star_3_36; }
	inline GameObject_t3674682005 ** get_address_of_Star_3_36() { return &___Star_3_36; }
	inline void set_Star_3_36(GameObject_t3674682005 * value)
	{
		___Star_3_36 = value;
		Il2CppCodeGenWriteBarrier(&___Star_3_36, value);
	}

	inline static int32_t get_offset_of_nextButton_37() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___nextButton_37)); }
	inline Button_t3896396478 * get_nextButton_37() const { return ___nextButton_37; }
	inline Button_t3896396478 ** get_address_of_nextButton_37() { return &___nextButton_37; }
	inline void set_nextButton_37(Button_t3896396478 * value)
	{
		___nextButton_37 = value;
		Il2CppCodeGenWriteBarrier(&___nextButton_37, value);
	}

	inline static int32_t get_offset_of_pauseButton_38() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___pauseButton_38)); }
	inline Button_t3896396478 * get_pauseButton_38() const { return ___pauseButton_38; }
	inline Button_t3896396478 ** get_address_of_pauseButton_38() { return &___pauseButton_38; }
	inline void set_pauseButton_38(Button_t3896396478 * value)
	{
		___pauseButton_38 = value;
		Il2CppCodeGenWriteBarrier(&___pauseButton_38, value);
	}

	inline static int32_t get_offset_of_RightButton_39() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___RightButton_39)); }
	inline Button_t3896396478 * get_RightButton_39() const { return ___RightButton_39; }
	inline Button_t3896396478 ** get_address_of_RightButton_39() { return &___RightButton_39; }
	inline void set_RightButton_39(Button_t3896396478 * value)
	{
		___RightButton_39 = value;
		Il2CppCodeGenWriteBarrier(&___RightButton_39, value);
	}

	inline static int32_t get_offset_of_LeftButton_40() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___LeftButton_40)); }
	inline Button_t3896396478 * get_LeftButton_40() const { return ___LeftButton_40; }
	inline Button_t3896396478 ** get_address_of_LeftButton_40() { return &___LeftButton_40; }
	inline void set_LeftButton_40(Button_t3896396478 * value)
	{
		___LeftButton_40 = value;
		Il2CppCodeGenWriteBarrier(&___LeftButton_40, value);
	}

	inline static int32_t get_offset_of_scoreText_41() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___scoreText_41)); }
	inline ScoreText_t4132929215 * get_scoreText_41() const { return ___scoreText_41; }
	inline ScoreText_t4132929215 ** get_address_of_scoreText_41() { return &___scoreText_41; }
	inline void set_scoreText_41(ScoreText_t4132929215 * value)
	{
		___scoreText_41 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_41, value);
	}

	inline static int32_t get_offset_of_remainText_42() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___remainText_42)); }
	inline ScoreText_t4132929215 * get_remainText_42() const { return ___remainText_42; }
	inline ScoreText_t4132929215 ** get_address_of_remainText_42() { return &___remainText_42; }
	inline void set_remainText_42(ScoreText_t4132929215 * value)
	{
		___remainText_42 = value;
		Il2CppCodeGenWriteBarrier(&___remainText_42, value);
	}

	inline static int32_t get_offset_of_audioToggle_43() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___audioToggle_43)); }
	inline Toggle_t110812896 * get_audioToggle_43() const { return ___audioToggle_43; }
	inline Toggle_t110812896 ** get_address_of_audioToggle_43() { return &___audioToggle_43; }
	inline void set_audioToggle_43(Toggle_t110812896 * value)
	{
		___audioToggle_43 = value;
		Il2CppCodeGenWriteBarrier(&___audioToggle_43, value);
	}

	inline static int32_t get_offset_of_effectsSlider_44() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___effectsSlider_44)); }
	inline Slider_t79469677 * get_effectsSlider_44() const { return ___effectsSlider_44; }
	inline Slider_t79469677 ** get_address_of_effectsSlider_44() { return &___effectsSlider_44; }
	inline void set_effectsSlider_44(Slider_t79469677 * value)
	{
		___effectsSlider_44 = value;
		Il2CppCodeGenWriteBarrier(&___effectsSlider_44, value);
	}

	inline static int32_t get_offset_of_musicSlider_45() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___musicSlider_45)); }
	inline Slider_t79469677 * get_musicSlider_45() const { return ___musicSlider_45; }
	inline Slider_t79469677 ** get_address_of_musicSlider_45() { return &___musicSlider_45; }
	inline void set_musicSlider_45(Slider_t79469677 * value)
	{
		___musicSlider_45 = value;
		Il2CppCodeGenWriteBarrier(&___musicSlider_45, value);
	}

	inline static int32_t get_offset_of_audioSlider_46() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___audioSlider_46)); }
	inline Slider_t79469677 * get_audioSlider_46() const { return ___audioSlider_46; }
	inline Slider_t79469677 ** get_address_of_audioSlider_46() { return &___audioSlider_46; }
	inline void set_audioSlider_46(Slider_t79469677 * value)
	{
		___audioSlider_46 = value;
		Il2CppCodeGenWriteBarrier(&___audioSlider_46, value);
	}

	inline static int32_t get_offset_of_transitionImage_47() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___transitionImage_47)); }
	inline Animator_t2776330603 * get_transitionImage_47() const { return ___transitionImage_47; }
	inline Animator_t2776330603 ** get_address_of_transitionImage_47() { return &___transitionImage_47; }
	inline void set_transitionImage_47(Animator_t2776330603 * value)
	{
		___transitionImage_47 = value;
		Il2CppCodeGenWriteBarrier(&___transitionImage_47, value);
	}

	inline static int32_t get_offset_of_pauseButtons_48() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___pauseButtons_48)); }
	inline List_1_t4144516155 * get_pauseButtons_48() const { return ___pauseButtons_48; }
	inline List_1_t4144516155 ** get_address_of_pauseButtons_48() { return &___pauseButtons_48; }
	inline void set_pauseButtons_48(List_1_t4144516155 * value)
	{
		___pauseButtons_48 = value;
		Il2CppCodeGenWriteBarrier(&___pauseButtons_48, value);
	}

	inline static int32_t get_offset_of_isChanging_49() { return static_cast<int32_t>(offsetof(MainScript_t2442702852, ___isChanging_49)); }
	inline bool get_isChanging_49() const { return ___isChanging_49; }
	inline bool* get_address_of_isChanging_49() { return &___isChanging_49; }
	inline void set_isChanging_49(bool value)
	{
		___isChanging_49 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
