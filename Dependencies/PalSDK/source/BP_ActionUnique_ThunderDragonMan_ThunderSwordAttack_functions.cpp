#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_classes.hpp"
#include "PalSDK/BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack.BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C.CalcCurrentLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::CalcCurrentLocation(double DeltaTime, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C", "CalcCurrentLocation");

	Params::BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C_CalcCurrentLocation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack.BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C.EndAction
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::EndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C", "EndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack.BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C.ExecuteUbergraph_BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::ExecuteUbergraph_BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C", "ExecuteUbergraph_BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack");

	Params::BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C_ExecuteUbergraph_BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack.BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C.GetAjustedTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::GetAjustedTargetLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C", "GetAjustedTargetLocation");

	Params::BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C_GetAjustedTargetLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack.BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack.BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack.BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C", "TickAction");

	Params::BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack.BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C.UpdateAttackState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::UpdateAttackState(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C", "UpdateAttackState");

	Params::BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C_UpdateAttackState Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}

}

