#include "PalServer/Basic.hpp"

#include "PalServer/WBP_BossBattle_TimeOut_classes.hpp"
#include "PalServer/WBP_BossBattle_TimeOut_parameters.hpp"


namespace PalServer
{

// Function WBP_BossBattle_TimeOut.WBP_BossBattle_TimeOut_C.ChangeText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTimeOut                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_TimeOut_C::ChangeText(bool IsTimeOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_TimeOut_C", "ChangeText");

	Params::WBP_BossBattle_TimeOut_C_ChangeText Parms{};

	Parms.IsTimeOut = IsTimeOut;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossBattle_TimeOut.WBP_BossBattle_TimeOut_C.ExecuteUbergraph_WBP_BossBattle_TimeOut
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_TimeOut_C::ExecuteUbergraph_WBP_BossBattle_TimeOut(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_TimeOut_C", "ExecuteUbergraph_WBP_BossBattle_TimeOut");

	Params::WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

