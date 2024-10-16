#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C
// 0x0020 (0x05D8 - 0x05B8)
class UWBP_PlayerSideInfo_Separated_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PlayerSideInfo_Separated_C;     // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Ingame_PlayerGauge_Separated_C*    WBP_Ingame_PlayerGauge_Separated;                  // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           CheckCaptureCountTimerHandle;                      // 0x05C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckFirstActivationPalTimerHandle;                // 0x05D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Destruct();
	void DisableFirstSummonPalGuide();
	void EnableFirstSummonPalGuide();
	void ExecuteUbergraph_WBP_PlayerSideInfo_Separated(int32 EntryPoint);
	void OnAim();
	void OnChangedBodyTenperatureState(EPalBodyTemperatureState BodyState);
	void OnChangedLoadoutIndex(EPalPlayerInventoryType InventoryType, int32 Index_0);
	void OnChangedTemperature(int32 NextTemperature);
	void OnChangedTenperatureRegistRate(int32 NextResistHeat, int32 NextResistCold);
	void OnChangeOtomoIndex();
	void OnDamagePlayer(const struct FPalDamageResult& DamageResult);
	void OnEndAim();
	void OnGetOff(class AActor* RideActor);
	void OnInitialized();
	void OnRideon(class AActor* RideActor);
	void OnTimer_CheckActivationOtomo();
	void OnTimer_CheckCaptureCount();
	void OnUpdatePlayerEquipment(class UPalItemSlot* ItemSlot, EPalPlayerEquipItemSlotType SlotType);
	void OnUpdatePlayerInventory(class UPalItemContainer* Container);
	void OnUpdateUsableHandFlag(bool CanUseLeftHandFlag, bool CanUseRightHandFlag);
	void Setup();
	void SetupFirstPalThrowGuide();
	void UpdateHunger_Binded(double NowHunger, double NowMaxHunger);
	void UpdatePlayerBuff();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerSideInfo_Separated_C">();
	}
	static class UWBP_PlayerSideInfo_Separated_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerSideInfo_Separated_C>();
	}
};
static_assert(alignof(UWBP_PlayerSideInfo_Separated_C) == 0x000008, "Wrong alignment on UWBP_PlayerSideInfo_Separated_C");
static_assert(sizeof(UWBP_PlayerSideInfo_Separated_C) == 0x0005D8, "Wrong size on UWBP_PlayerSideInfo_Separated_C");
static_assert(offsetof(UWBP_PlayerSideInfo_Separated_C, UberGraphFrame_WBP_PlayerSideInfo_Separated_C) == 0x0005B8, "Member 'UWBP_PlayerSideInfo_Separated_C::UberGraphFrame_WBP_PlayerSideInfo_Separated_C' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerSideInfo_Separated_C, WBP_Ingame_PlayerGauge_Separated) == 0x0005C0, "Member 'UWBP_PlayerSideInfo_Separated_C::WBP_Ingame_PlayerGauge_Separated' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerSideInfo_Separated_C, CheckCaptureCountTimerHandle) == 0x0005C8, "Member 'UWBP_PlayerSideInfo_Separated_C::CheckCaptureCountTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerSideInfo_Separated_C, CheckFirstActivationPalTimerHandle) == 0x0005D0, "Member 'UWBP_PlayerSideInfo_Separated_C::CheckFirstActivationPalTimerHandle' has a wrong offset!");

}

