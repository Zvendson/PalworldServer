#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalAim.WBP_PalAim_C
// 0x0068 (0x0478 - 0x0410)
class UWBP_PalAim_C final : public UPalUIAimReticleBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           AimCanvas;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Grappling;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Outline;                                     // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Reticle;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Reticle_Cancel_C*                  WBP_Reticle_Cancel;                                // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Reticle_Pal_C*                     WBP_Reticle_Pal;                                   // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        TargetScale;                                       // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowScale;                                          // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsThrowPalMode;                                    // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_459[0x7];                                      // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CurrentCampLiftingPal;                             // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBI_PalGrapplingAimInterface_C> GrapplingAimInterface;                             // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DisplayOutlineTarget(struct FHitResult& HitResult);
	void EndThrowPalMode();
	void ExecuteUbergraph_WBP_PalAim(int32 EntryPoint);
	void Get_Reticle_Hit_Result(struct FHitResult* HitResult);
	void GetNowSelectedOtomoParameter(class UPalCharacterParameterComponent** Parameter);
	void On_Changed_UISettings(const struct FPalOptionUISettings& PrevSettings, const struct FPalOptionUISettings& NewSettings);
	void On_Dead_Detail();
	void OnChangedWeaon(class APalWeaponBase* Weapon);
	void OnEndLiftCampPal();
	void OnLiftCampPal(class APalCharacter* TargetCharacter);
	void Raycast_Reticle_Direction_Body();
	void SetGrapplingReticleVisible(bool IsVisible_0);
	void Setup_AfterCreatedPlayer();
	void Show_Assignable_Throwing_Pal(struct FHitResult& HitResult);
	void StartThrowPalMode();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateGrapplingReticle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalAim_C">();
	}
	static class UWBP_PalAim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalAim_C>();
	}
};
static_assert(alignof(UWBP_PalAim_C) == 0x000008, "Wrong alignment on UWBP_PalAim_C");
static_assert(sizeof(UWBP_PalAim_C) == 0x000478, "Wrong size on UWBP_PalAim_C");
static_assert(offsetof(UWBP_PalAim_C, UberGraphFrame) == 0x000410, "Member 'UWBP_PalAim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalAim_C, AimCanvas) == 0x000418, "Member 'UWBP_PalAim_C::AimCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_PalAim_C, Image_Grappling) == 0x000420, "Member 'UWBP_PalAim_C::Image_Grappling' has a wrong offset!");
static_assert(offsetof(UWBP_PalAim_C, Image_Outline) == 0x000428, "Member 'UWBP_PalAim_C::Image_Outline' has a wrong offset!");
static_assert(offsetof(UWBP_PalAim_C, Image_Reticle) == 0x000430, "Member 'UWBP_PalAim_C::Image_Reticle' has a wrong offset!");
static_assert(offsetof(UWBP_PalAim_C, WBP_Reticle_Cancel) == 0x000438, "Member 'UWBP_PalAim_C::WBP_Reticle_Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_PalAim_C, WBP_Reticle_Pal) == 0x000440, "Member 'UWBP_PalAim_C::WBP_Reticle_Pal' has a wrong offset!");
static_assert(offsetof(UWBP_PalAim_C, TargetScale) == 0x000448, "Member 'UWBP_PalAim_C::TargetScale' has a wrong offset!");
static_assert(offsetof(UWBP_PalAim_C, NowScale) == 0x000450, "Member 'UWBP_PalAim_C::NowScale' has a wrong offset!");
static_assert(offsetof(UWBP_PalAim_C, IsThrowPalMode) == 0x000458, "Member 'UWBP_PalAim_C::IsThrowPalMode' has a wrong offset!");
static_assert(offsetof(UWBP_PalAim_C, CurrentCampLiftingPal) == 0x000460, "Member 'UWBP_PalAim_C::CurrentCampLiftingPal' has a wrong offset!");
static_assert(offsetof(UWBP_PalAim_C, GrapplingAimInterface) == 0x000468, "Member 'UWBP_PalAim_C::GrapplingAimInterface' has a wrong offset!");

}

