#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AIAction_CallBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AIActionHealCall.BP_AIActionHealCall_C
// 0x0018 (0x0190 - 0x0178)
class UBP_AIActionHealCall_C final : public UBP_AIAction_CallBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIActionHealCall_C;              // 0x0178(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CoopParam_Cover_C*                  CoopParam;                                         // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Approach_Radius;                                   // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AIActionHealCall(int32 EntryPoint);
	void DetermineDestination(class AActor* MasterTrainer, double ApproachRadius, struct FVector* ResultPosition);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionHealCall_C">();
	}
	static class UBP_AIActionHealCall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionHealCall_C>();
	}
};
static_assert(alignof(UBP_AIActionHealCall_C) == 0x000008, "Wrong alignment on UBP_AIActionHealCall_C");
static_assert(sizeof(UBP_AIActionHealCall_C) == 0x000190, "Wrong size on UBP_AIActionHealCall_C");
static_assert(offsetof(UBP_AIActionHealCall_C, UberGraphFrame_BP_AIActionHealCall_C) == 0x000178, "Member 'UBP_AIActionHealCall_C::UberGraphFrame_BP_AIActionHealCall_C' has a wrong offset!");
static_assert(offsetof(UBP_AIActionHealCall_C, CoopParam) == 0x000180, "Member 'UBP_AIActionHealCall_C::CoopParam' has a wrong offset!");
static_assert(offsetof(UBP_AIActionHealCall_C, Approach_Radius) == 0x000188, "Member 'UBP_AIActionHealCall_C::Approach_Radius' has a wrong offset!");

}

