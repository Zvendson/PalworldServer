#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Map_Base.WBP_Map_Base_C
// 0x0290 (0x06C0 - 0x0430)
class UWBP_Map_Base_C final : public UPalUIWorldMap
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Respawn_In;                                    // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlur_1;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BG;                                                // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Filter;                              // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Marker;                              // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_RespawnMsg;                                // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_CursorLocation;                               // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Map_Body_C*                        WBP_Map_Body;                                      // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapFilter_Win_C*                   WBP_MapFilter_Win;                                 // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Win_C*                   WBP_MapMarker_Win;                                 // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   CloseMapActionName;                                // 0x0490(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FocusPlayerActionName;                             // 0x0498(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CustomMarkActionName;                              // 0x04A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FilterActionName;                                  // 0x04A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TabActionName;                                     // 0x04B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Min_Land_Scape_Position;                           // 0x04B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Max_Land_Scape_Position;                           // 0x04D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, class UWBP_WorldMap_IconBase_NoDesign_C*> CreatedIconMap;                                    // 0x04E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<struct FGuid, class UWBP_Map_IconCustom_C*> CustomMarkerMap;                                   // 0x0538(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UPalLocationPoint*, struct FGuid>  DeathMarkMap;                                      // 0x0588(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_Map_IconDeath_C*>           DeathMarks;                                        // 0x05D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_Map_IconTower_C*>           BossTowerIcons;                                    // 0x05E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          CustomMarkMode;                                    // 0x05F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FilterOpened;                                      // 0x05F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FA[0x6];                                      // 0x05FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_WorldMap_IconBase_NoDesign_C*      CurrentSetupIcon;                                  // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          For_Respawn;                                       // 0x0608(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_609[0x7];                                      // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_Map_IconPlayer_C*>          PlayerIcons;                                       // 0x0610(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          Can_Fast_Travel;                                   // 0x0620(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitSelect;                                      // 0x0621(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_622[0x6];                                      // 0x0622(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<EPalLocationType>                        FilterIconTypes;                                   // 0x0628(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                    FTMsgID;                                           // 0x0678(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    RespawnMsgID;                                      // 0x0688(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UWBP_Map_IconBoss_C*>            BossIcons;                                         // 0x0698(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FName                                   DismantalActionName;                               // 0x06A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    InitSelectMsgID;                                   // 0x06B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AddBossIcon(const struct FPalUIBossSpawnerLoactionData& SpawnerData);
	void AddCustomIcon(const struct FGuid& LocationId, const struct FPalCustomMarkerSaveData& MarkerData);
	void ChangeCustomIcon(class UWBP_Map_IconCustom_C* Icon, int32 Index_0);
	void ChangeFilter(EPalLocationType FilterMap, bool IsEnable);
	void CloseMap();
	void CREATEDELEGATE_PROXYFUNCTION_0(const struct FGuid& MarkerId);
	void Enable_Custom_Mark();
	void ExecuteUbergraph_WBP_Map_Base(int32 EntryPoint);
	void On_Custom_Mark_Changed(const struct FGuid& Guid);
	void On_Icon_Clicked(class UWBP_WorldMap_IconBase_NoDesign_C* Icon);
	void OnCloseAction();
	void OnInitialized();
	void OnInputMethodChanged(ECommonInputType InputType);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnRemovedLocation(const struct FGuid& LocationId, class UPalLocationBase* Location);
	void OnRepliedDialog(bool bOK);
	void OnRequestCampDismantal();
	void OnSetup();
	void RefreshDeathMark(const TMap<struct FGuid, class UPalLocationBase*>& LocationMap);
	void RefreshIconState(EPalLocationType Type, class UPalLocationPoint* LocationPoint, class UWBP_WorldMap_IconBase_NoDesign_C* Icon);
	void RemoveCustomIcon(class UWBP_Map_IconCustom_C* Icon);
	void SetFilter();
	void Setup_Boss_Icon();
	void Setup_Icon(EPalLocationType LocationType, class UPalLocationPoint* LocationPoint, class UWBP_WorldMap_IconBase_NoDesign_C** Icon);
	void Setup_Location_Point_Icon(const struct FGuid& LocationId, class UPalLocationBase* Location);
	void SetupCustomIcons();
	void SetupLocationIcon();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateBossCheckState();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Map_Base_C">();
	}
	static class UWBP_Map_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Map_Base_C>();
	}
};
static_assert(alignof(UWBP_Map_Base_C) == 0x000008, "Wrong alignment on UWBP_Map_Base_C");
static_assert(sizeof(UWBP_Map_Base_C) == 0x0006C0, "Wrong size on UWBP_Map_Base_C");
static_assert(offsetof(UWBP_Map_Base_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Map_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, Anm_Respawn_In) == 0x000438, "Member 'UWBP_Map_Base_C::Anm_Respawn_In' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, BackgroundBlur_1) == 0x000440, "Member 'UWBP_Map_Base_C::BackgroundBlur_1' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, BG) == 0x000448, "Member 'UWBP_Map_Base_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, HorizontalBox_Filter) == 0x000450, "Member 'UWBP_Map_Base_C::HorizontalBox_Filter' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, HorizontalBox_Marker) == 0x000458, "Member 'UWBP_Map_Base_C::HorizontalBox_Marker' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, Image_1) == 0x000460, "Member 'UWBP_Map_Base_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, Overlay_RespawnMsg) == 0x000468, "Member 'UWBP_Map_Base_C::Overlay_RespawnMsg' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, Text_CursorLocation) == 0x000470, "Member 'UWBP_Map_Base_C::Text_CursorLocation' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, WBP_Map_Body) == 0x000478, "Member 'UWBP_Map_Base_C::WBP_Map_Body' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, WBP_MapFilter_Win) == 0x000480, "Member 'UWBP_Map_Base_C::WBP_MapFilter_Win' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, WBP_MapMarker_Win) == 0x000488, "Member 'UWBP_Map_Base_C::WBP_MapMarker_Win' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, CloseMapActionName) == 0x000490, "Member 'UWBP_Map_Base_C::CloseMapActionName' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, FocusPlayerActionName) == 0x000498, "Member 'UWBP_Map_Base_C::FocusPlayerActionName' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, CustomMarkActionName) == 0x0004A0, "Member 'UWBP_Map_Base_C::CustomMarkActionName' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, FilterActionName) == 0x0004A8, "Member 'UWBP_Map_Base_C::FilterActionName' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, TabActionName) == 0x0004B0, "Member 'UWBP_Map_Base_C::TabActionName' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, Min_Land_Scape_Position) == 0x0004B8, "Member 'UWBP_Map_Base_C::Min_Land_Scape_Position' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, Max_Land_Scape_Position) == 0x0004D0, "Member 'UWBP_Map_Base_C::Max_Land_Scape_Position' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, CreatedIconMap) == 0x0004E8, "Member 'UWBP_Map_Base_C::CreatedIconMap' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, CustomMarkerMap) == 0x000538, "Member 'UWBP_Map_Base_C::CustomMarkerMap' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, DeathMarkMap) == 0x000588, "Member 'UWBP_Map_Base_C::DeathMarkMap' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, DeathMarks) == 0x0005D8, "Member 'UWBP_Map_Base_C::DeathMarks' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, BossTowerIcons) == 0x0005E8, "Member 'UWBP_Map_Base_C::BossTowerIcons' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, CustomMarkMode) == 0x0005F8, "Member 'UWBP_Map_Base_C::CustomMarkMode' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, FilterOpened) == 0x0005F9, "Member 'UWBP_Map_Base_C::FilterOpened' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, CurrentSetupIcon) == 0x000600, "Member 'UWBP_Map_Base_C::CurrentSetupIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, For_Respawn) == 0x000608, "Member 'UWBP_Map_Base_C::For_Respawn' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, PlayerIcons) == 0x000610, "Member 'UWBP_Map_Base_C::PlayerIcons' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, Can_Fast_Travel) == 0x000620, "Member 'UWBP_Map_Base_C::Can_Fast_Travel' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, IsInitSelect) == 0x000621, "Member 'UWBP_Map_Base_C::IsInitSelect' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, FilterIconTypes) == 0x000628, "Member 'UWBP_Map_Base_C::FilterIconTypes' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, FTMsgID) == 0x000678, "Member 'UWBP_Map_Base_C::FTMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, RespawnMsgID) == 0x000688, "Member 'UWBP_Map_Base_C::RespawnMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, BossIcons) == 0x000698, "Member 'UWBP_Map_Base_C::BossIcons' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, DismantalActionName) == 0x0006A8, "Member 'UWBP_Map_Base_C::DismantalActionName' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Base_C, InitSelectMsgID) == 0x0006B0, "Member 'UWBP_Map_Base_C::InitSelectMsgID' has a wrong offset!");

}

