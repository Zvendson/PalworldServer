#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Ingame_Signboard_3DText.WBP_Ingame_Signboard_3DText_C
// 0x0028 (0x0430 - 0x0408)
class UWBP_Ingame_Signboard_3DText_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_C_54;                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_70;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    NoNameMsgID;                                       // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_WBP_Ingame_Signboard_3DText(int32 EntryPoint);
	void UpdateText(const class FString& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_Signboard_3DText_C">();
	}
	static class UWBP_Ingame_Signboard_3DText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_Signboard_3DText_C>();
	}
};
static_assert(alignof(UWBP_Ingame_Signboard_3DText_C) == 0x000008, "Wrong alignment on UWBP_Ingame_Signboard_3DText_C");
static_assert(sizeof(UWBP_Ingame_Signboard_3DText_C) == 0x000430, "Wrong size on UWBP_Ingame_Signboard_3DText_C");
static_assert(offsetof(UWBP_Ingame_Signboard_3DText_C, UberGraphFrame) == 0x000408, "Member 'UWBP_Ingame_Signboard_3DText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_3DText_C, BP_PalRichTextBlock_C_54) == 0x000410, "Member 'UWBP_Ingame_Signboard_3DText_C::BP_PalRichTextBlock_C_54' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_3DText_C, Image_70) == 0x000418, "Member 'UWBP_Ingame_Signboard_3DText_C::Image_70' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_3DText_C, NoNameMsgID) == 0x000420, "Member 'UWBP_Ingame_Signboard_3DText_C::NoNameMsgID' has a wrong offset!");

}

