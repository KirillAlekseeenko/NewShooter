#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;
// ProgressBar.Utils.FillerProperty
struct FillerProperty_t3769378557;
// ProgressBar.Utils.ProgressValue
struct ProgressValue_t1899486002;
// UnityEngine.UI.Text
struct Text_t9039225;
// ProgressBar.Utils.OnCompleteEvent
struct OnCompleteEvent_t4208438896;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProgressBar.ProgressBarBehaviour
struct  ProgressBarBehaviour_t2943412193  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.RectTransform ProgressBar.ProgressBarBehaviour::m_FillRect
	RectTransform_t972643934 * ___m_FillRect_2;
	// ProgressBar.Utils.FillerProperty ProgressBar.ProgressBarBehaviour::m_FillerInfo
	FillerProperty_t3769378557 * ___m_FillerInfo_3;
	// ProgressBar.Utils.ProgressValue ProgressBar.ProgressBarBehaviour::m_Value
	ProgressValue_t1899486002 * ___m_Value_4;
	// UnityEngine.UI.Text ProgressBar.ProgressBarBehaviour::m_AttachedText
	Text_t9039225 * ___m_AttachedText_5;
	// System.Int32 ProgressBar.ProgressBarBehaviour::ProgressSpeed
	int32_t ___ProgressSpeed_6;
	// System.Boolean ProgressBar.ProgressBarBehaviour::TriggerOnComplete
	bool ___TriggerOnComplete_7;
	// ProgressBar.Utils.OnCompleteEvent ProgressBar.ProgressBarBehaviour::OnCompleteMethods
	OnCompleteEvent_t4208438896 * ___OnCompleteMethods_8;
	// System.Single ProgressBar.ProgressBarBehaviour::m_XOffset
	float ___m_XOffset_9;
	// System.Single ProgressBar.ProgressBarBehaviour::<TransitoryValue>k__BackingField
	float ___U3CTransitoryValueU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_FillRect_2() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2943412193, ___m_FillRect_2)); }
	inline RectTransform_t972643934 * get_m_FillRect_2() const { return ___m_FillRect_2; }
	inline RectTransform_t972643934 ** get_address_of_m_FillRect_2() { return &___m_FillRect_2; }
	inline void set_m_FillRect_2(RectTransform_t972643934 * value)
	{
		___m_FillRect_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_FillRect_2, value);
	}

	inline static int32_t get_offset_of_m_FillerInfo_3() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2943412193, ___m_FillerInfo_3)); }
	inline FillerProperty_t3769378557 * get_m_FillerInfo_3() const { return ___m_FillerInfo_3; }
	inline FillerProperty_t3769378557 ** get_address_of_m_FillerInfo_3() { return &___m_FillerInfo_3; }
	inline void set_m_FillerInfo_3(FillerProperty_t3769378557 * value)
	{
		___m_FillerInfo_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_FillerInfo_3, value);
	}

	inline static int32_t get_offset_of_m_Value_4() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2943412193, ___m_Value_4)); }
	inline ProgressValue_t1899486002 * get_m_Value_4() const { return ___m_Value_4; }
	inline ProgressValue_t1899486002 ** get_address_of_m_Value_4() { return &___m_Value_4; }
	inline void set_m_Value_4(ProgressValue_t1899486002 * value)
	{
		___m_Value_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Value_4, value);
	}

	inline static int32_t get_offset_of_m_AttachedText_5() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2943412193, ___m_AttachedText_5)); }
	inline Text_t9039225 * get_m_AttachedText_5() const { return ___m_AttachedText_5; }
	inline Text_t9039225 ** get_address_of_m_AttachedText_5() { return &___m_AttachedText_5; }
	inline void set_m_AttachedText_5(Text_t9039225 * value)
	{
		___m_AttachedText_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_AttachedText_5, value);
	}

	inline static int32_t get_offset_of_ProgressSpeed_6() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2943412193, ___ProgressSpeed_6)); }
	inline int32_t get_ProgressSpeed_6() const { return ___ProgressSpeed_6; }
	inline int32_t* get_address_of_ProgressSpeed_6() { return &___ProgressSpeed_6; }
	inline void set_ProgressSpeed_6(int32_t value)
	{
		___ProgressSpeed_6 = value;
	}

	inline static int32_t get_offset_of_TriggerOnComplete_7() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2943412193, ___TriggerOnComplete_7)); }
	inline bool get_TriggerOnComplete_7() const { return ___TriggerOnComplete_7; }
	inline bool* get_address_of_TriggerOnComplete_7() { return &___TriggerOnComplete_7; }
	inline void set_TriggerOnComplete_7(bool value)
	{
		___TriggerOnComplete_7 = value;
	}

	inline static int32_t get_offset_of_OnCompleteMethods_8() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2943412193, ___OnCompleteMethods_8)); }
	inline OnCompleteEvent_t4208438896 * get_OnCompleteMethods_8() const { return ___OnCompleteMethods_8; }
	inline OnCompleteEvent_t4208438896 ** get_address_of_OnCompleteMethods_8() { return &___OnCompleteMethods_8; }
	inline void set_OnCompleteMethods_8(OnCompleteEvent_t4208438896 * value)
	{
		___OnCompleteMethods_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnCompleteMethods_8, value);
	}

	inline static int32_t get_offset_of_m_XOffset_9() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2943412193, ___m_XOffset_9)); }
	inline float get_m_XOffset_9() const { return ___m_XOffset_9; }
	inline float* get_address_of_m_XOffset_9() { return &___m_XOffset_9; }
	inline void set_m_XOffset_9(float value)
	{
		___m_XOffset_9 = value;
	}

	inline static int32_t get_offset_of_U3CTransitoryValueU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2943412193, ___U3CTransitoryValueU3Ek__BackingField_10)); }
	inline float get_U3CTransitoryValueU3Ek__BackingField_10() const { return ___U3CTransitoryValueU3Ek__BackingField_10; }
	inline float* get_address_of_U3CTransitoryValueU3Ek__BackingField_10() { return &___U3CTransitoryValueU3Ek__BackingField_10; }
	inline void set_U3CTransitoryValueU3Ek__BackingField_10(float value)
	{
		___U3CTransitoryValueU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
