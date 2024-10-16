#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EAction_Anubis_Tackle_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C
// 0x0110 (0x0260 - 0x0150)
class UBP_Action_Unique_Anubis_Tackle_C final : public UPalActionWazaBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsMoveMode;                                        // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MaxSpeed;                                          // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                PrevDirection;                                     // 0x0168(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RotaterPerSec;                                     // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StopRrange;                                        // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAction_Anubis_Tackle                         State;                                             // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StopRate;                                          // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      LoopingEffect;                                     // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UNiagaraComponent>> SpawnedEffects;                                    // 0x01A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UNiagaraComponent*                      OmenEffect;                                        // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      OmenEffectSide;                                    // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        OmenScaleY;                                        // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OmenScaleZ;                                        // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OmenSideScaleY;                                    // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OmenSideScaleZ;                                    // 0x01E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MoveSpeed;                                         // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ToTargetVector;                                    // 0x01F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentVector;                                     // 0x0208(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentPredictTargetRate;                          // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        PredictTargetRate;                                 // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x0230(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        TackleTimer;                                       // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxTackleDuration;                                 // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StopRateFactor;                                    // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BreakingFrictionFactorCache;                       // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChargeAndRotate(double DeltaTime);
	void CheckEndTackle(double DeltaTime, bool* IsEnd);
	void ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle(int32 EntryPoint);
	void GetDesiredTransformOfOmenEffect(double ScaleY, double ScaleZ, struct FTransform* Transform);
	void OnBeginAction();
	void OnEndAction();
	void OnMontageNotifyBeginDelegate______________0(class UAnimMontage* Montage, class FName NotifyName);
	void PlayEndMontage();
	void SetHiddenAllNiagara();
	void StopAllMontage();
	void StopMovement(double DeltaTime);
	void TackleMotament(double DeltaTime);
	void TackleMovement(double DeltaTime);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Unique_Anubis_Tackle_C">();
	}
	static class UBP_Action_Unique_Anubis_Tackle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Unique_Anubis_Tackle_C>();
	}
};
static_assert(alignof(UBP_Action_Unique_Anubis_Tackle_C) == 0x000010, "Wrong alignment on UBP_Action_Unique_Anubis_Tackle_C");
static_assert(sizeof(UBP_Action_Unique_Anubis_Tackle_C) == 0x000260, "Wrong size on UBP_Action_Unique_Anubis_Tackle_C");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, UberGraphFrame) == 0x000150, "Member 'UBP_Action_Unique_Anubis_Tackle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, IsMoveMode) == 0x000158, "Member 'UBP_Action_Unique_Anubis_Tackle_C::IsMoveMode' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, MaxSpeed) == 0x000160, "Member 'UBP_Action_Unique_Anubis_Tackle_C::MaxSpeed' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, PrevDirection) == 0x000168, "Member 'UBP_Action_Unique_Anubis_Tackle_C::PrevDirection' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, RotaterPerSec) == 0x000180, "Member 'UBP_Action_Unique_Anubis_Tackle_C::RotaterPerSec' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, StopRrange) == 0x000188, "Member 'UBP_Action_Unique_Anubis_Tackle_C::StopRrange' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, State) == 0x000190, "Member 'UBP_Action_Unique_Anubis_Tackle_C::State' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, StopRate) == 0x000198, "Member 'UBP_Action_Unique_Anubis_Tackle_C::StopRate' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, LoopingEffect) == 0x0001A0, "Member 'UBP_Action_Unique_Anubis_Tackle_C::LoopingEffect' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, SpawnedEffects) == 0x0001A8, "Member 'UBP_Action_Unique_Anubis_Tackle_C::SpawnedEffects' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, OmenEffect) == 0x0001B8, "Member 'UBP_Action_Unique_Anubis_Tackle_C::OmenEffect' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, OmenEffectSide) == 0x0001C0, "Member 'UBP_Action_Unique_Anubis_Tackle_C::OmenEffectSide' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, OmenScaleY) == 0x0001C8, "Member 'UBP_Action_Unique_Anubis_Tackle_C::OmenScaleY' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, OmenScaleZ) == 0x0001D0, "Member 'UBP_Action_Unique_Anubis_Tackle_C::OmenScaleZ' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, OmenSideScaleY) == 0x0001D8, "Member 'UBP_Action_Unique_Anubis_Tackle_C::OmenSideScaleY' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, OmenSideScaleZ) == 0x0001E0, "Member 'UBP_Action_Unique_Anubis_Tackle_C::OmenSideScaleZ' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, MoveSpeed) == 0x0001E8, "Member 'UBP_Action_Unique_Anubis_Tackle_C::MoveSpeed' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, ToTargetVector) == 0x0001F0, "Member 'UBP_Action_Unique_Anubis_Tackle_C::ToTargetVector' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, CurrentVector) == 0x000208, "Member 'UBP_Action_Unique_Anubis_Tackle_C::CurrentVector' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, CurrentPredictTargetRate) == 0x000220, "Member 'UBP_Action_Unique_Anubis_Tackle_C::CurrentPredictTargetRate' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, PredictTargetRate) == 0x000228, "Member 'UBP_Action_Unique_Anubis_Tackle_C::PredictTargetRate' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, TimerHandle) == 0x000230, "Member 'UBP_Action_Unique_Anubis_Tackle_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, TackleTimer) == 0x000238, "Member 'UBP_Action_Unique_Anubis_Tackle_C::TackleTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, MaxTackleDuration) == 0x000240, "Member 'UBP_Action_Unique_Anubis_Tackle_C::MaxTackleDuration' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, StopRateFactor) == 0x000248, "Member 'UBP_Action_Unique_Anubis_Tackle_C::StopRateFactor' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_Tackle_C, BreakingFrictionFactorCache) == 0x000250, "Member 'UBP_Action_Unique_Anubis_Tackle_C::BreakingFrictionFactorCache' has a wrong offset!");

}

