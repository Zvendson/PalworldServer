#include "PalServer/Basic.hpp"

#include "PalServer/WBP_InGame_Match_SignalFinish_classes.hpp"
#include "PalServer/WBP_InGame_Match_SignalFinish_parameters.hpp"


namespace PalServer
{

// Function WBP_InGame_Match_SignalFinish.WBP_InGame_Match_SignalFinish_C.ExecuteUbergraph_WBP_InGame_Match_SignalFinish
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Match_SignalFinish_C::ExecuteUbergraph_WBP_InGame_Match_SignalFinish(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_SignalFinish_C", "ExecuteUbergraph_WBP_InGame_Match_SignalFinish");

	Params::WBP_InGame_Match_SignalFinish_C_ExecuteUbergraph_WBP_InGame_Match_SignalFinish Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_SignalFinish.WBP_InGame_Match_SignalFinish_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Match_SignalFinish_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_SignalFinish_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Match_SignalFinish.WBP_InGame_Match_SignalFinish_C.SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalFinish
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Match_SignalFinish_C::SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_SignalFinish_C", "SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalFinish");

	UObject::ProcessEvent(Func, nullptr);
}

}

