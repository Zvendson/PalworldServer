#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Warning_classes.hpp"
#include "PalSDK/WBP_Warning_parameters.hpp"


namespace PalSDK
{

// Function WBP_Warning.WBP_Warning_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)

void UWBP_Warning_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Warning_C", "AnmEvent_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Warning.WBP_Warning_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DisplayTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Warning_C::AnmEvent_Open(double DisplayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Warning_C", "AnmEvent_Open");

	Params::WBP_Warning_C_AnmEvent_Open Parms{};

	Parms.DisplayTime = DisplayTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Warning.WBP_Warning_C.ExecuteUbergraph_WBP_Warning
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Warning_C::ExecuteUbergraph_WBP_Warning(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Warning_C", "ExecuteUbergraph_WBP_Warning");

	Params::WBP_Warning_C_ExecuteUbergraph_WBP_Warning Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Warning.WBP_Warning_C.SetInfoText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Warning_C::SetInfoText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Warning_C", "SetInfoText");

	Params::WBP_Warning_C_SetInfoText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Warning.WBP_Warning_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Warning_C::SetTitleText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Warning_C", "SetTitleText");

	Params::WBP_Warning_C_SetTitleText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

