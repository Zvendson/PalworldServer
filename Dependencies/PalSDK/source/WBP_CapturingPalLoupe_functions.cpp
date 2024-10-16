#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_CapturingPalLoupe_classes.hpp"
#include "PalSDK/WBP_CapturingPalLoupe_parameters.hpp"


namespace PalSDK
{

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.CalcScreenPosition
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CapturingPalLoupe_C::CalcScreenPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "CalcScreenPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.ExecuteUbergraph_WBP_CapturingPalLoupe
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CapturingPalLoupe_C::ExecuteUbergraph_WBP_CapturingPalLoupe(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "ExecuteUbergraph_WBP_CapturingPalLoupe");

	Params::WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.GetLoupeWidgetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        WidgetSize_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CapturingPalLoupe_C::GetLoupeWidgetSize(struct FVector2D* WidgetSize_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "GetLoupeWidgetSize");

	Params::WBP_CapturingPalLoupe_C_GetLoupeWidgetSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WidgetSize_0 != nullptr)
		*WidgetSize_0 = std::move(Parms.WidgetSize_0);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.GetTargetWidgetSize
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        OutVector                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CapturingPalLoupe_C::GetTargetWidgetSize(struct FVector2D* OutVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "GetTargetWidgetSize");

	Params::WBP_CapturingPalLoupe_C_GetTargetWidgetSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutVector != nullptr)
		*OutVector = std::move(Parms.OutVector);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.GetTargetWorldLocation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          OutVector                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CapturingPalLoupe_C::GetTargetWorldLocation(struct FVector* OutVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "GetTargetWorldLocation");

	Params::WBP_CapturingPalLoupe_C_GetTargetWorldLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutVector != nullptr)
		*OutVector = std::move(Parms.OutVector);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.IsEnableLoupe
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_CapturingPalLoupe_C::IsEnableLoupe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "IsEnableLoupe");

	Params::WBP_CapturingPalLoupe_C_IsEnableLoupe Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.OnEndAnimeFiniched
// (BlueprintCallable, BlueprintEvent)

void UWBP_CapturingPalLoupe_C::OnEndAnimeFiniched()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "OnEndAnimeFiniched");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.OnFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalSphereCaptureFailedReason           FailedReson                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CapturingPalLoupe_C::OnFailed(class UPalIndividualCharacterHandle* TargetHandle, EPalSphereCaptureFailedReason FailedReson)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "OnFailed");

	Params::WBP_CapturingPalLoupe_C_OnFailed Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.FailedReson = FailedReson;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CapturingPalLoupe_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.OnRequestedClose
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_CapturingPalLoupe_C::OnRequestedClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "OnRequestedClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.OnSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CapturingPalLoupe_C::OnSuccess(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "OnSuccess");

	Params::WBP_CapturingPalLoupe_C_OnSuccess Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PalCaptureBodyBase_C*         TargetCaptureBody_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CapturingPalLoupe_C::Setup(class ABP_PalCaptureBodyBase_C* TargetCaptureBody_0, class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "Setup");

	Params::WBP_CapturingPalLoupe_C_Setup Parms{};

	Parms.TargetCaptureBody_0 = TargetCaptureBody_0;
	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CapturingPalLoupe_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "Tick");

	Params::WBP_CapturingPalLoupe_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.UpdateArrowImageAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewAngle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CapturingPalLoupe_C::UpdateArrowImageAngle(double NewAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "UpdateArrowImageAngle");

	Params::WBP_CapturingPalLoupe_C_UpdateArrowImageAngle Parms{};

	Parms.NewAngle = NewAngle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.UpdateLength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CapturingPalLoupe_C::UpdateLength()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CapturingPalLoupe_C", "UpdateLength");

	UObject::ProcessEvent(Func, nullptr);
}

}

