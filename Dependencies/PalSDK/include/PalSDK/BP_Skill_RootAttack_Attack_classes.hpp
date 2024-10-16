#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Skill_RootAttack_Attack.BP_Skill_RootAttack_Attack_C
// 0x0020 (0x03E0 - 0x03C0)
class ABP_Skill_RootAttack_Attack_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Skill_RootAttack_Attack_C;       // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      RootAttack_2;                                      // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        DestroyTime;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DisableCollision();
	void ExecuteUbergraph_BP_Skill_RootAttack_Attack(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Skill_RootAttack_Attack_C">();
	}
	static class ABP_Skill_RootAttack_Attack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Skill_RootAttack_Attack_C>();
	}
};
static_assert(alignof(ABP_Skill_RootAttack_Attack_C) == 0x000008, "Wrong alignment on ABP_Skill_RootAttack_Attack_C");
static_assert(sizeof(ABP_Skill_RootAttack_Attack_C) == 0x0003E0, "Wrong size on ABP_Skill_RootAttack_Attack_C");
static_assert(offsetof(ABP_Skill_RootAttack_Attack_C, UberGraphFrame_BP_Skill_RootAttack_Attack_C) == 0x0003C0, "Member 'ABP_Skill_RootAttack_Attack_C::UberGraphFrame_BP_Skill_RootAttack_Attack_C' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_Attack_C, Sphere) == 0x0003C8, "Member 'ABP_Skill_RootAttack_Attack_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_Attack_C, RootAttack_2) == 0x0003D0, "Member 'ABP_Skill_RootAttack_Attack_C::RootAttack_2' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_Attack_C, DestroyTime) == 0x0003D8, "Member 'ABP_Skill_RootAttack_Attack_C::DestroyTime' has a wrong offset!");

}

