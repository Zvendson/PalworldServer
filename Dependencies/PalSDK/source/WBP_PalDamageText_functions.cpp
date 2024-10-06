#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalDamageText_classes.hpp"
#include "PalServer/WBP_PalDamageText_parameters.hpp"


namespace PalServer
{

// Function WBP_PalDamageText.WBP_PalDamageText_C.ExecuteUbergraph_WBP_PalDamageText
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageText_C::ExecuteUbergraph_WBP_PalDamageText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageText_C", "ExecuteUbergraph_WBP_PalDamageText");

	Params::WBP_PalDamageText_C_ExecuteUbergraph_WBP_PalDamageText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalDamageText.WBP_PalDamageText_C.Finished_450E32A44BB84A7C14A5248BD3F03F85
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalDamageText_C::Finished_450E32A44BB84A7C14A5248BD3F03F85()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageText_C", "Finished_450E32A44BB84A7C14A5248BD3F03F85");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalDamageText.WBP_PalDamageText_C.GetPadding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Padding_0                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageText_C::GetPadding(double* Padding_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageText_C", "GetPadding");

	Params::WBP_PalDamageText_C_GetPadding Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Padding_0 != nullptr)
		*Padding_0 = Parms.Padding_0;
}


// Function WBP_PalDamageText.WBP_PalDamageText_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalDamageText_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageText_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalDamageText.WBP_PalDamageText_C.OnRequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalDamageText_C::OnRequestClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageText_C", "OnRequestClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalDamageText.WBP_PalDamageText_C.SetDamageColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalDamageText_C::SetDamageColor(const struct FSlateColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageText_C", "SetDamageColor");

	Params::WBP_PalDamageText_C_SetDamageColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalDamageText.WBP_PalDamageText_C.SetDamageTextType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalDamageTextType                      TextType_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageText_C::SetDamageTextType(EPalDamageTextType TextType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageText_C", "SetDamageTextType");

	Params::WBP_PalDamageText_C_SetDamageTextType Parms{};

	Parms.TextType_0 = TextType_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalDamageText.WBP_PalDamageText_C.SetDamageValue
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageText_C::SetDamageValue(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageText_C", "SetDamageValue");

	Params::WBP_PalDamageText_C_SetDamageValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalDamageText.WBP_PalDamageText_C.UpdatePosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetWorldLocation                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageText_C::UpdatePosition(const struct FVector& TargetWorldLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageText_C", "UpdatePosition");

	Params::WBP_PalDamageText_C_UpdatePosition Parms{};

	Parms.TargetWorldLocation = std::move(TargetWorldLocation);

	UObject::ProcessEvent(Func, &Parms);
}

}

