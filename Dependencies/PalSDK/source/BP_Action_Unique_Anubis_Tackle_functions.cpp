#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_Unique_Anubis_Tackle_classes.hpp"
#include "PalSDK/BP_Action_Unique_Anubis_Tackle_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.ChargeAndRotate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Anubis_Tackle_C::ChargeAndRotate(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "ChargeAndRotate");

	Params::BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.CheckEndTackle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Anubis_Tackle_C::CheckEndTackle(double DeltaTime, bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "CheckEndTackle");

	Params::BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Anubis_Tackle_C::ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle");

	Params::BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.GetDesiredTransformOfOmenEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ScaleY                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ScaleZ                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Anubis_Tackle_C::GetDesiredTransformOfOmenEffect(double ScaleY, double ScaleZ, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "GetDesiredTransformOfOmenEffect");

	Params::BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect Parms{};

	Parms.ScaleY = ScaleY;
	Parms.ScaleZ = ScaleZ;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Unique_Anubis_Tackle_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Unique_Anubis_Tackle_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.OnMontageNotifyBeginDelegate_イベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Anubis_Tackle_C::OnMontageNotifyBeginDelegate______________0(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "OnMontageNotifyBeginDelegate_イベント_0");

	Params::BP_Action_Unique_Anubis_Tackle_C_OnMontageNotifyBeginDelegate______________0 Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.PlayEndMontage
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_Unique_Anubis_Tackle_C::PlayEndMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "PlayEndMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.SetHiddenAllNiagara
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Action_Unique_Anubis_Tackle_C::SetHiddenAllNiagara()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "SetHiddenAllNiagara");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.StopAllMontage
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_Unique_Anubis_Tackle_C::StopAllMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "StopAllMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.StopMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Anubis_Tackle_C::StopMovement(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "StopMovement");

	Params::BP_Action_Unique_Anubis_Tackle_C_StopMovement Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.TackleMotament
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Anubis_Tackle_C::TackleMotament(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "TackleMotament");

	Params::BP_Action_Unique_Anubis_Tackle_C_TackleMotament Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.TackleMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Anubis_Tackle_C::TackleMovement(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "TackleMovement");

	Params::BP_Action_Unique_Anubis_Tackle_C_TackleMovement Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Anubis_Tackle_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Anubis_Tackle_C", "TickAction");

	Params::BP_Action_Unique_Anubis_Tackle_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

