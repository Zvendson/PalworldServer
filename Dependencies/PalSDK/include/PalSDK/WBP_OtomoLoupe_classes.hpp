#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_LoupeBase_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_OtomoLoupe.WBP_OtomoLoupe_C
// 0x0018 (0x04A0 - 0x0488)
class UWBP_OtomoLoupe_C final : public UWBP_LoupeBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalLoupe_C*                        WBP_PalLoupe;                                      // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CalcScreenPosition();
	void ExecuteUbergraph_WBP_OtomoLoupe(int32 EntryPoint);
	void GetLoupeWidgetSize(struct FVector2D* WidgetSize_0);
	void GetTargetWidgetSize(struct FVector2D* OutVector);
	void GetTargetWorldLocation(struct FVector* OutVector);
	void GetTranslationTarget(class UWidget** Widget);
	bool IsEnableLoupe();
	void OnActivateOtomo();
	void OnInactiveOtomo();
	void OnInitialized();
	void RoundScreenPosition(const struct FVector2D& ScreenPosition, struct FVector2D* CalcedPosition);
	void SetFinalWidgetOpacity(double CalcedOpacity);
	void Setup();
	void UpdateArrowImageAngle(double NewAngle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OtomoLoupe_C">();
	}
	static class UWBP_OtomoLoupe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OtomoLoupe_C>();
	}
};
static_assert(alignof(UWBP_OtomoLoupe_C) == 0x000008, "Wrong alignment on UWBP_OtomoLoupe_C");
static_assert(sizeof(UWBP_OtomoLoupe_C) == 0x0004A0, "Wrong size on UWBP_OtomoLoupe_C");
static_assert(offsetof(UWBP_OtomoLoupe_C, UberGraphFrame) == 0x000488, "Member 'UWBP_OtomoLoupe_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OtomoLoupe_C, WBP_PalLoupe) == 0x000490, "Member 'UWBP_OtomoLoupe_C::WBP_PalLoupe' has a wrong offset!");
static_assert(offsetof(UWBP_OtomoLoupe_C, TargetHandle) == 0x000498, "Member 'UWBP_OtomoLoupe_C::TargetHandle' has a wrong offset!");

}

