#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_WorldMap_IconBase_NoDesign_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_WorldMap_Icon_Respawn.WBP_WorldMap_Icon_Respawn_C
// 0x0030 (0x0488 - 0x0458)
class UWBP_WorldMap_Icon_Respawn_C final : public UWBP_WorldMap_IconBase_NoDesign_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_WorldMap_Icon_Respawn_C;        // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Loop;                                          // 0x0460(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Wave;                                        // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   Respawn_Point_ID;                                  // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_WorldMap_Icon_Respawn(int32 EntryPoint);
	void OnInitialized();
	void Setup_Internal(class UPalLocationPoint* LocationPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WorldMap_Icon_Respawn_C">();
	}
	static class UWBP_WorldMap_Icon_Respawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WorldMap_Icon_Respawn_C>();
	}
};
static_assert(alignof(UWBP_WorldMap_Icon_Respawn_C) == 0x000008, "Wrong alignment on UWBP_WorldMap_Icon_Respawn_C");
static_assert(sizeof(UWBP_WorldMap_Icon_Respawn_C) == 0x000488, "Wrong size on UWBP_WorldMap_Icon_Respawn_C");
static_assert(offsetof(UWBP_WorldMap_Icon_Respawn_C, UberGraphFrame_WBP_WorldMap_Icon_Respawn_C) == 0x000458, "Member 'UWBP_WorldMap_Icon_Respawn_C::UberGraphFrame_WBP_WorldMap_Icon_Respawn_C' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_Icon_Respawn_C, Anm_Loop) == 0x000460, "Member 'UWBP_WorldMap_Icon_Respawn_C::Anm_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_Icon_Respawn_C, Icon) == 0x000468, "Member 'UWBP_WorldMap_Icon_Respawn_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_Icon_Respawn_C, Image_Wave) == 0x000470, "Member 'UWBP_WorldMap_Icon_Respawn_C::Image_Wave' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_Icon_Respawn_C, WBP_PalCommonButton) == 0x000478, "Member 'UWBP_WorldMap_Icon_Respawn_C::WBP_PalCommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_Icon_Respawn_C, Respawn_Point_ID) == 0x000480, "Member 'UWBP_WorldMap_Icon_Respawn_C::Respawn_Point_ID' has a wrong offset!");

}

