#include "PalServer/Basic.hpp"

#include "PalServer/BP_CombatHeliRpidWeaponComponent_WingMiso_classes.hpp"
#include "PalServer/BP_CombatHeliRpidWeaponComponent_WingMiso_parameters.hpp"


namespace PalServer
{

// Function BP_CombatHeliRpidWeaponComponent_WingMiso.BP_CombatHeliRpidWeaponComponent_WingMiso_C.GetMuzzleTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       MzlTF                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CombatHeliRpidWeaponComponent_WingMiso_C::GetMuzzleTransform(struct FTransform* MzlTF)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeliRpidWeaponComponent_WingMiso_C", "GetMuzzleTransform");

	Params::BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MzlTF != nullptr)
		*MzlTF = std::move(Parms.MzlTF);
}

}

