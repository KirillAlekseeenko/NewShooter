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

// BulletScript
struct BulletScript_t731982989;
// BulletScript/hitAction
struct hitAction_t1151084711;
// BulletScript/friendlyFireAction
struct friendlyFireAction_t763880409;
// UnityEngine.Collider
struct Collider_t2939674232;
// UnityEngine.Collision
struct Collision_t2494107688;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BulletScript_hitAction1151084711.h"
#include "AssemblyU2DCSharp_BulletScript_friendlyFireAction763880409.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Collision2494107688.h"

// System.Void BulletScript::.ctor()
extern "C"  void BulletScript__ctor_m220959918 (BulletScript_t731982989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::add_onHit(BulletScript/hitAction)
extern "C"  void BulletScript_add_onHit_m1446905467 (Il2CppObject * __this /* static, unused */, hitAction_t1151084711 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::remove_onHit(BulletScript/hitAction)
extern "C"  void BulletScript_remove_onHit_m1274792168 (Il2CppObject * __this /* static, unused */, hitAction_t1151084711 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::add_onFriendlyFire(BulletScript/friendlyFireAction)
extern "C"  void BulletScript_add_onFriendlyFire_m335860581 (Il2CppObject * __this /* static, unused */, friendlyFireAction_t763880409 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::remove_onFriendlyFire(BulletScript/friendlyFireAction)
extern "C"  void BulletScript_remove_onFriendlyFire_m2753672338 (Il2CppObject * __this /* static, unused */, friendlyFireAction_t763880409 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::Awake()
extern "C"  void BulletScript_Awake_m458565137 (BulletScript_t731982989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::Start()
extern "C"  void BulletScript_Start_m3463065006 (BulletScript_t731982989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void BulletScript_OnTriggerEnter_m1424326026 (BulletScript_t731982989 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::spawnExplosion(UnityEngine.Vector3)
extern "C"  void BulletScript_spawnExplosion_m1619423753 (BulletScript_t731982989 * __this, Vector3_t4282066566  ___explosionSite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::SpawnDestroyed(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void BulletScript_SpawnDestroyed_m1715796569 (BulletScript_t731982989 * __this, Vector3_t4282066566  ___explosionSite0, Vector3_t4282066566  ___spawnSite1, Quaternion_t1553702882  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void BulletScript_OnCollisionEnter_m2791710332 (BulletScript_t731982989 * __this, Collision_t2494107688 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::OnCollisionExit(UnityEngine.Collision)
extern "C"  void BulletScript_OnCollisionExit_m334973114 (BulletScript_t731982989 * __this, Collision_t2494107688 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
