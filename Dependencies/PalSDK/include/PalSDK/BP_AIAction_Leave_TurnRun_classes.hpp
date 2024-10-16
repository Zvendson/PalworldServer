#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C
// 0x0040 (0x0188 - 0x0148)
class UBP_AIAction_Leave_TurnRun_C final : public UPalAIAction_LeaveBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0148(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                MoveTargetPos;                                     // 0x0150(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FailureLineTrace;                                  // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        MoveVectorCandidate;                               // 0x0170(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectIndex;                                       // 0x0180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSuccess_30D2F75E48B32C365F20FE998491DC93(EPathFollowingResult MovementResult);
	void OnFail_30D2F75E48B32C365F20FE998491DC93(EPathFollowingResult MovementResult);
	void LineTraceMovePosition(bool* Hit);
	void LineTrace_forFailure(struct FVector* MoveTarget);
	void ExecuteUbergraph_BP_AIAction_Leave_TurnRun(int32 EntryPoint);
	void ActionStart(class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Leave_TurnRun_C">();
	}
	static class UBP_AIAction_Leave_TurnRun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Leave_TurnRun_C>();
	}
};
static_assert(alignof(UBP_AIAction_Leave_TurnRun_C) == 0x000008, "Wrong alignment on UBP_AIAction_Leave_TurnRun_C");
static_assert(sizeof(UBP_AIAction_Leave_TurnRun_C) == 0x000188, "Wrong size on UBP_AIAction_Leave_TurnRun_C");
static_assert(offsetof(UBP_AIAction_Leave_TurnRun_C, UberGraphFrame) == 0x000148, "Member 'UBP_AIAction_Leave_TurnRun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Leave_TurnRun_C, MoveTargetPos) == 0x000150, "Member 'UBP_AIAction_Leave_TurnRun_C::MoveTargetPos' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Leave_TurnRun_C, FailureLineTrace) == 0x000168, "Member 'UBP_AIAction_Leave_TurnRun_C::FailureLineTrace' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Leave_TurnRun_C, MoveVectorCandidate) == 0x000170, "Member 'UBP_AIAction_Leave_TurnRun_C::MoveVectorCandidate' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Leave_TurnRun_C, SelectIndex) == 0x000180, "Member 'UBP_AIAction_Leave_TurnRun_C::SelectIndex' has a wrong offset!");

}

