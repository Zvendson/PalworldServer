#include "PalServer/Basic.hpp"

#include "PalServer/BP_Action_Unique_GrassPanda_MusclePunch_classes.hpp"
#include "PalServer/BP_Action_Unique_GrassPanda_MusclePunch_parameters.hpp"


namespace PalServer
{

// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.EndAttack
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::EndAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "EndAttack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.ExecuteUbergraph_BP_Action_Unique_GrassPanda_MusclePunch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::ExecuteUbergraph_BP_Action_Unique_GrassPanda_MusclePunch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "ExecuteUbergraph_BP_Action_Unique_GrassPanda_MusclePunch");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_ExecuteUbergraph_BP_Action_Unique_GrassPanda_MusclePunch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.Get Target Rotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         TargetRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::Get_Target_Rotation(struct FRotator* TargetRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "Get Target Rotation");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_Get_Target_Rotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetRotation != nullptr)
		*TargetRotation = std::move(Parms.TargetRotation);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.GetEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::GetEffect(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "GetEffect");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_GetEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.GetHeadCollisionProfile
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             LastCollisionProfile                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::GetHeadCollisionProfile(class FName* LastCollisionProfile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "GetHeadCollisionProfile");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_GetHeadCollisionProfile Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LastCollisionProfile != nullptr)
		*LastCollisionProfile = Parms.LastCollisionProfile;
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.GetMontageEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                     NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::GetMontageEnd(class UAnimMontage** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "GetMontageEnd");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_GetMontageEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.GetMontageLoop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                     NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::GetMontageLoop(class UAnimMontage** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "GetMontageLoop");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_GetMontageLoop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.GetMontageStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                     NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::GetMontageStart(class UAnimMontage** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "GetMontageStart");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_GetMontageStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.MoveStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::MoveStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "MoveStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.MoveStop
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::MoveStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "MoveStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnBlendOut_10A7C1724455A4049513A19389414F12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnBlendOut_10A7C1724455A4049513A19389414F12(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnBlendOut_10A7C1724455A4049513A19389414F12");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnBlendOut_10A7C1724455A4049513A19389414F12 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnBlendOut_6AA8BA2B484720BAF1D727AC203160F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnBlendOut_6AA8BA2B484720BAF1D727AC203160F4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnBlendOut_6AA8BA2B484720BAF1D727AC203160F4");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnBlendOut_6AA8BA2B484720BAF1D727AC203160F4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnBlendOut_D731A4E4432F7D2DB75E0DB1E9FB5D3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnBlendOut_D731A4E4432F7D2DB75E0DB1E9FB5D3B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnBlendOut_D731A4E4432F7D2DB75E0DB1E9FB5D3B");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnBlendOut_D731A4E4432F7D2DB75E0DB1E9FB5D3B Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnCompleted_10A7C1724455A4049513A19389414F12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnCompleted_10A7C1724455A4049513A19389414F12(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnCompleted_10A7C1724455A4049513A19389414F12");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnCompleted_10A7C1724455A4049513A19389414F12 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnCompleted_6AA8BA2B484720BAF1D727AC203160F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnCompleted_6AA8BA2B484720BAF1D727AC203160F4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnCompleted_6AA8BA2B484720BAF1D727AC203160F4");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnCompleted_6AA8BA2B484720BAF1D727AC203160F4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnCompleted_D731A4E4432F7D2DB75E0DB1E9FB5D3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnCompleted_D731A4E4432F7D2DB75E0DB1E9FB5D3B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnCompleted_D731A4E4432F7D2DB75E0DB1E9FB5D3B");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnCompleted_D731A4E4432F7D2DB75E0DB1E9FB5D3B Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnInterrupted_10A7C1724455A4049513A19389414F12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnInterrupted_10A7C1724455A4049513A19389414F12(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnInterrupted_10A7C1724455A4049513A19389414F12");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnInterrupted_10A7C1724455A4049513A19389414F12 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnInterrupted_6AA8BA2B484720BAF1D727AC203160F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnInterrupted_6AA8BA2B484720BAF1D727AC203160F4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnInterrupted_6AA8BA2B484720BAF1D727AC203160F4");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnInterrupted_6AA8BA2B484720BAF1D727AC203160F4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnInterrupted_D731A4E4432F7D2DB75E0DB1E9FB5D3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnInterrupted_D731A4E4432F7D2DB75E0DB1E9FB5D3B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnInterrupted_D731A4E4432F7D2DB75E0DB1E9FB5D3B");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnInterrupted_D731A4E4432F7D2DB75E0DB1E9FB5D3B Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnLoaded_0E9A405A4328B5C7419FF5B7C6198299
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnLoaded_0E9A405A4328B5C7419FF5B7C6198299(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnLoaded_0E9A405A4328B5C7419FF5B7C6198299");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnLoaded_0E9A405A4328B5C7419FF5B7C6198299 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnMontageNotify_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnMontageNotify_End(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnMontageNotify_End");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnMontageNotify_End Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnMontageNotify_Loop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnMontageNotify_Loop(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnMontageNotify_Loop");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnMontageNotify_Loop Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnMontageNotify_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnMontageNotify_Start(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnMontageNotify_Start");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnMontageNotify_Start Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnNotifyBegin_10A7C1724455A4049513A19389414F12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnNotifyBegin_10A7C1724455A4049513A19389414F12(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnNotifyBegin_10A7C1724455A4049513A19389414F12");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnNotifyBegin_10A7C1724455A4049513A19389414F12 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnNotifyBegin_6AA8BA2B484720BAF1D727AC203160F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnNotifyBegin_6AA8BA2B484720BAF1D727AC203160F4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnNotifyBegin_6AA8BA2B484720BAF1D727AC203160F4");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnNotifyBegin_6AA8BA2B484720BAF1D727AC203160F4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnNotifyBegin_D731A4E4432F7D2DB75E0DB1E9FB5D3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnNotifyBegin_D731A4E4432F7D2DB75E0DB1E9FB5D3B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnNotifyBegin_D731A4E4432F7D2DB75E0DB1E9FB5D3B");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnNotifyBegin_D731A4E4432F7D2DB75E0DB1E9FB5D3B Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnNotifyEnd_10A7C1724455A4049513A19389414F12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnNotifyEnd_10A7C1724455A4049513A19389414F12(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnNotifyEnd_10A7C1724455A4049513A19389414F12");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnNotifyEnd_10A7C1724455A4049513A19389414F12 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnNotifyEnd_6AA8BA2B484720BAF1D727AC203160F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnNotifyEnd_6AA8BA2B484720BAF1D727AC203160F4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnNotifyEnd_6AA8BA2B484720BAF1D727AC203160F4");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnNotifyEnd_6AA8BA2B484720BAF1D727AC203160F4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.OnNotifyEnd_D731A4E4432F7D2DB75E0DB1E9FB5D3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::OnNotifyEnd_D731A4E4432F7D2DB75E0DB1E9FB5D3B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "OnNotifyEnd_D731A4E4432F7D2DB75E0DB1E9FB5D3B");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_OnNotifyEnd_D731A4E4432F7D2DB75E0DB1E9FB5D3B Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.RotateToTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::RotateToTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "RotateToTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.SetHeadCollisionProfile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NewCollisionProfile                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::SetHeadCollisionProfile(class FName NewCollisionProfile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "SetHeadCollisionProfile");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_SetHeadCollisionProfile Parms{};

	Parms.NewCollisionProfile = NewCollisionProfile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.SetHeadCollisionResponseToPawns
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECollisionResponse                      NewResponseToPlayerPawn                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECollisionResponse                      NewResponseToPawn                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::SetHeadCollisionResponseToPawns(ECollisionResponse NewResponseToPlayerPawn, ECollisionResponse NewResponseToPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "SetHeadCollisionResponseToPawns");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_SetHeadCollisionResponseToPawns Parms{};

	Parms.NewResponseToPlayerPawn = NewResponseToPlayerPawn;
	Parms.NewResponseToPawn = NewResponseToPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.SpawnSkillEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*              SpawnedEffect                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::SpawnSkillEffect(const struct FTransform& SpawnTransform, class FName SocketName, class APalSkillEffectBase** SpawnedEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "SpawnSkillEffect");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_SpawnSkillEffect Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedEffect != nullptr)
		*SpawnedEffect = Parms.SpawnedEffect;
}


// Function BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_GrassPanda_MusclePunch_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_GrassPanda_MusclePunch_C", "TickAction");

	Params::BP_Action_Unique_GrassPanda_MusclePunch_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

