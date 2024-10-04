#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_TreasureBoxVisual_Base.BP_TreasureBoxVisual_Base_C
// 0x0068 (0x0300 - 0x0298)
class ABP_TreasureBoxVisual_Base_C : public APalTreasureBoxVisualBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Glow;                                              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         Niagara;                                           // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationOffset;                                    // 0x02B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_Event;                                          // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinishOpenInServer;                              // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAnimMontage*                           OpenAnimMontage;                                   // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnNotifiedStartOpenInAnimation;                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           AnimationWaitTimer;                                // 0x02F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TreasureBoxVisual_Base(int32 EntryPoint);
	void OnFinishOpenAnimation();
	void OnFinishOpenInServer__DelegateSignature();
	void OnNotifiedStartOpenInAnimation__DelegateSignature();
	void OnPassedOpenAnimationLength();
	void OnPlayMontageNotifyBegin_BP(class FName NotifyName);
	void PlayEffectAndSound();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SetNoCollisionAllMesh();
	void StartOpenAnimation();
	void TriggerOpenAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TreasureBoxVisual_Base_C">();
	}
	static class ABP_TreasureBoxVisual_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TreasureBoxVisual_Base_C>();
	}
};
static_assert(alignof(ABP_TreasureBoxVisual_Base_C) == 0x000008, "Wrong alignment on ABP_TreasureBoxVisual_Base_C");
static_assert(sizeof(ABP_TreasureBoxVisual_Base_C) == 0x000300, "Wrong size on ABP_TreasureBoxVisual_Base_C");
static_assert(offsetof(ABP_TreasureBoxVisual_Base_C, UberGraphFrame) == 0x000298, "Member 'ABP_TreasureBoxVisual_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxVisual_Base_C, Glow) == 0x0002A0, "Member 'ABP_TreasureBoxVisual_Base_C::Glow' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxVisual_Base_C, Niagara) == 0x0002A8, "Member 'ABP_TreasureBoxVisual_Base_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxVisual_Base_C, LocationOffset) == 0x0002B0, "Member 'ABP_TreasureBoxVisual_Base_C::LocationOffset' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxVisual_Base_C, Ak_Event) == 0x0002C8, "Member 'ABP_TreasureBoxVisual_Base_C::Ak_Event' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxVisual_Base_C, OnFinishOpenInServer) == 0x0002D0, "Member 'ABP_TreasureBoxVisual_Base_C::OnFinishOpenInServer' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxVisual_Base_C, OpenAnimMontage) == 0x0002E0, "Member 'ABP_TreasureBoxVisual_Base_C::OpenAnimMontage' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxVisual_Base_C, OnNotifiedStartOpenInAnimation) == 0x0002E8, "Member 'ABP_TreasureBoxVisual_Base_C::OnNotifiedStartOpenInAnimation' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxVisual_Base_C, AnimationWaitTimer) == 0x0002F8, "Member 'ABP_TreasureBoxVisual_Base_C::AnimationWaitTimer' has a wrong offset!");

}

