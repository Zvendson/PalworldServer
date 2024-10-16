#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_InGame_Match_Draw_classes.hpp"
#include "PalSDK/WBP_InGame_Match_Draw_parameters.hpp"


namespace PalSDK
{

// Function WBP_InGame_Match_Draw.WBP_InGame_Match_Draw_C.ExecuteUbergraph_WBP_InGame_Match_Draw
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Match_Draw_C::ExecuteUbergraph_WBP_InGame_Match_Draw(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_Draw_C", "ExecuteUbergraph_WBP_InGame_Match_Draw");

	Params::WBP_InGame_Match_Draw_C_ExecuteUbergraph_WBP_InGame_Match_Draw Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_Draw.WBP_InGame_Match_Draw_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Match_Draw_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_Draw_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Match_Draw.WBP_InGame_Match_Draw_C.SequenceEvent__ENTRYPOINTWBP_InGame_Match_Draw
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Match_Draw_C::SequenceEvent__ENTRYPOINTWBP_InGame_Match_Draw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_Draw_C", "SequenceEvent__ENTRYPOINTWBP_InGame_Match_Draw");

	UObject::ProcessEvent(Func, nullptr);
}

}

