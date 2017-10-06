#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArmoredScript
struct  ArmoredScript_t2367846505  : public MonoBehaviour_t667441552
{
public:
	// System.Single ArmoredScript::fullArmor
	float ___fullArmor_2;
	// System.Single ArmoredScript::damage
	float ___damage_3;
	// UnityEngine.UI.Image ArmoredScript::armorBar
	Image_t538875265 * ___armorBar_4;
	// UnityEngine.Canvas ArmoredScript::canvas
	Canvas_t2727140764 * ___canvas_5;
	// UnityEngine.RectTransform ArmoredScript::barRectTransform
	RectTransform_t972643934 * ___barRectTransform_6;
	// UnityEngine.RectTransform ArmoredScript::canvasRectTransform
	RectTransform_t972643934 * ___canvasRectTransform_7;
	// System.Single ArmoredScript::armorBarHeight
	float ___armorBarHeight_8;
	// System.Single ArmoredScript::armor
	float ___armor_9;

public:
	inline static int32_t get_offset_of_fullArmor_2() { return static_cast<int32_t>(offsetof(ArmoredScript_t2367846505, ___fullArmor_2)); }
	inline float get_fullArmor_2() const { return ___fullArmor_2; }
	inline float* get_address_of_fullArmor_2() { return &___fullArmor_2; }
	inline void set_fullArmor_2(float value)
	{
		___fullArmor_2 = value;
	}

	inline static int32_t get_offset_of_damage_3() { return static_cast<int32_t>(offsetof(ArmoredScript_t2367846505, ___damage_3)); }
	inline float get_damage_3() const { return ___damage_3; }
	inline float* get_address_of_damage_3() { return &___damage_3; }
	inline void set_damage_3(float value)
	{
		___damage_3 = value;
	}

	inline static int32_t get_offset_of_armorBar_4() { return static_cast<int32_t>(offsetof(ArmoredScript_t2367846505, ___armorBar_4)); }
	inline Image_t538875265 * get_armorBar_4() const { return ___armorBar_4; }
	inline Image_t538875265 ** get_address_of_armorBar_4() { return &___armorBar_4; }
	inline void set_armorBar_4(Image_t538875265 * value)
	{
		___armorBar_4 = value;
		Il2CppCodeGenWriteBarrier(&___armorBar_4, value);
	}

	inline static int32_t get_offset_of_canvas_5() { return static_cast<int32_t>(offsetof(ArmoredScript_t2367846505, ___canvas_5)); }
	inline Canvas_t2727140764 * get_canvas_5() const { return ___canvas_5; }
	inline Canvas_t2727140764 ** get_address_of_canvas_5() { return &___canvas_5; }
	inline void set_canvas_5(Canvas_t2727140764 * value)
	{
		___canvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_5, value);
	}

	inline static int32_t get_offset_of_barRectTransform_6() { return static_cast<int32_t>(offsetof(ArmoredScript_t2367846505, ___barRectTransform_6)); }
	inline RectTransform_t972643934 * get_barRectTransform_6() const { return ___barRectTransform_6; }
	inline RectTransform_t972643934 ** get_address_of_barRectTransform_6() { return &___barRectTransform_6; }
	inline void set_barRectTransform_6(RectTransform_t972643934 * value)
	{
		___barRectTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___barRectTransform_6, value);
	}

	inline static int32_t get_offset_of_canvasRectTransform_7() { return static_cast<int32_t>(offsetof(ArmoredScript_t2367846505, ___canvasRectTransform_7)); }
	inline RectTransform_t972643934 * get_canvasRectTransform_7() const { return ___canvasRectTransform_7; }
	inline RectTransform_t972643934 ** get_address_of_canvasRectTransform_7() { return &___canvasRectTransform_7; }
	inline void set_canvasRectTransform_7(RectTransform_t972643934 * value)
	{
		___canvasRectTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___canvasRectTransform_7, value);
	}

	inline static int32_t get_offset_of_armorBarHeight_8() { return static_cast<int32_t>(offsetof(ArmoredScript_t2367846505, ___armorBarHeight_8)); }
	inline float get_armorBarHeight_8() const { return ___armorBarHeight_8; }
	inline float* get_address_of_armorBarHeight_8() { return &___armorBarHeight_8; }
	inline void set_armorBarHeight_8(float value)
	{
		___armorBarHeight_8 = value;
	}

	inline static int32_t get_offset_of_armor_9() { return static_cast<int32_t>(offsetof(ArmoredScript_t2367846505, ___armor_9)); }
	inline float get_armor_9() const { return ___armor_9; }
	inline float* get_address_of_armor_9() { return &___armor_9; }
	inline void set_armor_9(float value)
	{
		___armor_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
