#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_HydroPump.BP_SkillEffect_HydroPump_C
// 0x0040 (0x0400 - 0x03C0)
class ABP_SkillEffect_HydroPump_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_HydroPump_C;         // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        StartCollisionTime;                                // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndCollisionTime;                                  // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BeamLength;                                        // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BeamRadius;                                        // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
	void EnableCollision();
	void EndCollision();
	void ExecuteUbergraph_BP_SkillEffect_HydroPump(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_HydroPump_C">();
	}
	static class ABP_SkillEffect_HydroPump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_HydroPump_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_HydroPump_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_HydroPump_C");
static_assert(sizeof(ABP_SkillEffect_HydroPump_C) == 0x000400, "Wrong size on ABP_SkillEffect_HydroPump_C");
static_assert(offsetof(ABP_SkillEffect_HydroPump_C, UberGraphFrame_BP_SkillEffect_HydroPump_C) == 0x0003C0, "Member 'ABP_SkillEffect_HydroPump_C::UberGraphFrame_BP_SkillEffect_HydroPump_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_HydroPump_C, Niagara) == 0x0003C8, "Member 'ABP_SkillEffect_HydroPump_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_HydroPump_C, Capsule) == 0x0003D0, "Member 'ABP_SkillEffect_HydroPump_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_HydroPump_C, Sphere) == 0x0003D8, "Member 'ABP_SkillEffect_HydroPump_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_HydroPump_C, StartCollisionTime) == 0x0003E0, "Member 'ABP_SkillEffect_HydroPump_C::StartCollisionTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_HydroPump_C, EndCollisionTime) == 0x0003E8, "Member 'ABP_SkillEffect_HydroPump_C::EndCollisionTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_HydroPump_C, BeamLength) == 0x0003F0, "Member 'ABP_SkillEffect_HydroPump_C::BeamLength' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_HydroPump_C, BeamRadius) == 0x0003F8, "Member 'ABP_SkillEffect_HydroPump_C::BeamRadius' has a wrong offset!");

}

