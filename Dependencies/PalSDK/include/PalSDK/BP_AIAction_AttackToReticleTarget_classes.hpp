#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "AIModule_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C
// 0x0058 (0x0188 - 0x0130)
class UBP_AIAction_AttackToReticleTarget_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APawn*                                  ControlledPawn;                                    // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          OwnerCharacter;                                    // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*     PartnerSkillParam;                                 // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          PlayerCharacter;                                   // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAborted;                                         // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          TargetCharacter;                                   // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        FindTargetElapedTime;                              // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FindTargetTimeLimit;                               // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTargetFound;                                     // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x3];                                      // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FlagName;                                          // 0x017C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Tick_ObserveTarget(double DeltaTime);
	void Tick_FindTarget(double DeltaTime, bool* TargetFound);
	void SetupAction(class APawn* ControlledPawn_0);
	void SetEnableReticleTargetFlag(bool Enable);
	void OnTargetLost();
	void OnTargetFound(class AActor* TargetActor);
	void IsTargetValid(class APalCharacter* Target, bool* IsValid);
	class FText GetSkillName();
	void FinishAction();
	void FindTarget(bool* IsFound, class APalCharacter** Target);
	void ExecuteUbergraph_BP_AIAction_AttackToReticleTarget(int32 EntryPoint);
	void CanFindTarget(bool* Result);
	void AddLogTargetNotFound();
	void AddLogExecute();
	void ActionTick(class APawn* ControlledPawn_0, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn_0);
	void ActionFinished(class APawn* ControlledPawn_0, EPawnActionResult WithResult);
	void ActionAbort(class APawn* ControlledPawn_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_AttackToReticleTarget_C">();
	}
	static class UBP_AIAction_AttackToReticleTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_AttackToReticleTarget_C>();
	}
};
static_assert(alignof(UBP_AIAction_AttackToReticleTarget_C) == 0x000008, "Wrong alignment on UBP_AIAction_AttackToReticleTarget_C");
static_assert(sizeof(UBP_AIAction_AttackToReticleTarget_C) == 0x000188, "Wrong size on UBP_AIAction_AttackToReticleTarget_C");
static_assert(offsetof(UBP_AIAction_AttackToReticleTarget_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_AttackToReticleTarget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_AttackToReticleTarget_C, ControlledPawn) == 0x000138, "Member 'UBP_AIAction_AttackToReticleTarget_C::ControlledPawn' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_AttackToReticleTarget_C, OwnerCharacter) == 0x000140, "Member 'UBP_AIAction_AttackToReticleTarget_C::OwnerCharacter' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_AttackToReticleTarget_C, PartnerSkillParam) == 0x000148, "Member 'UBP_AIAction_AttackToReticleTarget_C::PartnerSkillParam' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_AttackToReticleTarget_C, PlayerCharacter) == 0x000150, "Member 'UBP_AIAction_AttackToReticleTarget_C::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_AttackToReticleTarget_C, IsAborted) == 0x000158, "Member 'UBP_AIAction_AttackToReticleTarget_C::IsAborted' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_AttackToReticleTarget_C, TargetCharacter) == 0x000160, "Member 'UBP_AIAction_AttackToReticleTarget_C::TargetCharacter' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_AttackToReticleTarget_C, FindTargetElapedTime) == 0x000168, "Member 'UBP_AIAction_AttackToReticleTarget_C::FindTargetElapedTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_AttackToReticleTarget_C, FindTargetTimeLimit) == 0x000170, "Member 'UBP_AIAction_AttackToReticleTarget_C::FindTargetTimeLimit' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_AttackToReticleTarget_C, IsTargetFound) == 0x000178, "Member 'UBP_AIAction_AttackToReticleTarget_C::IsTargetFound' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_AttackToReticleTarget_C, FlagName) == 0x00017C, "Member 'UBP_AIAction_AttackToReticleTarget_C::FlagName' has a wrong offset!");

}

