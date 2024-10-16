#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Enum_ReticleCancel_DisplayType_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Reticle_Cancel.WBP_Reticle_Cancel_C
// 0x0020 (0x0298 - 0x0278)
class UWBP_Reticle_Cancel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                     Text_Cancel;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon;                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CurrentIsCancel;                                   // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Reticle_Cancel(int32 EntryPoint);
	void SetKeyGuideInfo(Enum_ReticleCancel_DisplayType DisplayType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Reticle_Cancel_C">();
	}
	static class UWBP_Reticle_Cancel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Reticle_Cancel_C>();
	}
};
static_assert(alignof(UWBP_Reticle_Cancel_C) == 0x000008, "Wrong alignment on UWBP_Reticle_Cancel_C");
static_assert(sizeof(UWBP_Reticle_Cancel_C) == 0x000298, "Wrong size on UWBP_Reticle_Cancel_C");
static_assert(offsetof(UWBP_Reticle_Cancel_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Reticle_Cancel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Cancel_C, Text_Cancel) == 0x000280, "Member 'UWBP_Reticle_Cancel_C::Text_Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Cancel_C, WBP_PlayerInputKeyGuideIcon) == 0x000288, "Member 'UWBP_Reticle_Cancel_C::WBP_PlayerInputKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Cancel_C, CurrentIsCancel) == 0x000290, "Member 'UWBP_Reticle_Cancel_C::CurrentIsCancel' has a wrong offset!");

}

