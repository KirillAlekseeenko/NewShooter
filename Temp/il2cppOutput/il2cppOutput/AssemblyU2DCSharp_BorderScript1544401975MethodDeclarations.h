#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// BorderScript
struct BorderScript_t1544401975;
// BorderScript/missAction
struct missAction_t616564522;
// BorderScript/friendPassedAction
struct friendPassedAction_t176239964;
// UnityEngine.Collider
struct Collider_t2939674232;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BorderScript_missAction616564522.h"
#include "AssemblyU2DCSharp_BorderScript_friendPassedAction176239964.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"

// System.Void BorderScript::.ctor()
extern "C"  void BorderScript__ctor_m2309753924 (BorderScript_t1544401975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BorderScript::add_onMiss(BorderScript/missAction)
extern "C"  void BorderScript_add_onMiss_m3585439919 (Il2CppObject * __this /* static, unused */, missAction_t616564522 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BorderScript::remove_onMiss(BorderScript/missAction)
extern "C"  void BorderScript_remove_onMiss_m1811582704 (Il2CppObject * __this /* static, unused */, missAction_t616564522 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BorderScript::add_onFriendPassed(BorderScript/friendPassedAction)
extern "C"  void BorderScript_add_onFriendPassed_m1414448971 (Il2CppObject * __this /* static, unused */, friendPassedAction_t176239964 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BorderScript::remove_onFriendPassed(BorderScript/friendPassedAction)
extern "C"  void BorderScript_remove_onFriendPassed_m3569957772 (Il2CppObject * __this /* static, unused */, friendPassedAction_t176239964 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BorderScript::Start()
extern "C"  void BorderScript_Start_m1256891716 (BorderScript_t1544401975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BorderScript::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void BorderScript_OnTriggerEnter_m3512268212 (BorderScript_t1544401975 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
