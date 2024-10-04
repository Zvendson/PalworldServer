#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalGetReticle_classes.hpp"
#include "PalServer/WBP_PalGetReticle_parameters.hpp"


namespace PalServer
{

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_Captured
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisplay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGetReticle_C::AnmEvent_Captured(bool IsDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_Captured");

	Params::WBP_PalGetReticle_C_AnmEvent_Captured Parms{};

	Parms.IsDisplay = IsDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_CloseAndRemoveSecondStep
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::AnmEvent_CloseAndRemoveSecondStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_CloseAndRemoveSecondStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_CloseFirstStep
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::AnmEvent_CloseFirstStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_CloseFirstStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_CloseSecondStep
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::AnmEvent_CloseSecondStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_CloseSecondStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_FirstToSecond
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::AnmEvent_FirstToSecond()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_FirstToSecond");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_New
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisplay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGetReticle_C::AnmEvent_New(bool IsDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_New");

	Params::WBP_PalGetReticle_C_AnmEvent_New Parms{};

	Parms.IsDisplay = IsDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_OpenFirstStep
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::AnmEvent_OpenFirstStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_OpenFirstStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_OpenSecondStep
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::AnmEvent_OpenSecondStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_OpenSecondStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_RandomShake
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::AnmEvent_RandomShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_RandomShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_ResetCloseAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::AnmEvent_ResetCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_ResetCloseAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_ResetOpenAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::AnmEvent_ResetOpenAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_ResetOpenAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_SecondToFirst
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::AnmEvent_SecondToFirst()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "AnmEvent_SecondToFirst");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalGetReticle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalGetReticle_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.DisplayCaptureBonusNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CaptureBonusCount                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGetReticle_C::DisplayCaptureBonusNum(int32 CaptureBonusCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "DisplayCaptureBonusNum");

	Params::WBP_PalGetReticle_C_DisplayCaptureBonusNum Parms{};

	Parms.CaptureBonusCount = CaptureBonusCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.ExecuteUbergraph_WBP_PalGetReticle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGetReticle_C::ExecuteUbergraph_WBP_PalGetReticle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "ExecuteUbergraph_WBP_PalGetReticle");

	Params::WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.Finished_EC162AC8447DABC2CF5BD2942C8E3A64
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::Finished_EC162AC8447DABC2CF5BD2942C8E3A64()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "Finished_EC162AC8447DABC2CF5BD2942C8E3A64");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalGetReticle_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.OnTimer_RemoveSelf
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::OnTimer_RemoveSelf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "OnTimer_RemoveSelf");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.RestartTick
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::RestartTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "RestartTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.Set Display Capture Rate Force
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGetReticle_C::Set_Display_Capture_Rate_Force(double Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "Set Display Capture Rate Force");

	Params::WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.SetCaptureRateForce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  CaptureRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGetReticle_C::SetCaptureRateForce(double CaptureRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "SetCaptureRateForce");

	Params::WBP_PalGetReticle_C_SetCaptureRateForce Parms{};

	Parms.CaptureRate = CaptureRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.SetCaptureRateFromListIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGetReticle_C::SetCaptureRateFromListIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "SetCaptureRateFromListIndex");

	Params::WBP_PalGetReticle_C_SetCaptureRateFromListIndex Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.SetCaptureRateList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                          RateList_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalGetReticle_C::SetCaptureRateList(TArray<double>& RateList_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "SetCaptureRateList");

	Params::WBP_PalGetReticle_C_SetCaptureRateList Parms{};

	Parms.RateList_0 = std::move(RateList_0);

	UObject::ProcessEvent(Func, &Parms);

	RateList_0 = std::move(Parms.RateList_0);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.SetSneakBonusFlag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBonus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGetReticle_C::SetSneakBonusFlag(bool IsBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "SetSneakBonusFlag");

	Params::WBP_PalGetReticle_C_SetSneakBonusFlag Parms{};

	Parms.IsBonus = IsBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.SetWorldLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGetReticle_C::SetWorldLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "SetWorldLocation");

	Params::WBP_PalGetReticle_C_SetWorldLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGetReticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "Tick");

	Params::WBP_PalGetReticle_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.Update Display Rate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGetReticle_C::Update_Display_Rate(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "Update Display Rate");

	Params::WBP_PalGetReticle_C_Update_Display_Rate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalGetReticle.WBP_PalGetReticle_C.Update Position
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalGetReticle_C::Update_Position()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGetReticle_C", "Update Position");

	UObject::ProcessEvent(Func, nullptr);
}

}

