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

// MainScript
struct MainScript_t2442702852;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Action`1<System.String>
struct Action_1_t403047693;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_EnemyScript_EnemyManeuver56795301.h"
#include "mscorlib_System_String7231557.h"

// System.Void MainScript::.ctor()
extern "C"  void MainScript__ctor_m2753473815 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::Start()
extern "C"  void MainScript_Start_m1700611607 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::unsubscribeFromEvents()
extern "C"  void MainScript_unsubscribeFromEvents_m3658371177 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::Update()
extern "C"  void MainScript_Update_m1185204438 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::SpawnEnemy(EnemyScript/EnemyManeuver)
extern "C"  void MainScript_SpawnEnemy_m1973293971 (MainScript_t2442702852 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::updateRemainLabel()
extern "C"  void MainScript_updateRemainLabel_m2390194164 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::reduceScore()
extern "C"  void MainScript_reduceScore_m799207713 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::addScore()
extern "C"  void MainScript_addScore_m2951207262 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::friendPassed()
extern "C"  void MainScript_friendPassed_m1937763931 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::nothingIsRemaining()
extern "C"  void MainScript_nothingIsRemaining_m3559561804 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::TryAgainButtonClick()
extern "C"  void MainScript_TryAgainButtonClick_m2291522758 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::NextButtonClick()
extern "C"  void MainScript_NextButtonClick_m2553168120 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::PauseButtonClick()
extern "C"  void MainScript_PauseButtonClick_m1938174189 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::pause()
extern "C"  void MainScript_pause_m1142946507 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MainScript::unpause()
extern "C"  Il2CppObject * MainScript_unpause_m2592782282 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::finish()
extern "C"  void MainScript_finish_m3419270656 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::ResumeButtonClick()
extern "C"  void MainScript_ResumeButtonClick_m1502123262 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::OptionsButtonClick()
extern "C"  void MainScript_OptionsButtonClick_m4153327173 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MainScript::pauseToAudioTransition()
extern "C"  Il2CppObject * MainScript_pauseToAudioTransition_m1676722287 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MainScript::audioToPauseTransition()
extern "C"  Il2CppObject * MainScript_audioToPauseTransition_m2665289903 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::AudioPanelBackButtonClick()
extern "C"  void MainScript_AudioPanelBackButtonClick_m3129279574 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::onMusicSliderValueChanged()
extern "C"  void MainScript_onMusicSliderValueChanged_m1488931711 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::onEffectsSliderValueChanged()
extern "C"  void MainScript_onEffectsSliderValueChanged_m194841756 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::onAudioSliderValueChanged()
extern "C"  void MainScript_onAudioSliderValueChanged_m1690252976 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::onAudioToggleValueChanged()
extern "C"  void MainScript_onAudioToggleValueChanged_m3105010659 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScript::MainMenuButtonClick()
extern "C"  void MainScript_MainMenuButtonClick_m3305574227 (MainScript_t2442702852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MainScript::sceneFadeOut(System.Action`1<System.String>,System.String)
extern "C"  Il2CppObject * MainScript_sceneFadeOut_m4096440147 (MainScript_t2442702852 * __this, Action_1_t403047693 * ___f0, String_t* ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
