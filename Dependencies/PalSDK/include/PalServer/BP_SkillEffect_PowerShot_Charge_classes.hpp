#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C
// 0x0020 (0x03E0 - 0x03C0)
class ABP_SkillEffect_PowerShot_Charge_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_PowerShot_Charge_C;  // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Charge;                                            // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        HomingOffDistance;                                 // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHoming;                                          // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CancelShoot();
	void ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();
	void ShootBullet(const struct FVector& TargetLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_PowerShot_Charge_C">();
	}
	static class ABP_SkillEffect_PowerShot_Charge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_PowerShot_Charge_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_PowerShot_Charge_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_PowerShot_Charge_C");
static_assert(sizeof(ABP_SkillEffect_PowerShot_Charge_C) == 0x0003E0, "Wrong size on ABP_SkillEffect_PowerShot_Charge_C");
static_assert(offsetof(ABP_SkillEffect_PowerShot_Charge_C, UberGraphFrame_BP_SkillEffect_PowerShot_Charge_C) == 0x0003C0, "Member 'ABP_SkillEffect_PowerShot_Charge_C::UberGraphFrame_BP_SkillEffect_PowerShot_Charge_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_PowerShot_Charge_C, Charge) == 0x0003C8, "Member 'ABP_SkillEffect_PowerShot_Charge_C::Charge' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_PowerShot_Charge_C, HomingOffDistance) == 0x0003D0, "Member 'ABP_SkillEffect_PowerShot_Charge_C::HomingOffDistance' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_PowerShot_Charge_C, IsHoming) == 0x0003D8, "Member 'ABP_SkillEffect_PowerShot_Charge_C::IsHoming' has a wrong offset!");

}

