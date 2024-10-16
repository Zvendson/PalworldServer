#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalPickingGameProcessor_classes.hpp"
#include "PalSDK/BP_PalPickingGameProcessor_parameters.hpp"


namespace PalSDK
{

// Function BP_PalPickingGameProcessor.BP_PalPickingGameProcessor_C.GetSettingDataByDifficultyType
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalPickingGameDifficultyType           DifficultyType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPickingGameSettingData       OutSettingData                                         (Parm, OutParm)

void UBP_PalPickingGameProcessor_C::GetSettingDataByDifficultyType(EPalPickingGameDifficultyType DifficultyType, struct FPalPickingGameSettingData* OutSettingData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPickingGameProcessor_C", "GetSettingDataByDifficultyType");

	Params::BP_PalPickingGameProcessor_C_GetSettingDataByDifficultyType Parms{};

	Parms.DifficultyType = DifficultyType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSettingData != nullptr)
		*OutSettingData = std::move(Parms.OutSettingData);
}

}

