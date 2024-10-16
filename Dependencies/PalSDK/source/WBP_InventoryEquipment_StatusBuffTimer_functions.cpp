#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_InventoryEquipment_StatusBuffTimer_classes.hpp"
#include "PalSDK/WBP_InventoryEquipment_StatusBuffTimer_parameters.hpp"


namespace PalSDK
{

// Function WBP_InventoryEquipment_StatusBuffTimer.WBP_InventoryEquipment_StatusBuffTimer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InventoryEquipment_StatusBuffTimer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_StatusBuffTimer_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryEquipment_StatusBuffTimer.WBP_InventoryEquipment_StatusBuffTimer_C.ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_StatusBuffTimer_C::ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_StatusBuffTimer_C", "ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer");

	Params::WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_StatusBuffTimer.WBP_InventoryEquipment_StatusBuffTimer_C.SetFoodBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalFoodStatusEffectType                BuffType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsBuff                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter* IndividualParam                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRegene                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_StatusBuffTimer_C::SetFoodBuff(EPalFoodStatusEffectType BuffType, bool IsBuff, class UPalIndividualCharacterParameter* IndividualParam, bool IsRegene)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_StatusBuffTimer_C", "SetFoodBuff");

	Params::WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff Parms{};

	Parms.BuffType = BuffType;
	Parms.IsBuff = IsBuff;
	Parms.IndividualParam = IndividualParam;
	Parms.IsRegene = IsRegene;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_StatusBuffTimer.WBP_InventoryEquipment_StatusBuffTimer_C.UpdateStatusTime
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryEquipment_StatusBuffTimer_C::UpdateStatusTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_StatusBuffTimer_C", "UpdateStatusTime");

	UObject::ProcessEvent(Func, nullptr);
}

}

