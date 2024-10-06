#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalPlayerState_classes.hpp"
#include "PalServer/BP_PalPlayerState_parameters.hpp"


namespace PalServer
{

// Function BP_PalPlayerState.BP_PalPlayerState_C.ExecuteUbergraph_BP_PalPlayerState
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerState_C::ExecuteUbergraph_BP_PalPlayerState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerState_C", "ExecuteUbergraph_BP_PalPlayerState");

	Params::BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalPlayerState.BP_PalPlayerState_C.LoadTitleLevel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsSaveSuccess                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerState_C::LoadTitleLevel(bool bIsSaveSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerState_C", "LoadTitleLevel");

	Params::BP_PalPlayerState_C_LoadTitleLevel Parms{};

	Parms.bIsSaveSuccess = bIsSaveSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

}

