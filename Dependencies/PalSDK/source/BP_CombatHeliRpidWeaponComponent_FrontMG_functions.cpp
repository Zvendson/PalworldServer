#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_CombatHeliRpidWeaponComponent_FrontMG_classes.hpp"
#include "PalSDK/BP_CombatHeliRpidWeaponComponent_FrontMG_parameters.hpp"


namespace PalSDK
{

// Function BP_CombatHeliRpidWeaponComponent_FrontMG.BP_CombatHeliRpidWeaponComponent_FrontMG_C.ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CombatHeliRpidWeaponComponent_FrontMG_C::ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeliRpidWeaponComponent_FrontMG_C", "ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG");

	Params::BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CombatHeliRpidWeaponComponent_FrontMG.BP_CombatHeliRpidWeaponComponent_FrontMG_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CombatHeliRpidWeaponComponent_FrontMG_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeliRpidWeaponComponent_FrontMG_C", "ReceiveTick");

	Params::BP_CombatHeliRpidWeaponComponent_FrontMG_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

