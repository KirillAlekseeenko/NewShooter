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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
extern "C"  void WebRequestUtils__cctor_m324497511 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
extern "C"  String_t* WebRequestUtils_RedirectTo_m914411020 (Il2CppObject * __this /* static, unused */, String_t* ___baseUri0, String_t* ___redirectUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
extern "C"  String_t* WebRequestUtils_MakeInitialUrl_m3785007530 (Il2CppObject * __this /* static, unused */, String_t* ___targetUrl0, String_t* ___localUrl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
