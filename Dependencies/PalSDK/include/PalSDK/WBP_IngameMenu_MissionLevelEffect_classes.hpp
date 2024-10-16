#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_MissionLevelEffect.WBP_IngameMenu_MissionLevelEffect_C
// 0x0050 (0x02C8 - 0x0278)
class UWBP_IngameMenu_MissionLevelEffect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Arrow;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Aft;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Efefct;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Num_Aft;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Num_Pre;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    InfoMsgId;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	class UTexture2D*                             Texture;                                           // 0x02C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect(int32 EntryPoint);
	void SetEffectInfo(int32 PreCount, int32 AftCount, bool IsMax, bool CanLevelup);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_MissionLevelEffect_C">();
	}
	static class UWBP_IngameMenu_MissionLevelEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_MissionLevelEffect_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_MissionLevelEffect_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_MissionLevelEffect_C");
static_assert(sizeof(UWBP_IngameMenu_MissionLevelEffect_C) == 0x0002C8, "Wrong size on UWBP_IngameMenu_MissionLevelEffect_C");
static_assert(offsetof(UWBP_IngameMenu_MissionLevelEffect_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameMenu_MissionLevelEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionLevelEffect_C, Image_Arrow) == 0x000280, "Member 'UWBP_IngameMenu_MissionLevelEffect_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionLevelEffect_C, Image_Icon) == 0x000288, "Member 'UWBP_IngameMenu_MissionLevelEffect_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionLevelEffect_C, SizeBox_Aft) == 0x000290, "Member 'UWBP_IngameMenu_MissionLevelEffect_C::SizeBox_Aft' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionLevelEffect_C, Text_Efefct) == 0x000298, "Member 'UWBP_IngameMenu_MissionLevelEffect_C::Text_Efefct' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionLevelEffect_C, Text_Num_Aft) == 0x0002A0, "Member 'UWBP_IngameMenu_MissionLevelEffect_C::Text_Num_Aft' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionLevelEffect_C, Text_Num_Pre) == 0x0002A8, "Member 'UWBP_IngameMenu_MissionLevelEffect_C::Text_Num_Pre' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionLevelEffect_C, InfoMsgId) == 0x0002B0, "Member 'UWBP_IngameMenu_MissionLevelEffect_C::InfoMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionLevelEffect_C, Texture) == 0x0002C0, "Member 'UWBP_IngameMenu_MissionLevelEffect_C::Texture' has a wrong offset!");

}

