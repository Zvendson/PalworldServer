#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_RocketBullet_Unique_classes.hpp"
#include "PalSDK/BP_RocketBullet_Unique_parameters.hpp"


namespace PalSDK
{

// Function BP_RocketBullet_Unique.BP_RocketBullet_Unique_C.GetExplosionClass
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           ExplosionClass                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RocketBullet_Unique_C::GetExplosionClass(class UClass** ExplosionClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketBullet_Unique_C", "GetExplosionClass");

	Params::BP_RocketBullet_Unique_C_GetExplosionClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ExplosionClass != nullptr)
		*ExplosionClass = Parms.ExplosionClass;
}

}

