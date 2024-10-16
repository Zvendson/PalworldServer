#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_NPCSpawnPointOnly_classes.hpp"
#include "PalSDK/BP_NPCSpawnPointOnly_parameters.hpp"


namespace PalSDK
{

// Function BP_NPCSpawnPointOnly.BP_NPCSpawnPointOnly_C.Get Spawn One Info
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_NPCOnePointSpawnInfo          OneInfo                                                (Parm, OutParm, HasGetValueTypeHash)

void ABP_NPCSpawnPointOnly_C::Get_Spawn_One_Info(struct FF_NPCOnePointSpawnInfo* OneInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCSpawnPointOnly_C", "Get Spawn One Info");

	Params::BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OneInfo != nullptr)
		*OneInfo = std::move(Parms.OneInfo);
}


// Function BP_NPCSpawnPointOnly.BP_NPCSpawnPointOnly_C.GetOneSpawnInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_NPCOnePointSpawnInfo          Info                                                   (Parm, OutParm, HasGetValueTypeHash)

void ABP_NPCSpawnPointOnly_C::GetOneSpawnInfo(struct FF_NPCOnePointSpawnInfo* Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCSpawnPointOnly_C", "GetOneSpawnInfo");

	Params::BP_NPCSpawnPointOnly_C_GetOneSpawnInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);
}

}

