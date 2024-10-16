#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"
#include "AkAudio_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_BreathBase.BP_SkillEffect_BreathBase_C
// 0x0060 (0x0420 - 0x03C0)
class ABP_SkillEffect_BreathBase_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_BreathBase_C;        // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        StartCollisionTime;                                // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndCollisionTime;                                  // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           EnableCollisionTimer;                              // 0x03E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           EndCollisionTimer;                                 // 0x03E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ShotSpan;                                          // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TempTime;                                          // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Funnel;                                            // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Sound_Cast;                                        // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SoundLoop;                                         // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SoundEnd;                                          // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void EndCollision();
	void ExecuteUbergraph_BP_SkillEffect_BreathBase(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_BreathBase_C">();
	}
	static class ABP_SkillEffect_BreathBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_BreathBase_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_BreathBase_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_BreathBase_C");
static_assert(sizeof(ABP_SkillEffect_BreathBase_C) == 0x000420, "Wrong size on ABP_SkillEffect_BreathBase_C");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, UberGraphFrame_BP_SkillEffect_BreathBase_C) == 0x0003C0, "Member 'ABP_SkillEffect_BreathBase_C::UberGraphFrame_BP_SkillEffect_BreathBase_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, Niagara) == 0x0003C8, "Member 'ABP_SkillEffect_BreathBase_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, StartCollisionTime) == 0x0003D0, "Member 'ABP_SkillEffect_BreathBase_C::StartCollisionTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, EndCollisionTime) == 0x0003D8, "Member 'ABP_SkillEffect_BreathBase_C::EndCollisionTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, EnableCollisionTimer) == 0x0003E0, "Member 'ABP_SkillEffect_BreathBase_C::EnableCollisionTimer' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, EndCollisionTimer) == 0x0003E8, "Member 'ABP_SkillEffect_BreathBase_C::EndCollisionTimer' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, ShotSpan) == 0x0003F0, "Member 'ABP_SkillEffect_BreathBase_C::ShotSpan' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, TempTime) == 0x0003F8, "Member 'ABP_SkillEffect_BreathBase_C::TempTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, Funnel) == 0x000400, "Member 'ABP_SkillEffect_BreathBase_C::Funnel' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, Sound_Cast) == 0x000408, "Member 'ABP_SkillEffect_BreathBase_C::Sound_Cast' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, SoundLoop) == 0x000410, "Member 'ABP_SkillEffect_BreathBase_C::SoundLoop' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBase_C, SoundEnd) == 0x000418, "Member 'ABP_SkillEffect_BreathBase_C::SoundEnd' has a wrong offset!");

}

