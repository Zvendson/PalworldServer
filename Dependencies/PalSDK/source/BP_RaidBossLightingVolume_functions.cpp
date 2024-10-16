#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_RaidBossLightingVolume_classes.hpp"


namespace PalSDK
{

// Function BP_RaidBossLightingVolume.BP_RaidBossLightingVolume_C.DeleteSelfActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RaidBossLightingVolume_C::DeleteSelfActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidBossLightingVolume_C", "DeleteSelfActor");

	UObject::ProcessEvent(Func, nullptr);
}

}

