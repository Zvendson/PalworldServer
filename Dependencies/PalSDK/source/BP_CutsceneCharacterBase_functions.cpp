#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_CutsceneCharacterBase_classes.hpp"
#include "PalSDK/BP_CutsceneCharacterBase_parameters.hpp"


namespace PalSDK
{

// Function BP_CutsceneCharacterBase.BP_CutsceneCharacterBase_C.ExecuteUbergraph_BP_CutsceneCharacterBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneCharacterBase_C::ExecuteUbergraph_BP_CutsceneCharacterBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneCharacterBase_C", "ExecuteUbergraph_BP_CutsceneCharacterBase");

	Params::BP_CutsceneCharacterBase_C_ExecuteUbergraph_BP_CutsceneCharacterBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutsceneCharacterBase.BP_CutsceneCharacterBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CutsceneCharacterBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneCharacterBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

