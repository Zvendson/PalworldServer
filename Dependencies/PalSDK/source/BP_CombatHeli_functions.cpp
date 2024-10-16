#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_CombatHeli_classes.hpp"
#include "PalSDK/BP_CombatHeli_parameters.hpp"


namespace PalSDK
{

// Function BP_CombatHeli.BP_CombatHeli_C.ExecuteUbergraph_BP_CombatHeli
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatHeli_C::ExecuteUbergraph_BP_CombatHeli(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeli_C", "ExecuteUbergraph_BP_CombatHeli");

	Params::BP_CombatHeli_C_ExecuteUbergraph_BP_CombatHeli Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CombatHeli.BP_CombatHeli_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CombatHeli_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeli_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CombatHeli.BP_CombatHeli_C.SetHideAll
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CombatHeli_C::SetHideAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeli_C", "SetHideAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CombatHeli.BP_CombatHeli_C.ShootMGBullet
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CombatHeli_C::ShootMGBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeli_C", "ShootMGBullet");

	UObject::ProcessEvent(Func, nullptr);
}

}

