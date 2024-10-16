#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "AIModule_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AIActionHealWater.BP_AIActionHealWater_C
// 0x0020 (0x0150 - 0x0130)
class UBP_AIActionHealWater_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                          OwnerPawn;                                         // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          HealTarget;                                        // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*     PartnerSkill;                                      // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void StartPartnerSkill();
	void Setup(class UObject* Object);
	void SetMoveDisableFlag(bool IsDisable);
	void SetDisableThrowPalFlag(bool IsDisable);
	void OnActionNotify(const class UPalActionBase* Action, class FName NotifyName);
	void GetHealValue(int32* HealValue);
	void ExecuteUbergraph_BP_AIActionHealWater(int32 EntryPoint);
	void EndPartnerSkill();
	void AddSkillLog();
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionHealWater_C">();
	}
	static class UBP_AIActionHealWater_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionHealWater_C>();
	}
};
static_assert(alignof(UBP_AIActionHealWater_C) == 0x000008, "Wrong alignment on UBP_AIActionHealWater_C");
static_assert(sizeof(UBP_AIActionHealWater_C) == 0x000150, "Wrong size on UBP_AIActionHealWater_C");
static_assert(offsetof(UBP_AIActionHealWater_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIActionHealWater_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIActionHealWater_C, OwnerPawn) == 0x000138, "Member 'UBP_AIActionHealWater_C::OwnerPawn' has a wrong offset!");
static_assert(offsetof(UBP_AIActionHealWater_C, HealTarget) == 0x000140, "Member 'UBP_AIActionHealWater_C::HealTarget' has a wrong offset!");
static_assert(offsetof(UBP_AIActionHealWater_C, PartnerSkill) == 0x000148, "Member 'UBP_AIActionHealWater_C::PartnerSkill' has a wrong offset!");

}

