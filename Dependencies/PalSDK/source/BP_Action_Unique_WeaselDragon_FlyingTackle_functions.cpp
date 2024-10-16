#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_Unique_WeaselDragon_FlyingTackle_classes.hpp"
#include "PalSDK/BP_Action_Unique_WeaselDragon_FlyingTackle_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C.ExecuteUbergraph_BP_Action_Unique_WeaselDragon_FlyingTackle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_WeaselDragon_FlyingTackle_C::ExecuteUbergraph_BP_Action_Unique_WeaselDragon_FlyingTackle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_WeaselDragon_FlyingTackle_C", "ExecuteUbergraph_BP_Action_Unique_WeaselDragon_FlyingTackle");

	Params::BP_Action_Unique_WeaselDragon_FlyingTackle_C_ExecuteUbergraph_BP_Action_Unique_WeaselDragon_FlyingTackle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C.GetTargetPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Position                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_WeaselDragon_FlyingTackle_C::GetTargetPosition(struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_WeaselDragon_FlyingTackle_C", "GetTargetPosition");

	Params::BP_Action_Unique_WeaselDragon_FlyingTackle_C_GetTargetPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}


// Function BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C.Lookat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_WeaselDragon_FlyingTackle_C::Lookat(double Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_WeaselDragon_FlyingTackle_C", "Lookat");

	Params::BP_Action_Unique_WeaselDragon_FlyingTackle_C_Lookat Parms{};

	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Unique_WeaselDragon_FlyingTackle_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_WeaselDragon_FlyingTackle_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C.OnBlendOut_F3019064403B31061FF5A2B76E1C395E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_WeaselDragon_FlyingTackle_C::OnBlendOut_F3019064403B31061FF5A2B76E1C395E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_WeaselDragon_FlyingTackle_C", "OnBlendOut_F3019064403B31061FF5A2B76E1C395E");

	Params::BP_Action_Unique_WeaselDragon_FlyingTackle_C_OnBlendOut_F3019064403B31061FF5A2B76E1C395E Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C.OnCompleted_F3019064403B31061FF5A2B76E1C395E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_WeaselDragon_FlyingTackle_C::OnCompleted_F3019064403B31061FF5A2B76E1C395E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_WeaselDragon_FlyingTackle_C", "OnCompleted_F3019064403B31061FF5A2B76E1C395E");

	Params::BP_Action_Unique_WeaselDragon_FlyingTackle_C_OnCompleted_F3019064403B31061FF5A2B76E1C395E Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Unique_WeaselDragon_FlyingTackle_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_WeaselDragon_FlyingTackle_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C.OnInterrupted_F3019064403B31061FF5A2B76E1C395E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_WeaselDragon_FlyingTackle_C::OnInterrupted_F3019064403B31061FF5A2B76E1C395E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_WeaselDragon_FlyingTackle_C", "OnInterrupted_F3019064403B31061FF5A2B76E1C395E");

	Params::BP_Action_Unique_WeaselDragon_FlyingTackle_C_OnInterrupted_F3019064403B31061FF5A2B76E1C395E Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C.OnNotifyBegin_F3019064403B31061FF5A2B76E1C395E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_WeaselDragon_FlyingTackle_C::OnNotifyBegin_F3019064403B31061FF5A2B76E1C395E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_WeaselDragon_FlyingTackle_C", "OnNotifyBegin_F3019064403B31061FF5A2B76E1C395E");

	Params::BP_Action_Unique_WeaselDragon_FlyingTackle_C_OnNotifyBegin_F3019064403B31061FF5A2B76E1C395E Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C.OnNotifyEnd_F3019064403B31061FF5A2B76E1C395E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_WeaselDragon_FlyingTackle_C::OnNotifyEnd_F3019064403B31061FF5A2B76E1C395E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_WeaselDragon_FlyingTackle_C", "OnNotifyEnd_F3019064403B31061FF5A2B76E1C395E");

	Params::BP_Action_Unique_WeaselDragon_FlyingTackle_C_OnNotifyEnd_F3019064403B31061FF5A2B76E1C395E Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_WeaselDragon_FlyingTackle_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_WeaselDragon_FlyingTackle_C", "TickAction");

	Params::BP_Action_Unique_WeaselDragon_FlyingTackle_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

