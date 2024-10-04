#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalAIBlackboard_Common_classes.hpp"
#include "PalServer/BP_PalAIBlackboard_Common_parameters.hpp"


namespace PalServer
{

// Function BP_PalAIBlackboard_Common.BP_PalAIBlackboard_Common_C.ExecuteUbergraph_BP_PalAIBlackboard_Common
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAIBlackboard_Common_C::ExecuteUbergraph_BP_PalAIBlackboard_Common(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAIBlackboard_Common_C", "ExecuteUbergraph_BP_PalAIBlackboard_Common");

	Params::BP_PalAIBlackboard_Common_C_ExecuteUbergraph_BP_PalAIBlackboard_Common Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAIBlackboard_Common.BP_PalAIBlackboard_Common_C.Initialize_PalBB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SelfActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAIBlackboard_Common_C::Initialize_PalBB(class AActor* SelfActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAIBlackboard_Common_C", "Initialize_PalBB");

	Params::BP_PalAIBlackboard_Common_C_Initialize_PalBB Parms{};

	Parms.SelfActor = SelfActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

