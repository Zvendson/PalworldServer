#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalCommonCharacterSlotButton_classes.hpp"
#include "PalSDK/WBP_PalCommonCharacterSlotButton_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.AnmEvent_BasePal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::AnmEvent_BasePal(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "AnmEvent_BasePal");

	Params::WBP_PalCommonCharacterSlotButton_C_AnmEvent_BasePal Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.AnmEvent_ConsumePal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::AnmEvent_ConsumePal(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "AnmEvent_ConsumePal");

	Params::WBP_PalCommonCharacterSlotButton_C_AnmEvent_ConsumePal Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCommonCharacterSlotButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.ExecuteUbergraph_WBP_PalCommonCharacterSlotButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::ExecuteUbergraph_WBP_PalCommonCharacterSlotButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "ExecuteUbergraph_WBP_PalCommonCharacterSlotButton");

	Params::WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCommonCharacterSlotButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.PlayFocusAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::PlayFocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "PlayFocusAnim");

	Params::WBP_PalCommonCharacterSlotButton_C_PlayFocusAnim Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.PlayUnfocusAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::PlayUnfocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "PlayUnfocusAnim");

	Params::WBP_PalCommonCharacterSlotButton_C_PlayUnfocusAnim Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.RegisterButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::RegisterButton(class UCommonButtonBase** Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "RegisterButton");

	Params::WBP_PalCommonCharacterSlotButton_C_RegisterButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;
}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.RegisterCharacterSlotWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotBase_C*      CharacterSlotWidget                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C** CharacterSlotWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "RegisterCharacterSlotWidget");

	Params::WBP_PalCommonCharacterSlotButton_C_RegisterCharacterSlotWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSlotWidget != nullptr)
		*CharacterSlotWidget = Parms.CharacterSlotWidget;
}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.SetEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::SetEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "SetEnable");

	Params::WBP_PalCommonCharacterSlotButton_C_SetEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.SetOverrideSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        NewSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::SetOverrideSize(const struct FVector2D& NewSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "SetOverrideSize");

	Params::WBP_PalCommonCharacterSlotButton_C_SetOverrideSize Parms{};

	Parms.NewSize = std::move(NewSize);

	UObject::ProcessEvent(Func, &Parms);
}

}

