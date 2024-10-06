#include "PalServer/Basic.hpp"

#include "PalServer/WBP_CommonButton_1_classes.hpp"
#include "PalServer/WBP_CommonButton_1_parameters.hpp"


namespace PalServer
{

// Function WBP_CommonButton_1.WBP_CommonButton_1_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)

void UWBP_CommonButton_1_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "AnmEvent_Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.AnmEvent_Normal
// (BlueprintCallable, BlueprintEvent)

void UWBP_CommonButton_1_C::AnmEvent_Normal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "AnmEvent_Normal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonButton_1_C::BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_CommonButton_1_C_BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonButton_1_C::BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_CommonButton_1_C_BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonButton_1_C::BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_CommonButton_1_C_BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CommonButton_1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.ExecuteUbergraph_WBP_CommonButton_1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonButton_1_C::ExecuteUbergraph_WBP_CommonButton_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "ExecuteUbergraph_WBP_CommonButton_1");

	Params::WBP_CommonButton_1_C_ExecuteUbergraph_WBP_CommonButton_1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonButton_1_C::GetFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "GetFocusTarget");

	Params::WBP_CommonButton_1_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CommonButton_1_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CommonButton_1_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "OnHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CommonButton_1_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CommonButton_1_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "OnUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonButton_1_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "SetText");

	Params::WBP_CommonButton_1_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonButton_1.WBP_CommonButton_1_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFirstFocusTarget                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonButton_1_C::Setup(bool IsFirstFocusTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonButton_1_C", "Setup");

	Params::WBP_CommonButton_1_C_Setup Parms{};

	Parms.IsFirstFocusTarget = IsFirstFocusTarget;

	UObject::ProcessEvent(Func, &Parms);
}

}

