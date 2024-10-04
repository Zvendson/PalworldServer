#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "WBP_WorldMap_IconBase_NoDesign_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Map_IconBoss.WBP_Map_IconBoss_C
// 0x0060 (0x04B8 - 0x0458)
class UWBP_Map_IconBoss_C final : public UWBP_WorldMap_IconBase_NoDesign_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Map_IconBoss_C;                 // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_CheckMark;                                   // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CheckMark_Shadow;                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterIcon_C*          WBP_PalCommonCharacterIcon;                        // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Is_Defeated;                                       // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_481[0x3];                                      // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalSpawnerOneTribeInfo                Spawner_Info;                                      // 0x0484(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                   Character_Id;                                      // 0x04A4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x04AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Spawner_Id;                                        // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Map_IconBoss(int32 EntryPoint);
	void SetBoss(class FName CharacterID, int32 Level_0, class FName Spawner_Id_0);
	void UpdateCheckState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Map_IconBoss_C">();
	}
	static class UWBP_Map_IconBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Map_IconBoss_C>();
	}
};
static_assert(alignof(UWBP_Map_IconBoss_C) == 0x000008, "Wrong alignment on UWBP_Map_IconBoss_C");
static_assert(sizeof(UWBP_Map_IconBoss_C) == 0x0004B8, "Wrong size on UWBP_Map_IconBoss_C");
static_assert(offsetof(UWBP_Map_IconBoss_C, UberGraphFrame_WBP_Map_IconBoss_C) == 0x000458, "Member 'UWBP_Map_IconBoss_C::UberGraphFrame_WBP_Map_IconBoss_C' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Image_CheckMark) == 0x000460, "Member 'UWBP_Map_IconBoss_C::Image_CheckMark' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Image_CheckMark_Shadow) == 0x000468, "Member 'UWBP_Map_IconBoss_C::Image_CheckMark_Shadow' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, WBP_PalCommonButton) == 0x000470, "Member 'UWBP_Map_IconBoss_C::WBP_PalCommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, WBP_PalCommonCharacterIcon) == 0x000478, "Member 'UWBP_Map_IconBoss_C::WBP_PalCommonCharacterIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Is_Defeated) == 0x000480, "Member 'UWBP_Map_IconBoss_C::Is_Defeated' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Spawner_Info) == 0x000484, "Member 'UWBP_Map_IconBoss_C::Spawner_Info' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Character_Id) == 0x0004A4, "Member 'UWBP_Map_IconBoss_C::Character_Id' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Level) == 0x0004AC, "Member 'UWBP_Map_IconBoss_C::Level' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconBoss_C, Spawner_Id) == 0x0004B0, "Member 'UWBP_Map_IconBoss_C::Spawner_Id' has a wrong offset!");

}

