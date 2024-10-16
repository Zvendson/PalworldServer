#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_CharaCre_ScrollBoxContent_Voice_classes.hpp"
#include "PalSDK/WBP_CharaCre_ScrollBoxContent_Voice_parameters.hpp"


namespace PalSDK
{

// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.ApplyMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfo  MakeInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "ApplyMakeInfo");

	Params::WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo Parms{};

	Parms.MakeInfo = std::move(MakeInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice");

	Params::WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::GetRestoreFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "GetRestoreFocusTarget");

	Params::WBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.OnChangedVoiceID__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   VoiceID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::OnChangedVoiceID__DelegateSignature(int32 VoiceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "OnChangedVoiceID__DelegateSignature");

	Params::WBP_CharaCre_ScrollBoxContent_Voice_C_OnChangedVoiceID__DelegateSignature Parms{};

	Parms.VoiceID = VoiceID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.OnClickedVoiceTypeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_BodyTypeButton_C*   Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::OnClickedVoiceTypeButton(class UWBP_CharaCre_BodyTypeButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "OnClickedVoiceTypeButton");

	Params::WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.Play Sample Voice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   VoiceID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::Play_Sample_Voice(int32 VoiceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "Play Sample Voice");

	Params::WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice Parms{};

	Parms.VoiceID = VoiceID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::GetTopFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "GetTopFocusTarget");

	Params::WBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}

}

