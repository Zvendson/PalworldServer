#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_OtomoDefault_classes.hpp"
#include "PalSDK/BP_AIAction_OtomoDefault_parameters.hpp"


namespace PalSDK
{

// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.ExecuteUbergraph_BP_AIAction_OtomoDefault
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_OtomoDefault_C::ExecuteUbergraph_BP_AIAction_OtomoDefault(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "ExecuteUbergraph_BP_AIAction_OtomoDefault");

	Params::BP_AIAction_OtomoDefault_C_ExecuteUbergraph_BP_AIAction_OtomoDefault Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.Set Action Berserker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_OtomoDefault_C::Set_Action_Berserker(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "Set Action Berserker");

	Params::BP_AIAction_OtomoDefault_C_Set_Action_Berserker Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Class_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_OtomoDefault_C::SetAction(class UClass* Class_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetAction");

	Params::BP_AIAction_OtomoDefault_C_SetAction Parms{};

	Parms.Class_0 = Class_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionBaseCampWork
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_OtomoDefault_C::SetActionBaseCampWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetActionBaseCampWork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionCombat
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_OtomoDefault_C::SetActionCombat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetActionCombat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionComposite
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Class_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_OtomoDefault_C::SetActionComposite(class UClass* Class_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetActionComposite");

	Params::BP_AIAction_OtomoDefault_C_SetActionComposite Parms{};

	Parms.Class_0 = Class_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionFollowTrainer
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_OtomoDefault_C::SetActionFollowTrainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetActionFollowTrainer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionWork
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_OtomoDefault_C::SetActionWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetActionWork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetOtomoBaseCampAction
// (Event, Protected, BlueprintEvent)

void UBP_AIAction_OtomoDefault_C::SetOtomoBaseCampAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetOtomoBaseCampAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetOtomoBerserker
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_OtomoDefault_C::SetOtomoBerserker(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetOtomoBerserker");

	Params::BP_AIAction_OtomoDefault_C_SetOtomoBerserker Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetOtomoCombatAction
// (Event, Protected, BlueprintEvent)

void UBP_AIAction_OtomoDefault_C::SetOtomoCombatAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetOtomoCombatAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetOtomoFollowAction
// (Event, Protected, BlueprintEvent)

void UBP_AIAction_OtomoDefault_C::SetOtomoFollowAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetOtomoFollowAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetOtomoWorkAction
// (Event, Protected, BlueprintEvent)

void UBP_AIAction_OtomoDefault_C::SetOtomoWorkAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetOtomoWorkAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.ShouldSetCombatAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AIAction_OtomoDefault_C::ShouldSetCombatAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "ShouldSetCombatAction");

	Params::BP_AIAction_OtomoDefault_C_ShouldSetCombatAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

