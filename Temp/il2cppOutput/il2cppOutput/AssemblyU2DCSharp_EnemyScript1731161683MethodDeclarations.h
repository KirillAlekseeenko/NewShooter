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

// EnemyScript
struct EnemyScript_t1731161683;
// UnityEngine.Collider
struct Collider_t2939674232;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "AssemblyU2DCSharp_EnemyScript_EnemyManeuver56795301.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void EnemyScript::.ctor()
extern "C"  void EnemyScript__ctor_m1397193336 (EnemyScript_t1731161683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyScript::Start()
extern "C"  void EnemyScript_Start_m344331128 (EnemyScript_t1731161683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyScript::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void EnemyScript_OnTriggerEnter_m3866043392 (EnemyScript_t1731161683 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyScript::Update()
extern "C"  void EnemyScript_Update_m2090182549 (EnemyScript_t1731161683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyScript::setType(EnemyScript/EnemyManeuver)
extern "C"  void EnemyScript_setType_m173322811 (EnemyScript_t1731161683 * __this, int32_t ____type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyScript::changeDirection()
extern "C"  void EnemyScript_changeDirection_m1006678885 (EnemyScript_t1731161683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EnemyScript::flipCoin()
extern "C"  bool EnemyScript_flipCoin_m3836020246 (EnemyScript_t1731161683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyScript::dodgeBullet(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void EnemyScript_dodgeBullet_m1329095325 (EnemyScript_t1731161683 * __this, Vector3_t4282066566  ___trajectory0, Vector3_t4282066566  ___originToPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EnemyScript::correctCourse(UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * EnemyScript_correctCourse_m2032412283 (EnemyScript_t1731161683 * __this, Vector3_t4282066566  ___newCourse0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
