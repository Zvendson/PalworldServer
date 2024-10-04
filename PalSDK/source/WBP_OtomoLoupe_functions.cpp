#include "PalServer/Basic.hpp"

#include "PalServer/WBP_OtomoLoupe_classes.hpp"
#include "PalServer/WBP_OtomoLoupe_parameters.hpp"


namespace PalServer
{

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.CalcScreenPosition
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_OtomoLoupe_C::CalcScreenPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "CalcScreenPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.ExecuteUbergraph_WBP_OtomoLoupe
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OtomoLoupe_C::ExecuteUbergraph_WBP_OtomoLoupe(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "ExecuteUbergraph_WBP_OtomoLoupe");

	Params::WBP_OtomoLoupe_C_ExecuteUbergraph_WBP_OtomoLoupe Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.GetLoupeWidgetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        WidgetSize_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OtomoLoupe_C::GetLoupeWidgetSize(struct FVector2D* WidgetSize_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "GetLoupeWidgetSize");

	Params::WBP_OtomoLoupe_C_GetLoupeWidgetSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WidgetSize_0 != nullptr)
		*WidgetSize_0 = std::move(Parms.WidgetSize_0);
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.GetTargetWidgetSize
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        OutVector                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OtomoLoupe_C::GetTargetWidgetSize(struct FVector2D* OutVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "GetTargetWidgetSize");

	Params::WBP_OtomoLoupe_C_GetTargetWidgetSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutVector != nullptr)
		*OutVector = std::move(Parms.OutVector);
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.GetTargetWorldLocation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          OutVector                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OtomoLoupe_C::GetTargetWorldLocation(struct FVector* OutVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "GetTargetWorldLocation");

	Params::WBP_OtomoLoupe_C_GetTargetWorldLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutVector != nullptr)
		*OutVector = std::move(Parms.OutVector);
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.GetTranslationTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OtomoLoupe_C::GetTranslationTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "GetTranslationTarget");

	Params::WBP_OtomoLoupe_C_GetTranslationTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.IsEnableLoupe
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_OtomoLoupe_C::IsEnableLoupe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "IsEnableLoupe");

	Params::WBP_OtomoLoupe_C_IsEnableLoupe Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.OnActivateOtomo
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OtomoLoupe_C::OnActivateOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "OnActivateOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.OnInactiveOtomo
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OtomoLoupe_C::OnInactiveOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "OnInactiveOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_OtomoLoupe_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.RoundScreenPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        ScreenPosition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        CalcedPosition                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OtomoLoupe_C::RoundScreenPosition(const struct FVector2D& ScreenPosition, struct FVector2D* CalcedPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "RoundScreenPosition");

	Params::WBP_OtomoLoupe_C_RoundScreenPosition Parms{};

	Parms.ScreenPosition = std::move(ScreenPosition);

	UObject::ProcessEvent(Func, &Parms);

	if (CalcedPosition != nullptr)
		*CalcedPosition = std::move(Parms.CalcedPosition);
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.SetFinalWidgetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  CalcedOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OtomoLoupe_C::SetFinalWidgetOpacity(double CalcedOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "SetFinalWidgetOpacity");

	Params::WBP_OtomoLoupe_C_SetFinalWidgetOpacity Parms{};

	Parms.CalcedOpacity = CalcedOpacity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OtomoLoupe_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.UpdateArrowImageAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewAngle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OtomoLoupe_C::UpdateArrowImageAngle(double NewAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OtomoLoupe_C", "UpdateArrowImageAngle");

	Params::WBP_OtomoLoupe_C_UpdateArrowImageAngle Parms{};

	Parms.NewAngle = NewAngle;

	UObject::ProcessEvent(Func, &Parms);
}

}

