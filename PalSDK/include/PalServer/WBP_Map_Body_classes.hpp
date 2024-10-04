#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Map_Body.WBP_Map_Body_C
// 0x01B8 (0x05C0 - 0x0408)
class UWBP_Map_Body_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_ForIcon_Mask;                               // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_ForIcon_NoMask;                             // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_MapBody;                                    // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Outer;                                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MapBody;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MapMask;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Map_Cursor_C*                      WBP_Map_Cursor;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapPoint_Info_C*                   WBP_MapPoint_Info;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapPoint_Info_Respawn_C*           WBP_MapPoint_Info_Respawn;                         // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        InputAxisX;                                        // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InputAxisY;                                        // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScrollSpeedMultiplier;                             // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TargetPosition;                                    // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScrollSpeedMultiplierForMouseDrag;                 // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScrollInterpolationMultiplier;                     // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ZoomSpeedMultiplier_Mouse;                         // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AddAxisXPerTick;                                   // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AddAxisYPerTick;                                   // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AddZoomPerTick_Mouse;                              // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ZoomSpeedMultiplier_Pad;                           // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ZoomSpeedMultiplierForMouseWheel;                  // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultMapZoomScale;                               // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxZoomScale;                                      // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinZoomScale;                                      // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AddZoomPerTick_Pad;                                // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CachedMapScale;                                    // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMouseMode;                                       // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMouseButtonDown;                                 // 0x04E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EA[0x6];                                      // 0x04EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_WorldMap_IconBase_NoDesign_C*      HoveredIcon;                                       // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MinLandScapePosition;                              // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MaxLandScapePosition;                              // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHoveredAnyIcon;                                  // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhoveredAnyIcon;                                // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedAnyIcon;                                  // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class UWBP_Map_IconPlayer_C*, class APalPlayerState*> PlayerIconMaps;                                    // 0x0548(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                           PlayerIconUpdateTimer;                             // 0x0598(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CanvasMaskMult;                                    // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CursorOnMap;                                       // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableMapInfo;                                     // 0x05A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitSelect;                                      // 0x05AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AB[0x5];                                      // 0x05AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MaskTextureMaterial;                               // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CanFastTravel;                                     // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Icon(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget, bool* Added);
	void Add_Icon_By_Location(class UWBP_WorldMap_IconBase_NoDesign_C* Widget, const struct FVector& WorldLocation, bool IgnoreMask, bool* Added);
	void Adjust_Scroll_Local_Player_Position();
	void AdjustScrollForRespawn();
	void CalcMapImagePosition(const struct FVector2D& AddOffset, struct FVector2D* Position);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_Map_Body(int32 EntryPoint);
	void GetCursorScrollOffset(struct FVector2D* Offset);
	void LoadAndApplyDefaultMaskTexture();
	void On_Hovered_Any_Icon_Internal(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnClickedAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
	void OnClickedAnyIcon_Internal(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
	void OnHoveredAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
	void OnInitialized();
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnLoaded_D35D903A4572C11561B776A766C7733D(class UObject* Loaded);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnUnhoveredAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
	void OnUnhoveredAnyIcon_Internal(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
	void RequestDismantal();
	void ScrollMapImage_Internal(const struct FVector2D& ScrollOffset);
	void Setup(const struct FVector& MinLandScapePosition_0, const struct FVector& MaxLandScapePosition_0);
	void Setup_Player_Icon(TArray<class UWBP_Map_IconPlayer_C*>* PlayerIcons);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Icon_Visibility(class UWBP_WorldMap_IconBase_NoDesign_C* Icon, bool* Visible);
	void Update_Map_Icon(class UWidget* Icon);
	void Update_Map_Zoom(double AddZoomValue, double DeltaTime, bool* IsUpdated);
	void Update_Player_Icon();
	void UpdateCursorTransform();
	void UpdateMapIcons();
	void UpdateMapTransform(double DeltaTime);
	void UpdateScrollOffset(bool* IsUpdated);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Map_Body_C">();
	}
	static class UWBP_Map_Body_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Map_Body_C>();
	}
};
static_assert(alignof(UWBP_Map_Body_C) == 0x000008, "Wrong alignment on UWBP_Map_Body_C");
static_assert(sizeof(UWBP_Map_Body_C) == 0x0005C0, "Wrong size on UWBP_Map_Body_C");
static_assert(offsetof(UWBP_Map_Body_C, UberGraphFrame) == 0x000408, "Member 'UWBP_Map_Body_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, Canvas_ForIcon_Mask) == 0x000410, "Member 'UWBP_Map_Body_C::Canvas_ForIcon_Mask' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, Canvas_ForIcon_NoMask) == 0x000418, "Member 'UWBP_Map_Body_C::Canvas_ForIcon_NoMask' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, Canvas_MapBody) == 0x000420, "Member 'UWBP_Map_Body_C::Canvas_MapBody' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, Canvas_Outer) == 0x000428, "Member 'UWBP_Map_Body_C::Canvas_Outer' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, Image_MapBody) == 0x000430, "Member 'UWBP_Map_Body_C::Image_MapBody' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, Image_MapMask) == 0x000438, "Member 'UWBP_Map_Body_C::Image_MapMask' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, WBP_Map_Cursor) == 0x000440, "Member 'UWBP_Map_Body_C::WBP_Map_Cursor' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, WBP_MapPoint_Info) == 0x000448, "Member 'UWBP_Map_Body_C::WBP_MapPoint_Info' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, WBP_MapPoint_Info_Respawn) == 0x000450, "Member 'UWBP_Map_Body_C::WBP_MapPoint_Info_Respawn' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, InputAxisX) == 0x000458, "Member 'UWBP_Map_Body_C::InputAxisX' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, InputAxisY) == 0x000460, "Member 'UWBP_Map_Body_C::InputAxisY' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, ScrollSpeedMultiplier) == 0x000468, "Member 'UWBP_Map_Body_C::ScrollSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, TargetPosition) == 0x000470, "Member 'UWBP_Map_Body_C::TargetPosition' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, ScrollSpeedMultiplierForMouseDrag) == 0x000480, "Member 'UWBP_Map_Body_C::ScrollSpeedMultiplierForMouseDrag' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, ScrollInterpolationMultiplier) == 0x000488, "Member 'UWBP_Map_Body_C::ScrollInterpolationMultiplier' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, ZoomSpeedMultiplier_Mouse) == 0x000490, "Member 'UWBP_Map_Body_C::ZoomSpeedMultiplier_Mouse' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, AddAxisXPerTick) == 0x000498, "Member 'UWBP_Map_Body_C::AddAxisXPerTick' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, AddAxisYPerTick) == 0x0004A0, "Member 'UWBP_Map_Body_C::AddAxisYPerTick' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, AddZoomPerTick_Mouse) == 0x0004A8, "Member 'UWBP_Map_Body_C::AddZoomPerTick_Mouse' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, ZoomSpeedMultiplier_Pad) == 0x0004B0, "Member 'UWBP_Map_Body_C::ZoomSpeedMultiplier_Pad' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, ZoomSpeedMultiplierForMouseWheel) == 0x0004B8, "Member 'UWBP_Map_Body_C::ZoomSpeedMultiplierForMouseWheel' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, DefaultMapZoomScale) == 0x0004C0, "Member 'UWBP_Map_Body_C::DefaultMapZoomScale' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, MaxZoomScale) == 0x0004C8, "Member 'UWBP_Map_Body_C::MaxZoomScale' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, MinZoomScale) == 0x0004D0, "Member 'UWBP_Map_Body_C::MinZoomScale' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, AddZoomPerTick_Pad) == 0x0004D8, "Member 'UWBP_Map_Body_C::AddZoomPerTick_Pad' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, CachedMapScale) == 0x0004E0, "Member 'UWBP_Map_Body_C::CachedMapScale' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, IsMouseMode) == 0x0004E8, "Member 'UWBP_Map_Body_C::IsMouseMode' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, IsMouseButtonDown) == 0x0004E9, "Member 'UWBP_Map_Body_C::IsMouseButtonDown' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, HoveredIcon) == 0x0004F0, "Member 'UWBP_Map_Body_C::HoveredIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, MinLandScapePosition) == 0x0004F8, "Member 'UWBP_Map_Body_C::MinLandScapePosition' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, MaxLandScapePosition) == 0x000508, "Member 'UWBP_Map_Body_C::MaxLandScapePosition' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, OnHoveredAnyIcon) == 0x000518, "Member 'UWBP_Map_Body_C::OnHoveredAnyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, OnUnhoveredAnyIcon) == 0x000528, "Member 'UWBP_Map_Body_C::OnUnhoveredAnyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, OnClickedAnyIcon) == 0x000538, "Member 'UWBP_Map_Body_C::OnClickedAnyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, PlayerIconMaps) == 0x000548, "Member 'UWBP_Map_Body_C::PlayerIconMaps' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, PlayerIconUpdateTimer) == 0x000598, "Member 'UWBP_Map_Body_C::PlayerIconUpdateTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, CanvasMaskMult) == 0x0005A0, "Member 'UWBP_Map_Body_C::CanvasMaskMult' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, CursorOnMap) == 0x0005A8, "Member 'UWBP_Map_Body_C::CursorOnMap' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, EnableMapInfo) == 0x0005A9, "Member 'UWBP_Map_Body_C::EnableMapInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, IsInitSelect) == 0x0005AA, "Member 'UWBP_Map_Body_C::IsInitSelect' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, MaskTextureMaterial) == 0x0005B0, "Member 'UWBP_Map_Body_C::MaskTextureMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Body_C, CanFastTravel) == 0x0005B8, "Member 'UWBP_Map_Body_C::CanFastTravel' has a wrong offset!");

}

