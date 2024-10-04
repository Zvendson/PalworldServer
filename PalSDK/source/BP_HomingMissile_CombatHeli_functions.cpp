#include "PalServer/Basic.hpp"

#include "PalServer/BP_HomingMissile_CombatHeli_classes.hpp"
#include "PalServer/BP_HomingMissile_CombatHeli_parameters.hpp"


namespace PalServer
{

// Function BP_HomingMissile_CombatHeli.BP_HomingMissile_CombatHeli_C.Find Target Actor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    PalCharacter                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_HomingMissile_CombatHeli_C::Find_Target_Actor(class APalCharacter** PalCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingMissile_CombatHeli_C", "Find Target Actor");

	Params::BP_HomingMissile_CombatHeli_C_Find_Target_Actor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalCharacter != nullptr)
		*PalCharacter = Parms.PalCharacter;
}

}

