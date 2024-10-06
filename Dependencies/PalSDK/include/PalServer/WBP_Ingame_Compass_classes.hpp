#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Ingame_Compass.WBP_Ingame_Compass_C
// 0x01A0 (0x0418 - 0x0278)
class UWBP_Ingame_Compass_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Center;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CompassBase;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           IconCanvas;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CompassMaterial;                                   // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, class UWBP_CompassIconBase_C*> CreatedIconMap;                                    // 0x02A0(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FGuid>                          VisibleIconIds;                                    // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EPalLocationType, class UClass*>         IconWBPMap;                                        // 0x0300(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 WbpIconBaseClass;                                  // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_IngameCompass_DeathMark_C*> DeathMarks;                                        // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UPalLocationPoint*, struct FGuid>  DeathMarkMap;                                      // 0x0368(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGuid, class UWBP_IngameCompass_CustomMarker_C*> CustomMarkerMap;                                   // 0x03B8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FGuid>                          VisibleMarkerIds;                                  // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AddCustomMarker(const struct FPalLocationUIData& PalLocationUIData, const struct FPalCustomMarkerSaveData& PalCustomMarkerSaveData, const struct FGuid& LocationId);
	void CREATEDELEGATE_PROXYFUNCTION_0(const struct FGuid& MarkerId);
	void ExecuteUbergraph_WBP_Ingame_Compass(int32 EntryPoint);
	void GetVisibleIcons();
	void On_Added_Location(const struct FGuid& LocationId, class UPalLocationBase* Location);
	void OnCustomMarkerChanged(const struct FGuid& MarkerId);
	void OnInitialized();
	void OnRemovedLocation(const struct FGuid& LocationId, class UPalLocationBase* Location);
	void Refresh_Death_Mark(const TMap<struct FGuid, class UPalLocationBase*>& LocationMap);
	void Setup_Created_Icon_Widget(class UWBP_CompassIconBase_C* CreatedWidget, const struct FGuid& LocationId, const struct FPalLocationUIData& LocationUIData);
	void SetupCustomMarker();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Icon();
	void Update_Rotation_From_Pawn(class APawn* TargetPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_Compass_C">();
	}
	static class UWBP_Ingame_Compass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_Compass_C>();
	}
};
static_assert(alignof(UWBP_Ingame_Compass_C) == 0x000008, "Wrong alignment on UWBP_Ingame_Compass_C");
static_assert(sizeof(UWBP_Ingame_Compass_C) == 0x000418, "Wrong size on UWBP_Ingame_Compass_C");
static_assert(offsetof(UWBP_Ingame_Compass_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Ingame_Compass_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, Center) == 0x000280, "Member 'UWBP_Ingame_Compass_C::Center' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, CompassBase) == 0x000288, "Member 'UWBP_Ingame_Compass_C::CompassBase' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, IconCanvas) == 0x000290, "Member 'UWBP_Ingame_Compass_C::IconCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, CompassMaterial) == 0x000298, "Member 'UWBP_Ingame_Compass_C::CompassMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, CreatedIconMap) == 0x0002A0, "Member 'UWBP_Ingame_Compass_C::CreatedIconMap' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, VisibleIconIds) == 0x0002F0, "Member 'UWBP_Ingame_Compass_C::VisibleIconIds' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, IconWBPMap) == 0x000300, "Member 'UWBP_Ingame_Compass_C::IconWBPMap' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, WbpIconBaseClass) == 0x000350, "Member 'UWBP_Ingame_Compass_C::WbpIconBaseClass' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, DeathMarks) == 0x000358, "Member 'UWBP_Ingame_Compass_C::DeathMarks' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, DeathMarkMap) == 0x000368, "Member 'UWBP_Ingame_Compass_C::DeathMarkMap' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, CustomMarkerMap) == 0x0003B8, "Member 'UWBP_Ingame_Compass_C::CustomMarkerMap' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Compass_C, VisibleMarkerIds) == 0x000408, "Member 'UWBP_Ingame_Compass_C::VisibleMarkerIds' has a wrong offset!");

}

