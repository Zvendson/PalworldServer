#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_UniqueSkill_Ronin_Iai_classes.hpp"
#include "PalSDK/BP_Action_UniqueSkill_Ronin_Iai_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.Attack
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_UniqueSkill_Ronin_Iai_C::Attack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "Attack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.GetUniqueActionTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           TargetActor                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::GetUniqueActionTarget(class AActor** TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "GetUniqueActionTarget");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetActor != nullptr)
		*TargetActor = Parms.TargetActor;
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnBlendOut_732CA01643E23EB854BEF392184417D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnBlendOut_732CA01643E23EB854BEF392184417D7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnBlendOut_732CA01643E23EB854BEF392184417D7");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_732CA01643E23EB854BEF392184417D7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnCompleted_732CA01643E23EB854BEF392184417D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnCompleted_732CA01643E23EB854BEF392184417D7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnCompleted_732CA01643E23EB854BEF392184417D7");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_732CA01643E23EB854BEF392184417D7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnCompleted_DC63DA2F428FC4018668BB9B92E626E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnCompleted_DC63DA2F428FC4018668BB9B92E626E6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnCompleted_DC63DA2F428FC4018668BB9B92E626E6");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_DC63DA2F428FC4018668BB9B92E626E6 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnInterrupted_732CA01643E23EB854BEF392184417D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnInterrupted_732CA01643E23EB854BEF392184417D7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnInterrupted_732CA01643E23EB854BEF392184417D7");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_732CA01643E23EB854BEF392184417D7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnNotifyBegin_732CA01643E23EB854BEF392184417D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnNotifyBegin_732CA01643E23EB854BEF392184417D7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnNotifyBegin_732CA01643E23EB854BEF392184417D7");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_732CA01643E23EB854BEF392184417D7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnNotifyEnd_732CA01643E23EB854BEF392184417D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnNotifyEnd_732CA01643E23EB854BEF392184417D7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnNotifyEnd_732CA01643E23EB854BEF392184417D7");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_732CA01643E23EB854BEF392184417D7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.SetPalMoveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::SetPalMoveState(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "SetPalMoveState");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UniqueSkill_Ronin_Iai_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UniqueSkill_Ronin_Iai_C", "TickAction");

	Params::BP_Action_UniqueSkill_Ronin_Iai_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

