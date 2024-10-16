#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_MapPoint_Info_Respawn.WBP_MapPoint_Info_Respawn_C
// 0x0060 (0x02D8 - 0x0278)
class UWBP_MapPoint_Info_Respawn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Name;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_Explain;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Info;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Guide;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_KeyGuide;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapPoint_Info_RespawnData_C*       WBP_MapPoint_Info_RespawnData_0;                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapPoint_Info_RespawnData_C*       WBP_MapPoint_Info_RespawnData_1;                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    RespawnMsgID;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    SpawnMsgId;                                        // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AdjustSide(const struct FGeometry& TargetGeometry);
	void ExecuteUbergraph_WBP_MapPoint_Info_Respawn(int32 EntryPoint);
	void SetPointInfo(class FName PointId, bool IsInitSelect);
	void ToggleDisplay(bool ShouldDisplay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapPoint_Info_Respawn_C">();
	}
	static class UWBP_MapPoint_Info_Respawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapPoint_Info_Respawn_C>();
	}
};
static_assert(alignof(UWBP_MapPoint_Info_Respawn_C) == 0x000008, "Wrong alignment on UWBP_MapPoint_Info_Respawn_C");
static_assert(sizeof(UWBP_MapPoint_Info_Respawn_C) == 0x0002D8, "Wrong size on UWBP_MapPoint_Info_Respawn_C");
static_assert(offsetof(UWBP_MapPoint_Info_Respawn_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MapPoint_Info_Respawn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_Respawn_C, BP_PalTextBlock_Name) == 0x000280, "Member 'UWBP_MapPoint_Info_Respawn_C::BP_PalTextBlock_Name' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_Respawn_C, BPPalTextBlock_Explain) == 0x000288, "Member 'UWBP_MapPoint_Info_Respawn_C::BPPalTextBlock_Explain' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_Respawn_C, CanvasPanel_Info) == 0x000290, "Member 'UWBP_MapPoint_Info_Respawn_C::CanvasPanel_Info' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_Respawn_C, Overlay_Guide) == 0x000298, "Member 'UWBP_MapPoint_Info_Respawn_C::Overlay_Guide' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_Respawn_C, Text_KeyGuide) == 0x0002A0, "Member 'UWBP_MapPoint_Info_Respawn_C::Text_KeyGuide' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_Respawn_C, WBP_MapPoint_Info_RespawnData_0) == 0x0002A8, "Member 'UWBP_MapPoint_Info_Respawn_C::WBP_MapPoint_Info_RespawnData_0' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_Respawn_C, WBP_MapPoint_Info_RespawnData_1) == 0x0002B0, "Member 'UWBP_MapPoint_Info_Respawn_C::WBP_MapPoint_Info_RespawnData_1' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_Respawn_C, RespawnMsgID) == 0x0002B8, "Member 'UWBP_MapPoint_Info_Respawn_C::RespawnMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_Respawn_C, SpawnMsgId) == 0x0002C8, "Member 'UWBP_MapPoint_Info_Respawn_C::SpawnMsgId' has a wrong offset!");

}

