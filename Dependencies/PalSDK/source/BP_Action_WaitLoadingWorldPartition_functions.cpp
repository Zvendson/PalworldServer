#include "PalServer/Basic.hpp"

#include "PalServer/BP_Action_WaitLoadingWorldPartition_classes.hpp"
#include "PalServer/BP_Action_WaitLoadingWorldPartition_parameters.hpp"


namespace PalServer
{

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.CanTimeOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanTimeOut_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WaitLoadingWorldPartition_C::CanTimeOut(bool* CanTimeOut_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "CanTimeOut");

	Params::BP_Action_WaitLoadingWorldPartition_C_CanTimeOut Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanTimeOut_0 != nullptr)
		*CanTimeOut_0 = Parms.CanTimeOut_0;
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.CheckEndAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WaitLoadingWorldPartition_C::CheckEndAction(double DeltaTime, bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "CheckEndAction");

	Params::BP_Action_WaitLoadingWorldPartition_C_CheckEndAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.CheckGround
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGroundHitResult                        Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WaitLoadingWorldPartition_C::CheckGround(EGroundHitResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "CheckGround");

	Params::BP_Action_WaitLoadingWorldPartition_C_CheckGround Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.CheckLoadLocationDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsReWait                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WaitLoadingWorldPartition_C::CheckLoadLocationDistance(bool* IsReWait)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "CheckLoadLocationDistance");

	Params::BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsReWait != nullptr)
		*IsReWait = Parms.IsReWait;
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WaitLoadingWorldPartition_C::ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition");

	Params::BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.GetFadeInParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalHUDDispatchParameter_FadeWidget*NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WaitLoadingWorldPartition_C::GetFadeInParameter(class UPalHUDDispatchParameter_FadeWidget** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "GetFadeInParameter");

	Params::BP_Action_WaitLoadingWorldPartition_C_GetFadeInParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.IsWaterActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsWater                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WaitLoadingWorldPartition_C::IsWaterActor(class AActor* TargetActor, bool* IsWater)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "IsWaterActor");

	Params::BP_Action_WaitLoadingWorldPartition_C_IsWaterActor Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWater != nullptr)
		*IsWater = Parms.IsWater;
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_WaitLoadingWorldPartition_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.OnBreakAction
// (Event, Public, BlueprintEvent)

void UBP_Action_WaitLoadingWorldPartition_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "OnBreakAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.OnCompleteLoad
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_WaitLoadingWorldPartition_C::OnCompleteLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "OnCompleteLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_WaitLoadingWorldPartition_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.RequestWaitWorldPartition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Action_WaitLoadingWorldPartition_C::RequestWaitWorldPartition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "RequestWaitWorldPartition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.ResetCamera
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_WaitLoadingWorldPartition_C::ResetCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "ResetCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.SetMoveDisable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WaitLoadingWorldPartition_C::SetMoveDisable(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "SetMoveDisable");

	Params::BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WaitLoadingWorldPartition_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WaitLoadingWorldPartition_C", "TickAction");

	Params::BP_Action_WaitLoadingWorldPartition_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

