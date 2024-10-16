#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Ammo_Rocket_classes.hpp"
#include "PalSDK/BP_Ammo_Rocket_parameters.hpp"


namespace PalSDK
{

// Function BP_Ammo_Rocket.BP_Ammo_Rocket_C.SetTranformForReload
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       AmmoReloadingTransform                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ammo_Rocket_C::SetTranformForReload(struct FTransform* AmmoReloadingTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ammo_Rocket_C", "SetTranformForReload");

	Params::BP_Ammo_Rocket_C_SetTranformForReload Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoReloadingTransform != nullptr)
		*AmmoReloadingTransform = std::move(Parms.AmmoReloadingTransform);
}


// Function BP_Ammo_Rocket.BP_Ammo_Rocket_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Ammo_Rocket_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ammo_Rocket_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

