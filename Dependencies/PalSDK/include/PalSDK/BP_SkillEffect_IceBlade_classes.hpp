#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_IceBlade.BP_SkillEffect_IceBlade_C
// 0x0048 (0x0408 - 0x03C0)
class ABP_SkillEffect_IceBlade_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_IceBlade_C;          // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_CommonSkill_IceBlade;                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class USphereComponent*>               Collisions;                                        // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        AlignRadius;                                       // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Width;                                             // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SphereSize;                                        // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EffectDuration;                                    // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_WindCutter_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void EffectTimeout();
	void ExecuteUbergraph_BP_SkillEffect_IceBlade(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void OnHitGround();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_IceBlade_C">();
	}
	static class ABP_SkillEffect_IceBlade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_IceBlade_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_IceBlade_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_IceBlade_C");
static_assert(sizeof(ABP_SkillEffect_IceBlade_C) == 0x000408, "Wrong size on ABP_SkillEffect_IceBlade_C");
static_assert(offsetof(ABP_SkillEffect_IceBlade_C, UberGraphFrame_BP_SkillEffect_IceBlade_C) == 0x0003C0, "Member 'ABP_SkillEffect_IceBlade_C::UberGraphFrame_BP_SkillEffect_IceBlade_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceBlade_C, NS_CommonSkill_IceBlade) == 0x0003C8, "Member 'ABP_SkillEffect_IceBlade_C::NS_CommonSkill_IceBlade' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceBlade_C, ProjectileMovement) == 0x0003D0, "Member 'ABP_SkillEffect_IceBlade_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceBlade_C, Collisions) == 0x0003D8, "Member 'ABP_SkillEffect_IceBlade_C::Collisions' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceBlade_C, AlignRadius) == 0x0003E8, "Member 'ABP_SkillEffect_IceBlade_C::AlignRadius' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceBlade_C, Width) == 0x0003F0, "Member 'ABP_SkillEffect_IceBlade_C::Width' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceBlade_C, SphereSize) == 0x0003F8, "Member 'ABP_SkillEffect_IceBlade_C::SphereSize' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceBlade_C, EffectDuration) == 0x000400, "Member 'ABP_SkillEffect_IceBlade_C::EffectDuration' has a wrong offset!");

}

