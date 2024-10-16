#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_SandTornadoBullet.BP_SkillEffect_SandTornadoBullet_C
// 0x0058 (0x0418 - 0x03C0)
class ABP_SkillEffect_SandTornadoBullet_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_SandTornadoBullet_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TargetLocation2D;                                  // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              NormalizedDirection2D;                             // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RotationDegree;                                    // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DotThreshold;                                      // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EffectDuration;                                    // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_SandTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void EndProcess();
	void ExecuteUbergraph_BP_SkillEffect_SandTornadoBullet(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();
	void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_SandTornadoBullet_C">();
	}
	static class ABP_SkillEffect_SandTornadoBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_SandTornadoBullet_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_SandTornadoBullet_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_SandTornadoBullet_C");
static_assert(sizeof(ABP_SkillEffect_SandTornadoBullet_C) == 0x000418, "Wrong size on ABP_SkillEffect_SandTornadoBullet_C");
static_assert(offsetof(ABP_SkillEffect_SandTornadoBullet_C, UberGraphFrame_BP_SkillEffect_SandTornadoBullet_C) == 0x0003C0, "Member 'ABP_SkillEffect_SandTornadoBullet_C::UberGraphFrame_BP_SkillEffect_SandTornadoBullet_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SandTornadoBullet_C, Niagara) == 0x0003C8, "Member 'ABP_SkillEffect_SandTornadoBullet_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SandTornadoBullet_C, Capsule) == 0x0003D0, "Member 'ABP_SkillEffect_SandTornadoBullet_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SandTornadoBullet_C, TargetLocation2D) == 0x0003D8, "Member 'ABP_SkillEffect_SandTornadoBullet_C::TargetLocation2D' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SandTornadoBullet_C, NormalizedDirection2D) == 0x0003E8, "Member 'ABP_SkillEffect_SandTornadoBullet_C::NormalizedDirection2D' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SandTornadoBullet_C, RotationDegree) == 0x0003F8, "Member 'ABP_SkillEffect_SandTornadoBullet_C::RotationDegree' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SandTornadoBullet_C, Speed) == 0x000400, "Member 'ABP_SkillEffect_SandTornadoBullet_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SandTornadoBullet_C, DotThreshold) == 0x000408, "Member 'ABP_SkillEffect_SandTornadoBullet_C::DotThreshold' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SandTornadoBullet_C, EffectDuration) == 0x000410, "Member 'ABP_SkillEffect_SandTornadoBullet_C::EffectDuration' has a wrong offset!");

}

