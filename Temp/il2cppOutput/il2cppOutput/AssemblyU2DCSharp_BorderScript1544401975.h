#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BorderScript/missAction
struct missAction_t616564522;
// BorderScript/friendPassedAction
struct friendPassedAction_t176239964;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BorderScript
struct  BorderScript_t1544401975  : public MonoBehaviour_t667441552
{
public:

public:
};

struct BorderScript_t1544401975_StaticFields
{
public:
	// BorderScript/missAction BorderScript::onMiss
	missAction_t616564522 * ___onMiss_2;
	// BorderScript/friendPassedAction BorderScript::onFriendPassed
	friendPassedAction_t176239964 * ___onFriendPassed_3;

public:
	inline static int32_t get_offset_of_onMiss_2() { return static_cast<int32_t>(offsetof(BorderScript_t1544401975_StaticFields, ___onMiss_2)); }
	inline missAction_t616564522 * get_onMiss_2() const { return ___onMiss_2; }
	inline missAction_t616564522 ** get_address_of_onMiss_2() { return &___onMiss_2; }
	inline void set_onMiss_2(missAction_t616564522 * value)
	{
		___onMiss_2 = value;
		Il2CppCodeGenWriteBarrier(&___onMiss_2, value);
	}

	inline static int32_t get_offset_of_onFriendPassed_3() { return static_cast<int32_t>(offsetof(BorderScript_t1544401975_StaticFields, ___onFriendPassed_3)); }
	inline friendPassedAction_t176239964 * get_onFriendPassed_3() const { return ___onFriendPassed_3; }
	inline friendPassedAction_t176239964 ** get_address_of_onFriendPassed_3() { return &___onFriendPassed_3; }
	inline void set_onFriendPassed_3(friendPassedAction_t176239964 * value)
	{
		___onFriendPassed_3 = value;
		Il2CppCodeGenWriteBarrier(&___onFriendPassed_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
