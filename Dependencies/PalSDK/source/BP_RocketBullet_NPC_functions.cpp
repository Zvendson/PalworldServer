#include "PalServer/Basic.hpp"

#include "PalServer/BP_RocketBullet_NPC_classes.hpp"
#include "PalServer/BP_RocketBullet_NPC_parameters.hpp"


namespace PalServer
{

// Function BP_RocketBullet_NPC.BP_RocketBullet_NPC_C.GetExplosionClass
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           ExplosionClass                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RocketBullet_NPC_C::GetExplosionClass(class UClass** ExplosionClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketBullet_NPC_C", "GetExplosionClass");

	Params::BP_RocketBullet_NPC_C_GetExplosionClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ExplosionClass != nullptr)
		*ExplosionClass = Parms.ExplosionClass;
}

}

