#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_Glass_SlantedRoof_classes.hpp"
#include "PalSDK/BP_BuildObject_Glass_SlantedRoof_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_Glass_SlantedRoof.BP_BuildObject_Glass_SlantedRoof_C.GetStaticMeshComponents
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UStaticMeshComponent*>     OutComponents                                          (Parm, OutParm, ContainsInstancedReference)

void ABP_BuildObject_Glass_SlantedRoof_C::GetStaticMeshComponents(TArray<class UStaticMeshComponent*>* OutComponents) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_SlantedRoof_C", "GetStaticMeshComponents");

	Params::BP_BuildObject_Glass_SlantedRoof_C_GetStaticMeshComponents Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutComponents != nullptr)
		*OutComponents = std::move(Parms.OutComponents);
}


// Function BP_BuildObject_Glass_SlantedRoof.BP_BuildObject_Glass_SlantedRoof_C.GetStaticMeshInfos
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FPalStaticMeshImposterStaticMeshInfo>OutStaticMeshInfo                                      (Parm, OutParm)

void ABP_BuildObject_Glass_SlantedRoof_C::GetStaticMeshInfos(TArray<struct FPalStaticMeshImposterStaticMeshInfo>* OutStaticMeshInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Glass_SlantedRoof_C", "GetStaticMeshInfos");

	Params::BP_BuildObject_Glass_SlantedRoof_C_GetStaticMeshInfos Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutStaticMeshInfo != nullptr)
		*OutStaticMeshInfo = std::move(Parms.OutStaticMeshInfo);
}

}

