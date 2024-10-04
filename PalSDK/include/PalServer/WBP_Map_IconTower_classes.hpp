#pragma once

#include "Basic.hpp"

#include "WBP_WorldMap_IconBase_NoDesign_classes.hpp"
#include "Engine_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Map_IconTower.WBP_Map_IconTower_C
// 0x0028 (0x0480 - 0x0458)
class UWBP_Map_IconTower_C final : public UWBP_WorldMap_IconBase_NoDesign_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Map_IconTower_C;                // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Icon;                                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Map_IconFTTower_C*                 FTTower_Icon;                                      // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalBossTower*                          BossTower;                                         // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BindWithFTTower(class UWBP_Map_IconFTTower_C* FTTowerIcon);
	void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Map_IconTower(int32 EntryPoint);
	void SetEnable(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Map_IconTower_C">();
	}
	static class UWBP_Map_IconTower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Map_IconTower_C>();
	}
};
static_assert(alignof(UWBP_Map_IconTower_C) == 0x000008, "Wrong alignment on UWBP_Map_IconTower_C");
static_assert(sizeof(UWBP_Map_IconTower_C) == 0x000480, "Wrong size on UWBP_Map_IconTower_C");
static_assert(offsetof(UWBP_Map_IconTower_C, UberGraphFrame_WBP_Map_IconTower_C) == 0x000458, "Member 'UWBP_Map_IconTower_C::UberGraphFrame_WBP_Map_IconTower_C' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconTower_C, Icon) == 0x000460, "Member 'UWBP_Map_IconTower_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconTower_C, WBP_PalCommonButton) == 0x000468, "Member 'UWBP_Map_IconTower_C::WBP_PalCommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconTower_C, FTTower_Icon) == 0x000470, "Member 'UWBP_Map_IconTower_C::FTTower_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconTower_C, BossTower) == 0x000478, "Member 'UWBP_Map_IconTower_C::BossTower' has a wrong offset!");

}

