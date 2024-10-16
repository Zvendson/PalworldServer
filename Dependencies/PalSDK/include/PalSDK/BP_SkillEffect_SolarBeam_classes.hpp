#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_SolarBeam.BP_SkillEffect_SolarBeam_C
// 0x0030 (0x03F0 - 0x03C0)
class ABP_SkillEffect_SolarBeam_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_SolarBeam_C;         // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        StartCollisionTime;                                // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndCollisionTime;                                  // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EnableCollision();
	void EndCollision();
	void ExecuteUbergraph_BP_SkillEffect_SolarBeam(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_SolarBeam_C">();
	}
	static class ABP_SkillEffect_SolarBeam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_SolarBeam_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_SolarBeam_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_SolarBeam_C");
static_assert(sizeof(ABP_SkillEffect_SolarBeam_C) == 0x0003F0, "Wrong size on ABP_SkillEffect_SolarBeam_C");
static_assert(offsetof(ABP_SkillEffect_SolarBeam_C, UberGraphFrame_BP_SkillEffect_SolarBeam_C) == 0x0003C0, "Member 'ABP_SkillEffect_SolarBeam_C::UberGraphFrame_BP_SkillEffect_SolarBeam_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SolarBeam_C, Niagara) == 0x0003C8, "Member 'ABP_SkillEffect_SolarBeam_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SolarBeam_C, Capsule) == 0x0003D0, "Member 'ABP_SkillEffect_SolarBeam_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SolarBeam_C, Sphere) == 0x0003D8, "Member 'ABP_SkillEffect_SolarBeam_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SolarBeam_C, StartCollisionTime) == 0x0003E0, "Member 'ABP_SkillEffect_SolarBeam_C::StartCollisionTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SolarBeam_C, EndCollisionTime) == 0x0003E8, "Member 'ABP_SkillEffect_SolarBeam_C::EndCollisionTime' has a wrong offset!");

}

