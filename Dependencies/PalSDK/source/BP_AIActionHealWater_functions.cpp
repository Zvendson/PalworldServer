#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIActionHealWater_classes.hpp"
#include "PalSDK/BP_AIActionHealWater_parameters.hpp"


namespace PalSDK
{

// Function BP_AIActionHealWater.BP_AIActionHealWater_C.StartPartnerSkill
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIActionHealWater_C::StartPartnerSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "StartPartnerSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionHealWater.BP_AIActionHealWater_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealWater_C::Setup(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "Setup");

	Params::BP_AIActionHealWater_C_Setup Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionHealWater.BP_AIActionHealWater_C.SetMoveDisableFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealWater_C::SetMoveDisableFlag(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "SetMoveDisableFlag");

	Params::BP_AIActionHealWater_C_SetMoveDisableFlag Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionHealWater.BP_AIActionHealWater_C.SetDisableThrowPalFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealWater_C::SetDisableThrowPalFlag(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "SetDisableThrowPalFlag");

	Params::BP_AIActionHealWater_C_SetDisableThrowPalFlag Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionHealWater.BP_AIActionHealWater_C.OnActionNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActionBase*                   Action                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealWater_C::OnActionNotify(const class UPalActionBase* Action, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "OnActionNotify");

	Params::BP_AIActionHealWater_C_OnActionNotify Parms{};

	Parms.Action = Action;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionHealWater.BP_AIActionHealWater_C.GetHealValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   HealValue                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealWater_C::GetHealValue(int32* HealValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "GetHealValue");

	Params::BP_AIActionHealWater_C_GetHealValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HealValue != nullptr)
		*HealValue = Parms.HealValue;
}


// Function BP_AIActionHealWater.BP_AIActionHealWater_C.ExecuteUbergraph_BP_AIActionHealWater
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealWater_C::ExecuteUbergraph_BP_AIActionHealWater(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "ExecuteUbergraph_BP_AIActionHealWater");

	Params::BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionHealWater.BP_AIActionHealWater_C.EndPartnerSkill
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIActionHealWater_C::EndPartnerSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "EndPartnerSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionHealWater.BP_AIActionHealWater_C.AddSkillLog
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIActionHealWater_C::AddSkillLog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "AddSkillLog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionHealWater.BP_AIActionHealWater_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealWater_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "ActionTick");

	Params::BP_AIActionHealWater_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionHealWater.BP_AIActionHealWater_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealWater_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "ActionStart");

	Params::BP_AIActionHealWater_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionHealWater.BP_AIActionHealWater_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealWater_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealWater_C", "ActionFinished");

	Params::BP_AIActionHealWater_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}

}

