#include "PalServer/Basic.hpp"

#include "PalServer/WBP_InGame_Match_SignalStart_classes.hpp"
#include "PalServer/WBP_InGame_Match_SignalStart_parameters.hpp"


namespace PalServer
{

// Function WBP_InGame_Match_SignalStart.WBP_InGame_Match_SignalStart_C.ExecuteUbergraph_WBP_InGame_Match_SignalStart
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Match_SignalStart_C::ExecuteUbergraph_WBP_InGame_Match_SignalStart(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_SignalStart_C", "ExecuteUbergraph_WBP_InGame_Match_SignalStart");

	Params::WBP_InGame_Match_SignalStart_C_ExecuteUbergraph_WBP_InGame_Match_SignalStart Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_SignalStart.WBP_InGame_Match_SignalStart_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Match_SignalStart_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_SignalStart_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Match_SignalStart.WBP_InGame_Match_SignalStart_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Match_SignalStart_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_SignalStart_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Match_SignalStart.WBP_InGame_Match_SignalStart_C.SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalStart
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Match_SignalStart_C::SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_SignalStart_C", "SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Match_SignalStart.WBP_InGame_Match_SignalStart_C.SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalStart_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Match_SignalStart_C::SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalStart_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_SignalStart_C", "SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalStart_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

