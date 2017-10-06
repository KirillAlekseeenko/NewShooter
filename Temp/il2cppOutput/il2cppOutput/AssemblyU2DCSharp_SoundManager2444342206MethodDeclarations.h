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

// SoundManager
struct SoundManager_t2444342206;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t2162326540;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"

// System.Void SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m4124152989 (SoundManager_t2444342206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::.cctor()
extern "C"  void SoundManager__cctor_m2812594864 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::Awake()
extern "C"  void SoundManager_Awake_m66790912 (SoundManager_t2444342206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlayMusic(UnityEngine.AudioClip)
extern "C"  void SoundManager_PlayMusic_m2854864215 (SoundManager_t2444342206 * __this, AudioClip_t794140988 * ___musicClip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlayEffect(UnityEngine.AudioClip)
extern "C"  void SoundManager_PlayEffect_m2013669367 (SoundManager_t2444342206 * __this, AudioClip_t794140988 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlayRandomEffect(System.Collections.Generic.List`1<UnityEngine.AudioClip>)
extern "C"  void SoundManager_PlayRandomEffect_m733544002 (SoundManager_t2444342206 * __this, List_1_t2162326540 * ___clips0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
