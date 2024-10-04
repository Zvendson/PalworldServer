#pragma once

#include "Basic.hpp"

#include "EPalCaptureSphereState_structs.hpp"
#include "E_PalCaptureSphereBouncedReason_structs.hpp"
#include "BP_PalCaptureBodyBase_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalSphere_Body.BP_PalSphere_Body_C
// 0x0148 (0x0468 - 0x0320)
class ABP_PalSphere_Body_C : public ABP_PalCaptureBodyBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PalSphere_Body_C;                // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitedBallGoalLocation;                             // 0x0330(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HitedBallMoveTime;                                 // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HitedBallMoveTimer;                                // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CureEffect;                                        // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalCaptureSphereState                        PalSphereState;                                    // 0x0360(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  JudgedFlagArray;                                   // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        JudgeInterval;                                     // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        JudgeTimer;                                        // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowJudgePhaseCount;                                // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveVector*                           BallShakeCurve;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        BallShakeTime;                                     // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BallShakeTimer;                                    // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BouncePower;                                       // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShakePower;                                        // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AfterShakePassingPhaseEventDelay;                  // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AfterHitedBallPassingPhaseDelay;                   // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FlyToSkyDelay;                                     // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         PassingPhaseEffect;                                // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<double>                                RateArray;                                         // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UNiagaraSystem*                         AbsorbToBallEffect;                                // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         AbsorbToBallCenterEffect;                          // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         OpenSphereEffect;                                  // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_SoundID           SoundId_Shake;                                     // 0x0400(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          OpenSphereAnim;                                    // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<E_PalCaptureSphereBouncedReason, class UNiagaraSystem*> BounceEffectMap;                                   // 0x0410(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPalCaptureBallEffectSettingDataAsset*  EffectSettingDataAsset;                            // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BallShakeTick(double DeltaTime);
	void BounceBallEvent();
	void CaptureSuccessEvent();
	void CheckBouncedReason(E_PalCaptureSphereBouncedReason* ReasonType);
	void DelayPassingPhase(int32 Phase, double DelayTime);
	void DelayPassingPhase_WithEffect(int32 Phase, double DelayTime);
	void ExecuteUbergraph_BP_PalSphere_Body(int32 EntryPoint);
	void FailedCapture_OutOfBall();
	void FindOwnerPlayer(class APalPlayerCharacter** Player);
	void FlyToSkyEvent(double Delay);
	void IntoBall(const struct FVector& GoolLocation);
	void IsSkipFirstJudge(class UPalCharacterParameterComponent* Parameter, TArray<double>& RateList, bool* IsSkip);
	void JudgeProcess(int32 JudgeIndex, bool* Result);
	void Judging(double DeltaTime);
	void OnCompleteCaptureEmissiveEffect(class UPalVisualEffectBase* VisualEffect);
	void OnPassingCapturePhase______________0(int32 PhaseCount, class UPalIndividualCharacterHandle* TargetHandle_0);
	void OnShakeBodyToALL();
	void PlayBallCenterEffect();
	void PlayCaptureAbsorbToBallEffect();
	void PlayCaptureEffectEvent();
	void PlayOpenSphereEffect();
	void PlaySoundShake();
	void PrevIndexFullPercentage(int32 Index_0, bool* IsFull);
	void SetCaptureState(EPalCaptureSphereState NewState);
	void SetParameterCaptureAbsorbToBallEffectBySize(class UNiagaraComponent* Effect);
	void StopTargetPal();
	void SynchronizeJudgeParameter(const TArray<bool>& JudgeFlagArray, const TArray<double>& JudgeRateArray);
	void TickMovement_HitedBall(double DeltaTime);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetupInServer(class APalCharacter* TargetCharacter);
	void TickMovement_MoveToSky(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSphere_Body_C">();
	}
	static class ABP_PalSphere_Body_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalSphere_Body_C>();
	}
};
static_assert(alignof(ABP_PalSphere_Body_C) == 0x000008, "Wrong alignment on ABP_PalSphere_Body_C");
static_assert(sizeof(ABP_PalSphere_Body_C) == 0x000468, "Wrong size on ABP_PalSphere_Body_C");
static_assert(offsetof(ABP_PalSphere_Body_C, UberGraphFrame_BP_PalSphere_Body_C) == 0x000320, "Member 'ABP_PalSphere_Body_C::UberGraphFrame_BP_PalSphere_Body_C' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, SkeletalMesh) == 0x000328, "Member 'ABP_PalSphere_Body_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, HitedBallGoalLocation) == 0x000330, "Member 'ABP_PalSphere_Body_C::HitedBallGoalLocation' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, HitedBallMoveTime) == 0x000348, "Member 'ABP_PalSphere_Body_C::HitedBallMoveTime' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, HitedBallMoveTimer) == 0x000350, "Member 'ABP_PalSphere_Body_C::HitedBallMoveTimer' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, CureEffect) == 0x000358, "Member 'ABP_PalSphere_Body_C::CureEffect' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, PalSphereState) == 0x000360, "Member 'ABP_PalSphere_Body_C::PalSphereState' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, JudgedFlagArray) == 0x000368, "Member 'ABP_PalSphere_Body_C::JudgedFlagArray' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, JudgeInterval) == 0x000378, "Member 'ABP_PalSphere_Body_C::JudgeInterval' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, JudgeTimer) == 0x000380, "Member 'ABP_PalSphere_Body_C::JudgeTimer' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, NowJudgePhaseCount) == 0x000388, "Member 'ABP_PalSphere_Body_C::NowJudgePhaseCount' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, BallShakeCurve) == 0x000390, "Member 'ABP_PalSphere_Body_C::BallShakeCurve' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, BallShakeTime) == 0x000398, "Member 'ABP_PalSphere_Body_C::BallShakeTime' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, BallShakeTimer) == 0x0003A0, "Member 'ABP_PalSphere_Body_C::BallShakeTimer' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, BouncePower) == 0x0003A8, "Member 'ABP_PalSphere_Body_C::BouncePower' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, ShakePower) == 0x0003B0, "Member 'ABP_PalSphere_Body_C::ShakePower' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, AfterShakePassingPhaseEventDelay) == 0x0003B8, "Member 'ABP_PalSphere_Body_C::AfterShakePassingPhaseEventDelay' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, AfterHitedBallPassingPhaseDelay) == 0x0003C0, "Member 'ABP_PalSphere_Body_C::AfterHitedBallPassingPhaseDelay' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, FlyToSkyDelay) == 0x0003C8, "Member 'ABP_PalSphere_Body_C::FlyToSkyDelay' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, PassingPhaseEffect) == 0x0003D0, "Member 'ABP_PalSphere_Body_C::PassingPhaseEffect' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, RateArray) == 0x0003D8, "Member 'ABP_PalSphere_Body_C::RateArray' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, AbsorbToBallEffect) == 0x0003E8, "Member 'ABP_PalSphere_Body_C::AbsorbToBallEffect' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, AbsorbToBallCenterEffect) == 0x0003F0, "Member 'ABP_PalSphere_Body_C::AbsorbToBallCenterEffect' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, OpenSphereEffect) == 0x0003F8, "Member 'ABP_PalSphere_Body_C::OpenSphereEffect' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, SoundId_Shake) == 0x000400, "Member 'ABP_PalSphere_Body_C::SoundId_Shake' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, OpenSphereAnim) == 0x000408, "Member 'ABP_PalSphere_Body_C::OpenSphereAnim' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, BounceEffectMap) == 0x000410, "Member 'ABP_PalSphere_Body_C::BounceEffectMap' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_Body_C, EffectSettingDataAsset) == 0x000460, "Member 'ABP_PalSphere_Body_C::EffectSettingDataAsset' has a wrong offset!");

}

