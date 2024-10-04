#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_MapPoint_Info.WBP_MapPoint_Info_C
// 0x00C0 (0x0338 - 0x0278)
class UWBP_MapPoint_Info_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       An____In;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Boss_Clear;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Info;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Boss;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Line;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_BossBanner;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Guide_Dismantle;                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Guide_Transport;                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Name_Lv;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LvNum;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Name;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EPalBossType, class UTexture2D*>         BossBannerImages;                                  // 0x02D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                    BaseCampMsgId;                                     // 0x0328(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)

public:
	void AdjustSide(const struct FGeometry& TargetGeometry);
	void ExecuteUbergraph_WBP_MapPoint_Info(int32 EntryPoint);
	void SetBossInfo(bool IsDefeated, const class FName& CharacterID, int32 Level);
	void SetCampInfo(bool CanTeleport);
	void SetFTInfo(class FName FTID, bool CanTeleport);
	void SetTowerBossInfo(class APalBossTower* BossTower, bool CanTeleport);
	void ToggleDisplay(bool ShouldDisplay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapPoint_Info_C">();
	}
	static class UWBP_MapPoint_Info_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapPoint_Info_C>();
	}
};
static_assert(alignof(UWBP_MapPoint_Info_C) == 0x000008, "Wrong alignment on UWBP_MapPoint_Info_C");
static_assert(sizeof(UWBP_MapPoint_Info_C) == 0x000338, "Wrong size on UWBP_MapPoint_Info_C");
static_assert(offsetof(UWBP_MapPoint_Info_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MapPoint_Info_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, An____In) == 0x000280, "Member 'UWBP_MapPoint_Info_C::An____In' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, Canvas_Boss_Clear) == 0x000288, "Member 'UWBP_MapPoint_Info_C::Canvas_Boss_Clear' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, CanvasPanel_Info) == 0x000290, "Member 'UWBP_MapPoint_Info_C::CanvasPanel_Info' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, Image_Boss) == 0x000298, "Member 'UWBP_MapPoint_Info_C::Image_Boss' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, Image_Line) == 0x0002A0, "Member 'UWBP_MapPoint_Info_C::Image_Line' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, Overlay_BossBanner) == 0x0002A8, "Member 'UWBP_MapPoint_Info_C::Overlay_BossBanner' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, Overlay_Guide_Dismantle) == 0x0002B0, "Member 'UWBP_MapPoint_Info_C::Overlay_Guide_Dismantle' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, Overlay_Guide_Transport) == 0x0002B8, "Member 'UWBP_MapPoint_Info_C::Overlay_Guide_Transport' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, Overlay_Name_Lv) == 0x0002C0, "Member 'UWBP_MapPoint_Info_C::Overlay_Name_Lv' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, Text_LvNum) == 0x0002C8, "Member 'UWBP_MapPoint_Info_C::Text_LvNum' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, Text_Name) == 0x0002D0, "Member 'UWBP_MapPoint_Info_C::Text_Name' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, BossBannerImages) == 0x0002D8, "Member 'UWBP_MapPoint_Info_C::BossBannerImages' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_C, BaseCampMsgId) == 0x000328, "Member 'UWBP_MapPoint_Info_C::BaseCampMsgId' has a wrong offset!");

}

