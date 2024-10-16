#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_BossBattle_Timer_classes.hpp"
#include "PalSDK/WBP_BossBattle_Timer_parameters.hpp"


namespace PalSDK
{

// Function WBP_BossBattle_Timer.WBP_BossBattle_Timer_C.ExecuteUbergraph_WBP_BossBattle_Timer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_Timer_C::ExecuteUbergraph_WBP_BossBattle_Timer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_Timer_C", "ExecuteUbergraph_WBP_BossBattle_Timer");

	Params::WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossBattle_Timer.WBP_BossBattle_Timer_C.SetRemainSecond
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RemainSecond                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_Timer_C::SetRemainSecond(int32 RemainSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_Timer_C", "SetRemainSecond");

	Params::WBP_BossBattle_Timer_C_SetRemainSecond Parms{};

	Parms.RemainSecond = RemainSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossBattle_Timer.WBP_BossBattle_Timer_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_BossBattle_Timer_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_Timer_C", "SetText");

	Params::WBP_BossBattle_Timer_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

