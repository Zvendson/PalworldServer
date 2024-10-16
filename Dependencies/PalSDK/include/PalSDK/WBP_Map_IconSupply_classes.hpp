#pragma once

#include "Basic.hpp"

#include "WBP_WorldMap_IconBase_NoDesign_classes.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Map_IconSupply.WBP_Map_IconSupply_C
// 0x0018 (0x0470 - 0x0458)
class UWBP_Map_IconSupply_C final : public UWBP_WorldMap_IconBase_NoDesign_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Map_IconSupply_C;               // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Icon;                                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Map_IconSupply(int32 EntryPoint);
	void SetTexture(class UTexture2D* Texture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Map_IconSupply_C">();
	}
	static class UWBP_Map_IconSupply_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Map_IconSupply_C>();
	}
};
static_assert(alignof(UWBP_Map_IconSupply_C) == 0x000008, "Wrong alignment on UWBP_Map_IconSupply_C");
static_assert(sizeof(UWBP_Map_IconSupply_C) == 0x000470, "Wrong size on UWBP_Map_IconSupply_C");
static_assert(offsetof(UWBP_Map_IconSupply_C, UberGraphFrame_WBP_Map_IconSupply_C) == 0x000458, "Member 'UWBP_Map_IconSupply_C::UberGraphFrame_WBP_Map_IconSupply_C' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconSupply_C, Icon) == 0x000460, "Member 'UWBP_Map_IconSupply_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconSupply_C, WBP_PalCommonButton) == 0x000468, "Member 'UWBP_Map_IconSupply_C::WBP_PalCommonButton' has a wrong offset!");

}

