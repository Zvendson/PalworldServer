#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PlayerSideInfo_Separated_classes.hpp"
#include "PalServer/WBP_PlayerSideInfo_Separated_parameters.hpp"


namespace PalServer
{

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.DisableFirstSummonPalGuide
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::DisableFirstSummonPalGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "DisableFirstSummonPalGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.EnableFirstSummonPalGuide
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::EnableFirstSummonPalGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "EnableFirstSummonPalGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.ExecuteUbergraph_WBP_PlayerSideInfo_Separated
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSideInfo_Separated_C::ExecuteUbergraph_WBP_PlayerSideInfo_Separated(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "ExecuteUbergraph_WBP_PlayerSideInfo_Separated");

	Params::WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnAim
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::OnAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnChangedBodyTenperatureState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBodyTemperatureState                BodyState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSideInfo_Separated_C::OnChangedBodyTenperatureState(EPalBodyTemperatureState BodyState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnChangedBodyTenperatureState");

	Params::WBP_PlayerSideInfo_Separated_C_OnChangedBodyTenperatureState Parms{};

	Parms.BodyState = BodyState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnChangedLoadoutIndex
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalPlayerInventoryType                 InventoryType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSideInfo_Separated_C::OnChangedLoadoutIndex(EPalPlayerInventoryType InventoryType, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnChangedLoadoutIndex");

	Params::WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex Parms{};

	Parms.InventoryType = InventoryType;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnChangedTemperature
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NextTemperature                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSideInfo_Separated_C::OnChangedTemperature(int32 NextTemperature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnChangedTemperature");

	Params::WBP_PlayerSideInfo_Separated_C_OnChangedTemperature Parms{};

	Parms.NextTemperature = NextTemperature;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnChangedTenperatureRegistRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NextResistHeat                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NextResistCold                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSideInfo_Separated_C::OnChangedTenperatureRegistRate(int32 NextResistHeat, int32 NextResistCold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnChangedTenperatureRegistRate");

	Params::WBP_PlayerSideInfo_Separated_C_OnChangedTenperatureRegistRate Parms{};

	Parms.NextResistHeat = NextResistHeat;
	Parms.NextResistCold = NextResistCold;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnChangeOtomoIndex
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::OnChangeOtomoIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnChangeOtomoIndex");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnDamagePlayer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult                 DamageResult                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerSideInfo_Separated_C::OnDamagePlayer(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnDamagePlayer");

	Params::WBP_PlayerSideInfo_Separated_C_OnDamagePlayer Parms{};

	Parms.DamageResult = std::move(DamageResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnEndAim
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::OnEndAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnEndAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnGetOff
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           RideActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSideInfo_Separated_C::OnGetOff(class AActor* RideActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnGetOff");

	Params::WBP_PlayerSideInfo_Separated_C_OnGetOff Parms{};

	Parms.RideActor = RideActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnRideon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           RideActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSideInfo_Separated_C::OnRideon(class AActor* RideActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnRideon");

	Params::WBP_PlayerSideInfo_Separated_C_OnRideon Parms{};

	Parms.RideActor = RideActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnTimer_CheckActivationOtomo
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::OnTimer_CheckActivationOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnTimer_CheckActivationOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnTimer_CheckCaptureCount
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::OnTimer_CheckCaptureCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnTimer_CheckCaptureCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnUpdatePlayerEquipment
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     ItemSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalPlayerEquipItemSlotType             SlotType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSideInfo_Separated_C::OnUpdatePlayerEquipment(class UPalItemSlot* ItemSlot, EPalPlayerEquipItemSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnUpdatePlayerEquipment");

	Params::WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment Parms{};

	Parms.ItemSlot = ItemSlot;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnUpdatePlayerInventory
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*                Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSideInfo_Separated_C::OnUpdatePlayerInventory(class UPalItemContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnUpdatePlayerInventory");

	Params::WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerInventory Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnUpdateUsableHandFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanUseLeftHandFlag                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanUseRightHandFlag                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSideInfo_Separated_C::OnUpdateUsableHandFlag(bool CanUseLeftHandFlag, bool CanUseRightHandFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "OnUpdateUsableHandFlag");

	Params::WBP_PlayerSideInfo_Separated_C_OnUpdateUsableHandFlag Parms{};

	Parms.CanUseLeftHandFlag = CanUseLeftHandFlag;
	Parms.CanUseRightHandFlag = CanUseRightHandFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.SetupFirstPalThrowGuide
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::SetupFirstPalThrowGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "SetupFirstPalThrowGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.UpdateHunger_Binded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowHunger                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowMaxHunger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSideInfo_Separated_C::UpdateHunger_Binded(double NowHunger, double NowMaxHunger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "UpdateHunger_Binded");

	Params::WBP_PlayerSideInfo_Separated_C_UpdateHunger_Binded Parms{};

	Parms.NowHunger = NowHunger;
	Parms.NowMaxHunger = NowMaxHunger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.UpdatePlayerBuff
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSideInfo_Separated_C::UpdatePlayerBuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSideInfo_Separated_C", "UpdatePlayerBuff");

	UObject::ProcessEvent(Func, nullptr);
}

}

