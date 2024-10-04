#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C
// 0x00C0 (0x04C8 - 0x0408)
class UWBP_PalCapturingLoupeCanvas_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_Down;                                // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Up;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TmpCanvas;                                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Left;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Right;                                 // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        DisplayBorderX;                                    // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DisplayBorderY;                                    // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_CapturePrism_C>      LastEquipedCaptureWeapon;                          // 0x0448(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class UPalIndividualCharacterHandle*, class UWBP_CapturingPalLoupe_C*> WidgetMap;                                         // 0x0478(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void CheckWidgetEnded();
	void CreateLoupeWidget(class UPalIndividualCharacterHandle* TargetHandle, class ABP_PalCaptureBodyBase_C* TargetCaptureBody, class UWBP_CapturingPalLoupe_C** CreatedWidget);
	void ExecuteUbergraph_WBP_PalCapturingLoupeCanvas(int32 EntryPoint);
	void OnChangedWeaponEvent(class APalWeaponBase* Weapon);
	void OnSetup_AfterCreatedPlayer();
	void OnStartedCapture(class AActor* CreatedBodyActor, class UPalIndividualCharacterHandle* TargetHandle, bool IsBonus);
	void OnThrowCaptureWeapon(class AActor* Bullet);
	void RegisterWeaponEvent(class ABP_CapturePrism_C* CaptureWeapon);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UnregisterWeaponEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCapturingLoupeCanvas_C">();
	}
	static class UWBP_PalCapturingLoupeCanvas_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCapturingLoupeCanvas_C>();
	}
};
static_assert(alignof(UWBP_PalCapturingLoupeCanvas_C) == 0x000008, "Wrong alignment on UWBP_PalCapturingLoupeCanvas_C");
static_assert(sizeof(UWBP_PalCapturingLoupeCanvas_C) == 0x0004C8, "Wrong size on UWBP_PalCapturingLoupeCanvas_C");
static_assert(offsetof(UWBP_PalCapturingLoupeCanvas_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalCapturingLoupeCanvas_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalCapturingLoupeCanvas_C, HorizontalBox_Down) == 0x000410, "Member 'UWBP_PalCapturingLoupeCanvas_C::HorizontalBox_Down' has a wrong offset!");
static_assert(offsetof(UWBP_PalCapturingLoupeCanvas_C, HorizontalBox_Up) == 0x000418, "Member 'UWBP_PalCapturingLoupeCanvas_C::HorizontalBox_Up' has a wrong offset!");
static_assert(offsetof(UWBP_PalCapturingLoupeCanvas_C, TmpCanvas) == 0x000420, "Member 'UWBP_PalCapturingLoupeCanvas_C::TmpCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_PalCapturingLoupeCanvas_C, VerticalBox_Left) == 0x000428, "Member 'UWBP_PalCapturingLoupeCanvas_C::VerticalBox_Left' has a wrong offset!");
static_assert(offsetof(UWBP_PalCapturingLoupeCanvas_C, VerticalBox_Right) == 0x000430, "Member 'UWBP_PalCapturingLoupeCanvas_C::VerticalBox_Right' has a wrong offset!");
static_assert(offsetof(UWBP_PalCapturingLoupeCanvas_C, DisplayBorderX) == 0x000438, "Member 'UWBP_PalCapturingLoupeCanvas_C::DisplayBorderX' has a wrong offset!");
static_assert(offsetof(UWBP_PalCapturingLoupeCanvas_C, DisplayBorderY) == 0x000440, "Member 'UWBP_PalCapturingLoupeCanvas_C::DisplayBorderY' has a wrong offset!");
static_assert(offsetof(UWBP_PalCapturingLoupeCanvas_C, LastEquipedCaptureWeapon) == 0x000448, "Member 'UWBP_PalCapturingLoupeCanvas_C::LastEquipedCaptureWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCapturingLoupeCanvas_C, WidgetMap) == 0x000478, "Member 'UWBP_PalCapturingLoupeCanvas_C::WidgetMap' has a wrong offset!");

}

