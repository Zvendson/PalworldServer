#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalGet_s_classes.hpp"
#include "PalSDK/WBP_PalGet_s_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalGet_s.WBP_PalGet_s_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGet_s_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGet_s_C", "AnmEvent_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGet_s.WBP_PalGet_s_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGet_s_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGet_s_C", "AnmEvent_Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGet_s.WBP_PalGet_s_C.ClearAdditionalText
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalGet_s_C::ClearAdditionalText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGet_s_C", "ClearAdditionalText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGet_s.WBP_PalGet_s_C.DisplayCaptureMessage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFirstCapture                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGet_s_C::DisplayCaptureMessage(bool IsFirstCapture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGet_s_C", "DisplayCaptureMessage");

	Params::WBP_PalGet_s_C_DisplayCaptureMessage Parms{};

	Parms.IsFirstCapture = IsFirstCapture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGet_s.WBP_PalGet_s_C.ExecuteUbergraph_WBP_PalGet_s
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGet_s_C::ExecuteUbergraph_WBP_PalGet_s(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGet_s_C", "ExecuteUbergraph_WBP_PalGet_s");

	Params::WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGet_s.WBP_PalGet_s_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalGet_s_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGet_s_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGet_s.WBP_PalGet_s_C.OnOpenAnimeFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGet_s_C::OnOpenAnimeFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGet_s_C", "OnOpenAnimeFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGet_s.WBP_PalGet_s_C.SetAdditionalText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalGet_s_C::SetAdditionalText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGet_s_C", "SetAdditionalText");

	Params::WBP_PalGet_s_C_SetAdditionalText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGet_s.WBP_PalGet_s_C.SetupByCaptureInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPalCaptureInfo             CaptureInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalGet_s_C::SetupByCaptureInfo(const struct FPalUIPalCaptureInfo& CaptureInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGet_s_C", "SetupByCaptureInfo");

	Params::WBP_PalGet_s_C_SetupByCaptureInfo Parms{};

	Parms.CaptureInfo = std::move(CaptureInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGet_s.WBP_PalGet_s_C.SetupByTargetHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsVisibleLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGet_s_C::SetupByTargetHandle(class UPalIndividualCharacterHandle* Handle, bool IsVisibleLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGet_s_C", "SetupByTargetHandle");

	Params::WBP_PalGet_s_C_SetupByTargetHandle Parms{};

	Parms.Handle = Handle;
	Parms.IsVisibleLevel = IsVisibleLevel;

	UObject::ProcessEvent(Func, &Parms);
}

}

