#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalFunnelCharacterManager_classes.hpp"
#include "PalServer/BP_PalFunnelCharacterManager_parameters.hpp"


namespace PalServer
{

// Function BP_PalFunnelCharacterManager.BP_PalFunnelCharacterManager_C.SetFunnelCharacterActive
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalFunnelCharacter*              FunnelCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalFunnelCharacterManager_C::SetFunnelCharacterActive(class APalFunnelCharacter* FunnelCharacter, bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalFunnelCharacterManager_C", "SetFunnelCharacterActive");

	Params::BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive Parms{};

	Parms.FunnelCharacter = FunnelCharacter;
	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

