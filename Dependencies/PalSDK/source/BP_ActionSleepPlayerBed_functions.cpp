#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionSleepPlayerBed_classes.hpp"
#include "PalSDK/BP_ActionSleepPlayerBed_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.AttachBedCamera
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::AttachBedCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "AttachBedCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.Check Sleep Loop
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::Check_Sleep_Loop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "Check Sleep Loop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.Detach Bed Camera
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::Detach_Bed_Camera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "Detach Bed Camera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.Disable Movement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::Disable_Movement(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "Disable Movement");

	Params::BP_ActionSleepPlayerBed_C_Disable_Movement Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.DisableInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::DisableInteract(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "DisableInteract");

	Params::BP_ActionSleepPlayerBed_C_DisableInteract Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.DisableLocalPlayerInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::DisableLocalPlayerInput(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "DisableLocalPlayerInput");

	Params::BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.DisableShooter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::DisableShooter(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "DisableShooter");

	Params::BP_ActionSleepPlayerBed_C_DisableShooter Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.ExecuteUbergraph_BP_ActionSleepPlayerBed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::ExecuteUbergraph_BP_ActionSleepPlayerBed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "ExecuteUbergraph_BP_ActionSleepPlayerBed");

	Params::BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.FullRecoveryHPAll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::FullRecoveryHPAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "FullRecoveryHPAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.GetMontage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalGeneralMontageType                  GeneralMontage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     Montage                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::GetMontage(EPalGeneralMontageType GeneralMontage, class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "GetMontage");

	Params::BP_ActionSleepPlayerBed_C_GetMontage Parms{};

	Parms.GeneralMontage = GeneralMontage;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.IsPartyFullRecoverd
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Completed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::IsPartyFullRecoverd(bool* Completed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "IsPartyFullRecoverd");

	Params::BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Completed != nullptr)
		*Completed = Parms.Completed;
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.Movement Set Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::Movement_Set_Active(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "Movement Set Active");

	Params::BP_ActionSleepPlayerBed_C_Movement_Set_Active Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124");

	Params::BP_ActionSleepPlayerBed_C_OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124");

	Params::BP_ActionSleepPlayerBed_C_OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnGetupPlayerBedFromModel
// (Event, Public, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::OnGetupPlayerBedFromModel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "OnGetupPlayerBedFromModel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124");

	Params::BP_ActionSleepPlayerBed_C_OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124");

	Params::BP_ActionSleepPlayerBed_C_OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124");

	Params::BP_ActionSleepPlayerBed_C_OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnPreNightSkip
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::OnPreNightSkip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "OnPreNightSkip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnSleepEndProcess
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::OnSleepEndProcess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "OnSleepEndProcess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnSleepLoop
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::OnSleepLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "OnSleepLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.SleepEndOtomo
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::SleepEndOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "SleepEndOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.SleepStartOtomo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::SleepStartOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "SleepStartOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSleepPlayerBed_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "TickAction");

	Params::BP_ActionSleepPlayerBed_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.TriggerGetup
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionSleepPlayerBed_C::TriggerGetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "TriggerGetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.IsSleepLooping
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_ActionSleepPlayerBed_C::IsSleepLooping() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSleepPlayerBed_C", "IsSleepLooping");

	Params::BP_ActionSleepPlayerBed_C_IsSleepLooping Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

