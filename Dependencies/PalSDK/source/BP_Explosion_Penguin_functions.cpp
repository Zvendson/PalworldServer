#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Explosion_Penguin_classes.hpp"
#include "PalSDK/BP_Explosion_Penguin_parameters.hpp"


namespace PalSDK
{

// Function BP_Explosion_Penguin.BP_Explosion_Penguin_C.GetWeaponAttackType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalAttackType                          AttackType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_Penguin_C::GetWeaponAttackType(EPalAttackType* AttackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_Penguin_C", "GetWeaponAttackType");

	Params::BP_Explosion_Penguin_C_GetWeaponAttackType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AttackType != nullptr)
		*AttackType = Parms.AttackType;
}

}

