#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_BreathBulletBase.BP_SkillEffect_BreathBulletBase_C
// 0x0028 (0x03E8 - 0x03C0)
class ABP_SkillEffect_BreathBulletBase_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_BreathBulletBase_C;  // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Collision;                                         // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        RootScale;                                         // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UNiagaraSystem*                         Const_HitEffect;                                   // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_BreathBulletBase(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_BreathBulletBase_C">();
	}
	static class ABP_SkillEffect_BreathBulletBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_BreathBulletBase_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_BreathBulletBase_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_BreathBulletBase_C");
static_assert(sizeof(ABP_SkillEffect_BreathBulletBase_C) == 0x0003E8, "Wrong size on ABP_SkillEffect_BreathBulletBase_C");
static_assert(offsetof(ABP_SkillEffect_BreathBulletBase_C, UberGraphFrame_BP_SkillEffect_BreathBulletBase_C) == 0x0003C0, "Member 'ABP_SkillEffect_BreathBulletBase_C::UberGraphFrame_BP_SkillEffect_BreathBulletBase_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBulletBase_C, Collision) == 0x0003C8, "Member 'ABP_SkillEffect_BreathBulletBase_C::Collision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBulletBase_C, ProjectileMovement) == 0x0003D0, "Member 'ABP_SkillEffect_BreathBulletBase_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBulletBase_C, RootScale) == 0x0003D8, "Member 'ABP_SkillEffect_BreathBulletBase_C::RootScale' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BreathBulletBase_C, Const_HitEffect) == 0x0003E0, "Member 'ABP_SkillEffect_BreathBulletBase_C::Const_HitEffect' has a wrong offset!");

}

