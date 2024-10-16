#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_StatusBuffTimer.WBP_InventoryEquipment_StatusBuffTimer_C
// 0x0130 (0x03A8 - 0x0278)
class UWBP_InventoryEquipment_StatusBuffTimer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Arrow_Buff;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow_Debuff;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Base;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Gauge;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EPalFoodStatusEffectType, class UTexture*> BuffIcons;                                         // 0x02A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EPalFoodStatusEffectType, class UTexture*> DebuffIcons;                                       // 0x02F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           StatusTimerUpdateTimer;                            // 0x0340(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CurrentIndividualParam;                            // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<EPalFoodStatusEffectType, class UTexture2D*> BaseIcons;                                         // 0x0350(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Is_Regene;                                         // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Destruct();
	void ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer(int32 EntryPoint);
	void SetFoodBuff(EPalFoodStatusEffectType BuffType, bool IsBuff, class UPalIndividualCharacterParameter* IndividualParam, bool IsRegene);
	void UpdateStatusTime();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryEquipment_StatusBuffTimer_C">();
	}
	static class UWBP_InventoryEquipment_StatusBuffTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryEquipment_StatusBuffTimer_C>();
	}
};
static_assert(alignof(UWBP_InventoryEquipment_StatusBuffTimer_C) == 0x000008, "Wrong alignment on UWBP_InventoryEquipment_StatusBuffTimer_C");
static_assert(sizeof(UWBP_InventoryEquipment_StatusBuffTimer_C) == 0x0003A8, "Wrong size on UWBP_InventoryEquipment_StatusBuffTimer_C");
static_assert(offsetof(UWBP_InventoryEquipment_StatusBuffTimer_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InventoryEquipment_StatusBuffTimer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_StatusBuffTimer_C, Image_Arrow_Buff) == 0x000280, "Member 'UWBP_InventoryEquipment_StatusBuffTimer_C::Image_Arrow_Buff' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_StatusBuffTimer_C, Image_Arrow_Debuff) == 0x000288, "Member 'UWBP_InventoryEquipment_StatusBuffTimer_C::Image_Arrow_Debuff' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_StatusBuffTimer_C, Image_Base) == 0x000290, "Member 'UWBP_InventoryEquipment_StatusBuffTimer_C::Image_Base' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_StatusBuffTimer_C, Image_Gauge) == 0x000298, "Member 'UWBP_InventoryEquipment_StatusBuffTimer_C::Image_Gauge' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_StatusBuffTimer_C, BuffIcons) == 0x0002A0, "Member 'UWBP_InventoryEquipment_StatusBuffTimer_C::BuffIcons' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_StatusBuffTimer_C, DebuffIcons) == 0x0002F0, "Member 'UWBP_InventoryEquipment_StatusBuffTimer_C::DebuffIcons' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_StatusBuffTimer_C, StatusTimerUpdateTimer) == 0x000340, "Member 'UWBP_InventoryEquipment_StatusBuffTimer_C::StatusTimerUpdateTimer' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_StatusBuffTimer_C, CurrentIndividualParam) == 0x000348, "Member 'UWBP_InventoryEquipment_StatusBuffTimer_C::CurrentIndividualParam' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_StatusBuffTimer_C, BaseIcons) == 0x000350, "Member 'UWBP_InventoryEquipment_StatusBuffTimer_C::BaseIcons' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_StatusBuffTimer_C, Is_Regene) == 0x0003A0, "Member 'UWBP_InventoryEquipment_StatusBuffTimer_C::Is_Regene' has a wrong offset!");

}

