#include "PalServer/Basic.hpp"

#include "PalServer/BP_UniqueSkillModule_Tackle_classes.hpp"
#include "PalServer/BP_UniqueSkillModule_Tackle_parameters.hpp"


namespace PalServer
{

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.ControllInput
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::ControllInput(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "ControllInput");

	Params::BP_UniqueSkillModule_Tackle_C_ControllInput Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.ExecuteUbergraph_BP_UniqueSkillModule_Tackle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::ExecuteUbergraph_BP_UniqueSkillModule_Tackle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "ExecuteUbergraph_BP_UniqueSkillModule_Tackle");

	Params::BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.GetCurrentState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EAction_Unique_Tackle                   State_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::GetCurrentState(EAction_Unique_Tackle* State_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "GetCurrentState");

	Params::BP_UniqueSkillModule_Tackle_C_GetCurrentState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (State_0 != nullptr)
		*State_0 = Parms.State_0;
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnBeginModule
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_UniqueSkillModule_Tackle_C::OnBeginModule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnBeginModule");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnBlendOut_26A182C445668EE79190E6AE1D795120
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnBlendOut_26A182C445668EE79190E6AE1D795120(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnBlendOut_26A182C445668EE79190E6AE1D795120");

	Params::BP_UniqueSkillModule_Tackle_C_OnBlendOut_26A182C445668EE79190E6AE1D795120 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnCompleted_26A182C445668EE79190E6AE1D795120
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnCompleted_26A182C445668EE79190E6AE1D795120(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnCompleted_26A182C445668EE79190E6AE1D795120");

	Params::BP_UniqueSkillModule_Tackle_C_OnCompleted_26A182C445668EE79190E6AE1D795120 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnCompletedEndMontageDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_UniqueSkillModule_Tackle_C::OnCompletedEndMontageDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnCompletedEndMontageDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnEndAttack
// (BlueprintCallable, BlueprintEvent)

void UBP_UniqueSkillModule_Tackle_C::OnEndAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnEndAttack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnEndAttackDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_UniqueSkillModule_Tackle_C::OnEndAttackDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnEndAttackDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnEndModule
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_UniqueSkillModule_Tackle_C::OnEndModule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnEndModule");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnInterrupted_26A182C445668EE79190E6AE1D795120
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnInterrupted_26A182C445668EE79190E6AE1D795120(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnInterrupted_26A182C445668EE79190E6AE1D795120");

	Params::BP_UniqueSkillModule_Tackle_C_OnInterrupted_26A182C445668EE79190E6AE1D795120 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnMontageNotifyDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnMontageNotifyDelegate__DelegateSignature(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnMontageNotifyDelegate__DelegateSignature");

	Params::BP_UniqueSkillModule_Tackle_C_OnMontageNotifyDelegate__DelegateSignature Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnMontageNotifyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnMontageNotifyEvent(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnMontageNotifyEvent");

	Params::BP_UniqueSkillModule_Tackle_C_OnMontageNotifyEvent Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnNotifyBegin_26A182C445668EE79190E6AE1D795120
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnNotifyBegin_26A182C445668EE79190E6AE1D795120(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnNotifyBegin_26A182C445668EE79190E6AE1D795120");

	Params::BP_UniqueSkillModule_Tackle_C_OnNotifyBegin_26A182C445668EE79190E6AE1D795120 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnNotifyEnd_26A182C445668EE79190E6AE1D795120
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnNotifyEnd_26A182C445668EE79190E6AE1D795120(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnNotifyEnd_26A182C445668EE79190E6AE1D795120");

	Params::BP_UniqueSkillModule_Tackle_C_OnNotifyEnd_26A182C445668EE79190E6AE1D795120 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnSpawnedLoopEffect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SkillEffectBase_C*            LoopEffect                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnSpawnedLoopEffect__DelegateSignature(class ABP_SkillEffectBase_C* LoopEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnSpawnedLoopEffect__DelegateSignature");

	Params::BP_UniqueSkillModule_Tackle_C_OnSpawnedLoopEffect__DelegateSignature Parms{};

	Parms.LoopEffect = LoopEffect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnStartTossin
// (BlueprintCallable, BlueprintEvent)

void UBP_UniqueSkillModule_Tackle_C::OnStartTossin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnStartTossin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.SetFlagName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             FlagName_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::SetFlagName(class FName FlagName_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "SetFlagName");

	Params::BP_UniqueSkillModule_Tackle_C_SetFlagName Parms{};

	Parms.FlagName_0 = FlagName_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.TerminateMotion
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_UniqueSkillModule_Tackle_C::TerminateMotion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "TerminateMotion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.TickModule
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::TickModule(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "TickModule");

	Params::BP_UniqueSkillModule_Tackle_C_TickModule Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.UpdateVelocity
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_UniqueSkillModule_Tackle_C::UpdateVelocity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "UpdateVelocity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.UpdateYaw
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_UniqueSkillModule_Tackle_C::UpdateYaw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "UpdateYaw");

	UObject::ProcessEvent(Func, nullptr);
}

}

