#pragma once

#include "Basic.hpp"

#include "BP_AIAction_AttackToReticleTarget_classes.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AIAction_UseWaza.BP_AIAction_UseWaza_C
// 0x0010 (0x0198 - 0x0188)
class UBP_AIAction_UseWaza_C final : public UBP_AIAction_AttackToReticleTarget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_UseWaza_C;              // 0x0188(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_MonsterAIController_Otomo_C*        AIController;                                      // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void SetupAction(class APawn* ControlledPawn_0);
	void OnTargetFound(class AActor* TargetActor);
	void IsAvailableWaza(bool* Result);
	void GetWazaID(EPalWazaID* WazaID);
	class FText GetSkillName();
	void ExecuteUbergraph_BP_AIAction_UseWaza(int32 EntryPoint);
	void ExecAction(class AActor* TargetActor);
	void CanFindTarget(bool* Result);
	void ActionStart(class APawn* ControlledPawn_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_UseWaza_C">();
	}
	static class UBP_AIAction_UseWaza_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_UseWaza_C>();
	}
};
static_assert(alignof(UBP_AIAction_UseWaza_C) == 0x000008, "Wrong alignment on UBP_AIAction_UseWaza_C");
static_assert(sizeof(UBP_AIAction_UseWaza_C) == 0x000198, "Wrong size on UBP_AIAction_UseWaza_C");
static_assert(offsetof(UBP_AIAction_UseWaza_C, UberGraphFrame_BP_AIAction_UseWaza_C) == 0x000188, "Member 'UBP_AIAction_UseWaza_C::UberGraphFrame_BP_AIAction_UseWaza_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_UseWaza_C, AIController) == 0x000190, "Member 'UBP_AIAction_UseWaza_C::AIController' has a wrong offset!");

}

