#include "PalServer/Basic.hpp"

#include "PalServer/BP_VolcanicMonster_classes.hpp"
#include "PalServer/BP_VolcanicMonster_parameters.hpp"


namespace PalServer
{

// Function BP_VolcanicMonster.BP_VolcanicMonster_C.GetVisual_ExceptMainMesh_SyncAnyway
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*>          OutComponent                                           (Parm, OutParm, ContainsInstancedReference)

void ABP_VolcanicMonster_C::GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolcanicMonster_C", "GetVisual_ExceptMainMesh_SyncAnyway");

	Params::BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutComponent != nullptr)
		*OutComponent = std::move(Parms.OutComponent);
}

}

