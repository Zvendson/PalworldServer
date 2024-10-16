#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "AIModule_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C
// 0x0008 (0x0188 - 0x0180)
class UBP_AIAction_BaseCampRecoverHungry_C final : public UPalAIActionBaseCampRecoverHungry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0180(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionStart(class APawn* ControlledPawn);
	void Change_Recover_Hungry_Action(class UClass* ChildActionClass);
	void ChangeActionApproach();
	void ChangeActionEat();
	void ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry(int32 EntryPoint);
	void NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_BaseCampRecoverHungry_C">();
	}
	static class UBP_AIAction_BaseCampRecoverHungry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_BaseCampRecoverHungry_C>();
	}
};
static_assert(alignof(UBP_AIAction_BaseCampRecoverHungry_C) == 0x000008, "Wrong alignment on UBP_AIAction_BaseCampRecoverHungry_C");
static_assert(sizeof(UBP_AIAction_BaseCampRecoverHungry_C) == 0x000188, "Wrong size on UBP_AIAction_BaseCampRecoverHungry_C");
static_assert(offsetof(UBP_AIAction_BaseCampRecoverHungry_C, UberGraphFrame) == 0x000180, "Member 'UBP_AIAction_BaseCampRecoverHungry_C::UberGraphFrame' has a wrong offset!");

}

