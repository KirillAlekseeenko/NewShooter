#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonScript
struct  ButtonScript_t1098287805  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 ButtonScript::stars
	int32_t ___stars_2;
	// System.Boolean ButtonScript::locked
	bool ___locked_3;
	// UnityEngine.UI.Text ButtonScript::LevelText
	Text_t9039225 * ___LevelText_4;
	// UnityEngine.GameObject ButtonScript::Star1
	GameObject_t3674682005 * ___Star1_5;
	// UnityEngine.GameObject ButtonScript::Star2
	GameObject_t3674682005 * ___Star2_6;
	// UnityEngine.GameObject ButtonScript::Star3
	GameObject_t3674682005 * ___Star3_7;

public:
	inline static int32_t get_offset_of_stars_2() { return static_cast<int32_t>(offsetof(ButtonScript_t1098287805, ___stars_2)); }
	inline int32_t get_stars_2() const { return ___stars_2; }
	inline int32_t* get_address_of_stars_2() { return &___stars_2; }
	inline void set_stars_2(int32_t value)
	{
		___stars_2 = value;
	}

	inline static int32_t get_offset_of_locked_3() { return static_cast<int32_t>(offsetof(ButtonScript_t1098287805, ___locked_3)); }
	inline bool get_locked_3() const { return ___locked_3; }
	inline bool* get_address_of_locked_3() { return &___locked_3; }
	inline void set_locked_3(bool value)
	{
		___locked_3 = value;
	}

	inline static int32_t get_offset_of_LevelText_4() { return static_cast<int32_t>(offsetof(ButtonScript_t1098287805, ___LevelText_4)); }
	inline Text_t9039225 * get_LevelText_4() const { return ___LevelText_4; }
	inline Text_t9039225 ** get_address_of_LevelText_4() { return &___LevelText_4; }
	inline void set_LevelText_4(Text_t9039225 * value)
	{
		___LevelText_4 = value;
		Il2CppCodeGenWriteBarrier(&___LevelText_4, value);
	}

	inline static int32_t get_offset_of_Star1_5() { return static_cast<int32_t>(offsetof(ButtonScript_t1098287805, ___Star1_5)); }
	inline GameObject_t3674682005 * get_Star1_5() const { return ___Star1_5; }
	inline GameObject_t3674682005 ** get_address_of_Star1_5() { return &___Star1_5; }
	inline void set_Star1_5(GameObject_t3674682005 * value)
	{
		___Star1_5 = value;
		Il2CppCodeGenWriteBarrier(&___Star1_5, value);
	}

	inline static int32_t get_offset_of_Star2_6() { return static_cast<int32_t>(offsetof(ButtonScript_t1098287805, ___Star2_6)); }
	inline GameObject_t3674682005 * get_Star2_6() const { return ___Star2_6; }
	inline GameObject_t3674682005 ** get_address_of_Star2_6() { return &___Star2_6; }
	inline void set_Star2_6(GameObject_t3674682005 * value)
	{
		___Star2_6 = value;
		Il2CppCodeGenWriteBarrier(&___Star2_6, value);
	}

	inline static int32_t get_offset_of_Star3_7() { return static_cast<int32_t>(offsetof(ButtonScript_t1098287805, ___Star3_7)); }
	inline GameObject_t3674682005 * get_Star3_7() const { return ___Star3_7; }
	inline GameObject_t3674682005 ** get_address_of_Star3_7() { return &___Star3_7; }
	inline void set_Star3_7(GameObject_t3674682005 * value)
	{
		___Star3_7 = value;
		Il2CppCodeGenWriteBarrier(&___Star3_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
