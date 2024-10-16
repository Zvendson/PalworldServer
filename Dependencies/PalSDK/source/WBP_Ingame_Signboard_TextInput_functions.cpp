#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Ingame_Signboard_TextInput_classes.hpp"
#include "PalSDK/WBP_Ingame_Signboard_TextInput_parameters.hpp"


namespace PalSDK
{

// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Ingame_Signboard_TextInput_C::BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Signboard_TextInput_C::BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	Params::WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Ingame_Signboard_TextInput_C::BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature");

	Params::WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.BndEvt__WBP_Ingame_Signboard_TextInput_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Ingame_Signboard_TextInput_C::BndEvt__WBP_Ingame_Signboard_TextInput_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "BndEvt__WBP_Ingame_Signboard_TextInput_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.ExecuteUbergraph_WBP_Ingame_Signboard_TextInput
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Signboard_TextInput_C::ExecuteUbergraph_WBP_Ingame_Signboard_TextInput(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "ExecuteUbergraph_WBP_Ingame_Signboard_TextInput");

	Params::WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.OnClosed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Signboard_TextInput_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "OnClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Signboard_TextInput_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.OnTriggerEscape
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Signboard_TextInput_C::OnTriggerEscape()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "OnTriggerEscape");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.ResetInputAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Signboard_TextInput_C::ResetInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "ResetInputAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.SetEnableConfirmButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Signboard_TextInput_C::SetEnableConfirmButton(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "SetEnableConfirmButton");

	Params::WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.SetupInputAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Signboard_TextInput_C::SetupInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "SetupInputAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Ingame_Signboard_TextInput_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_TextInput_C", "BP_GetDesiredFocusTarget");

	Params::WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

