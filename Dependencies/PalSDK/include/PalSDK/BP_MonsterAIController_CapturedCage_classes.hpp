#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_MonsterAIController_CapturedCage.BP_MonsterAIController_CapturedCage_C
// 0x0008 (0x0530 - 0x0528)
class ABP_MonsterAIController_CapturedCage_C final : public APalAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_MonsterAIController_CapturedCage(int32 EntryPoint);
	void ReceivePossess(class APawn* PossessedPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonsterAIController_CapturedCage_C">();
	}
	static class ABP_MonsterAIController_CapturedCage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonsterAIController_CapturedCage_C>();
	}
};
static_assert(alignof(ABP_MonsterAIController_CapturedCage_C) == 0x000008, "Wrong alignment on ABP_MonsterAIController_CapturedCage_C");
static_assert(sizeof(ABP_MonsterAIController_CapturedCage_C) == 0x000530, "Wrong size on ABP_MonsterAIController_CapturedCage_C");
static_assert(offsetof(ABP_MonsterAIController_CapturedCage_C, UberGraphFrame) == 0x000528, "Member 'ABP_MonsterAIController_CapturedCage_C::UberGraphFrame' has a wrong offset!");

}

