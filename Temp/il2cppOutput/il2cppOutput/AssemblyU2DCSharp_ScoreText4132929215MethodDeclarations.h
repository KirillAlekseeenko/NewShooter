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

// ScoreText
struct ScoreText_t4132929215;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"

// System.Void ScoreText::.ctor()
extern "C"  void ScoreText__ctor_m555531660 (ScoreText_t4132929215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreText::updateLabel(System.Int32,System.Int32)
extern "C"  void ScoreText_updateLabel_m1136321489 (ScoreText_t4132929215 * __this, int32_t ___newScore0, int32_t ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreText::updateLabel(System.Int32)
extern "C"  void ScoreText_updateLabel_m2368629446 (ScoreText_t4132929215 * __this, int32_t ___newScore0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScoreText::LabelStretchAndShrink(System.Single,System.Single,System.Int32,System.Int32)
extern "C"  Il2CppObject * ScoreText_LabelStretchAndShrink_m3578685391 (ScoreText_t4132929215 * __this, float ___time0, float ___stretchDegree1, int32_t ___steps2, int32_t ___color3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
