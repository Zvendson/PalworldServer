#include "PalSDK/Basic.hpp"

#include "PalSDK/BPI_SpawnPointInfo_classes.hpp"
#include "PalSDK/BPI_SpawnPointInfo_parameters.hpp"


namespace PalSDK
{

// Function BPI_SpawnPointInfo.BPI_SpawnPointInfo_C.GetOneSpawnInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_NPCOnePointSpawnInfo          Info                                                   (Parm, OutParm, HasGetValueTypeHash)

void IBPI_SpawnPointInfo_C::GetOneSpawnInfo(struct FF_NPCOnePointSpawnInfo* Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SpawnPointInfo_C", "GetOneSpawnInfo");

	Params::BPI_SpawnPointInfo_C_GetOneSpawnInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);
}

}

