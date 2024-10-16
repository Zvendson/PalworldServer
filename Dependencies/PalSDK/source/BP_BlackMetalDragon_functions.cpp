#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BlackMetalDragon_classes.hpp"
#include "PalSDK/BP_BlackMetalDragon_parameters.hpp"


namespace PalSDK
{

// Function BP_BlackMetalDragon.BP_BlackMetalDragon_C.GetVisual_ExceptMainMesh_SyncAnyway
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*>          OutComponent                                           (Parm, OutParm, ContainsInstancedReference)

void ABP_BlackMetalDragon_C::GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BlackMetalDragon_C", "GetVisual_ExceptMainMesh_SyncAnyway");

	Params::BP_BlackMetalDragon_C_GetVisual_ExceptMainMesh_SyncAnyway Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutComponent != nullptr)
		*OutComponent = std::move(Parms.OutComponent);
}

}

