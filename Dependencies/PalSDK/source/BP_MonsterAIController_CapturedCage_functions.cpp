#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_MonsterAIController_CapturedCage_classes.hpp"
#include "PalSDK/BP_MonsterAIController_CapturedCage_parameters.hpp"


namespace PalSDK
{

// Function BP_MonsterAIController_CapturedCage.BP_MonsterAIController_CapturedCage_C.ExecuteUbergraph_BP_MonsterAIController_CapturedCage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_CapturedCage_C::ExecuteUbergraph_BP_MonsterAIController_CapturedCage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_CapturedCage_C", "ExecuteUbergraph_BP_MonsterAIController_CapturedCage");

	Params::BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_CapturedCage.BP_MonsterAIController_CapturedCage_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_CapturedCage_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_CapturedCage_C", "ReceivePossess");

	Params::BP_MonsterAIController_CapturedCage_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

