#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_MonsterBase.BP_MonsterBase_C
// 0x0070 (0x0A60 - 0x09F0)
class ABP_MonsterBase_C : public APalMonsterCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x09F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAbilitySkillParameterComponent*     PalAbilitySkillParameter;                          // 0x09F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMotionWarpingComponent*                MotionWarping;                                     // 0x0A00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalCryComponent_C*                  BP_PalCryComponent;                                // 0x0A08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*     PalPartnerSkillParameter;                          // 0x0A10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalNavigationInvokerComponent*         PalNavigationInvoker;                              // 0x0A18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0A20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    PalFacial;                                         // 0x0A28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ECollisionChannel                             CapsuleCollisionChannel;                           // 0x0A30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A31[0x3];                                      // 0x0A31(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CollisionProfileNameCache;                         // 0x0A34(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A3C[0x4];                                      // 0x0A3C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      FlyEffect;                                         // 0x0A40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        EffectiveAttackLogTimer;                           // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnInflictDamageEvent;                              // 0x0A50(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AddEffectivceAttackLog(const struct FPalDeadInfo& Info);
	void AddTargetDefeatLog(const struct FPalDeadInfo& Info);
	void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
	void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_1_OnLandedDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component, const struct FHitResult& Hit);
	void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnFlyDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
	void Event_DeadGiftExp(const struct FPalDeadInfo& DeadInfo);
	void ExecuteUbergraph_BP_MonsterBase(int32 EntryPoint);
	void GetFlyEffectAttachOffset(struct FTransform* EffectTransform);
	void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent);
	void OnBlendOut_098E824D485481E7313DA1A9DC5E74B5(class FName NotifyName);
	void OnCompleted_098E824D485481E7313DA1A9DC5E74B5(class FName NotifyName);
	void OnDefeatCharacter(const struct FPalDeadInfo& DeadInfo);
	void OnInflictDamage(const struct FPalDamageResult& DamageResult);
	void OnInflictDamageEvent__DelegateSignature(const struct FPalDamageResult& DamageResult);
	void OnInitialized(class APalCharacter* InCharacter);
	void OnInterrupted_098E824D485481E7313DA1A9DC5E74B5(class FName NotifyName);
	void OnLanded_Proc(class UPalCharacterMovementComponent* Component, const struct FHitResult& Hit);
	void OnLoaded_4AE31D724846BFB2E85A948698F32C16(class UObject* Loaded);
	void OnNotifyBegin_098E824D485481E7313DA1A9DC5E74B5(class FName NotifyName);
	void OnNotifyEnd_098E824D485481E7313DA1A9DC5E74B5(class FName NotifyName);
	void OnUpdateLevelDelegate______________0(int32 AddLevel, int32 NowLevel);
	void PlayJumpSound();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetUpDelegate();
	void UpdateFlyEffect(double DeltaTime);

	void GetEffectScale(double* Scale) const;
	void GetJumpEffectSpawnLocation(struct FVector* Location) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonsterBase_C">();
	}
	static class ABP_MonsterBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonsterBase_C>();
	}
};
static_assert(alignof(ABP_MonsterBase_C) == 0x000010, "Wrong alignment on ABP_MonsterBase_C");
static_assert(sizeof(ABP_MonsterBase_C) == 0x000A60, "Wrong size on ABP_MonsterBase_C");
static_assert(offsetof(ABP_MonsterBase_C, UberGraphFrame) == 0x0009F0, "Member 'ABP_MonsterBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, PalAbilitySkillParameter) == 0x0009F8, "Member 'ABP_MonsterBase_C::PalAbilitySkillParameter' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, MotionWarping) == 0x000A00, "Member 'ABP_MonsterBase_C::MotionWarping' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, BP_PalCryComponent) == 0x000A08, "Member 'ABP_MonsterBase_C::BP_PalCryComponent' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, PalPartnerSkillParameter) == 0x000A10, "Member 'ABP_MonsterBase_C::PalPartnerSkillParameter' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, PalNavigationInvoker) == 0x000A18, "Member 'ABP_MonsterBase_C::PalNavigationInvoker' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, BP_InteractableSphere) == 0x000A20, "Member 'ABP_MonsterBase_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, PalFacial) == 0x000A28, "Member 'ABP_MonsterBase_C::PalFacial' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, CapsuleCollisionChannel) == 0x000A30, "Member 'ABP_MonsterBase_C::CapsuleCollisionChannel' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, CollisionProfileNameCache) == 0x000A34, "Member 'ABP_MonsterBase_C::CollisionProfileNameCache' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, FlyEffect) == 0x000A40, "Member 'ABP_MonsterBase_C::FlyEffect' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, EffectiveAttackLogTimer) == 0x000A48, "Member 'ABP_MonsterBase_C::EffectiveAttackLogTimer' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase_C, OnInflictDamageEvent) == 0x000A50, "Member 'ABP_MonsterBase_C::OnInflictDamageEvent' has a wrong offset!");

}

