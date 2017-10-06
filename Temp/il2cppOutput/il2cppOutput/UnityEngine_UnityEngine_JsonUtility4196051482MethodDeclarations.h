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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern "C"  String_t* JsonUtility_ToJson_m256852485 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
extern "C"  String_t* JsonUtility_ToJson_m2535335640 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, bool ___prettyPrint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
extern "C"  Il2CppObject * JsonUtility_FromJson_m3245538665 (Il2CppObject * __this /* static, unused */, String_t* ___json0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
