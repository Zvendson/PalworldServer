#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C
// 0x0050 (0x0410 - 0x03C0)
class ABP_SkillEffect_Unique_ThunderSword_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_Unique_ThunderSword_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 ThunderTrident;                                    // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NiagaraEffect;                                     // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         WaveCount;                                         // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC[0x4];                                      // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        WaveLifeSpan;                                      // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BlastLifeSpan;                                     // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WaveFadeOut;                                       // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BlastFadeOut;                                      // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void Launch(const struct FVector& TargetLocation);
	void LaunchByVector(const struct FVector& Velocity);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_Unique_ThunderSword_C">();
	}
	static class ABP_SkillEffect_Unique_ThunderSword_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_Unique_ThunderSword_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_Unique_ThunderSword_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_Unique_ThunderSword_C");
static_assert(sizeof(ABP_SkillEffect_Unique_ThunderSword_C) == 0x000410, "Wrong size on ABP_SkillEffect_Unique_ThunderSword_C");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_C, UberGraphFrame_BP_SkillEffect_Unique_ThunderSword_C) == 0x0003C0, "Member 'ABP_SkillEffect_Unique_ThunderSword_C::UberGraphFrame_BP_SkillEffect_Unique_ThunderSword_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_C, ThunderTrident) == 0x0003C8, "Member 'ABP_SkillEffect_Unique_ThunderSword_C::ThunderTrident' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_C, NiagaraEffect) == 0x0003D0, "Member 'ABP_SkillEffect_Unique_ThunderSword_C::NiagaraEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_C, Capsule) == 0x0003D8, "Member 'ABP_SkillEffect_Unique_ThunderSword_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_C, ProjectileMovement) == 0x0003E0, "Member 'ABP_SkillEffect_Unique_ThunderSword_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_C, WaveCount) == 0x0003E8, "Member 'ABP_SkillEffect_Unique_ThunderSword_C::WaveCount' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_C, WaveLifeSpan) == 0x0003F0, "Member 'ABP_SkillEffect_Unique_ThunderSword_C::WaveLifeSpan' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_C, BlastLifeSpan) == 0x0003F8, "Member 'ABP_SkillEffect_Unique_ThunderSword_C::BlastLifeSpan' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_C, WaveFadeOut) == 0x000400, "Member 'ABP_SkillEffect_Unique_ThunderSword_C::WaveFadeOut' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_C, BlastFadeOut) == 0x000408, "Member 'ABP_SkillEffect_Unique_ThunderSword_C::BlastFadeOut' has a wrong offset!");

}

