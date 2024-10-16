#pragma once

#include "Basic.hpp"

#include "EPalSphereCaptureFailedReason_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "WBP_LoupeBase_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C
// 0x00C0 (0x0548 - 0x0488)
class UWBP_CapturingPalLoupe_C final : public UWBP_LoupeBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Failed;                                            // 0x0490(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Success;                                           // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop;                                              // 0x04A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_168;                                   // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Sphere;                                      // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LoupeArrow;                                        // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_CaptureingState;                              // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Length;                                       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterIcon_C*          WBP_PalCommonCharacterIcon;                        // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_PalCaptureBodyBase_C> TargetCaptureBody;                                 // 0x04D8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector2D                              CalcedPosition;                                    // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CalcedDot;                                         // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWaitEnded;                                       // 0x0520(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521[0x7];                                      // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FinalPosition;                                     // 0x0528(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnded;                                           // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CalcScreenPosition();
	void ExecuteUbergraph_WBP_CapturingPalLoupe(int32 EntryPoint);
	void GetLoupeWidgetSize(struct FVector2D* WidgetSize_0);
	void GetTargetWidgetSize(struct FVector2D* OutVector);
	void GetTargetWorldLocation(struct FVector* OutVector);
	bool IsEnableLoupe();
	void OnEndAnimeFiniched();
	void OnFailed(class UPalIndividualCharacterHandle* TargetHandle, EPalSphereCaptureFailedReason FailedReson);
	void OnInitialized();
	void OnRequestedClose();
	void OnSuccess(class UPalIndividualCharacterHandle* TargetHandle);
	void Setup(class ABP_PalCaptureBodyBase_C* TargetCaptureBody_0, class UPalIndividualCharacterHandle* TargetHandle);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateArrowImageAngle(double NewAngle);
	void UpdateLength();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CapturingPalLoupe_C">();
	}
	static class UWBP_CapturingPalLoupe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CapturingPalLoupe_C>();
	}
};
static_assert(alignof(UWBP_CapturingPalLoupe_C) == 0x000008, "Wrong alignment on UWBP_CapturingPalLoupe_C");
static_assert(sizeof(UWBP_CapturingPalLoupe_C) == 0x000548, "Wrong size on UWBP_CapturingPalLoupe_C");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, UberGraphFrame) == 0x000488, "Member 'UWBP_CapturingPalLoupe_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, Failed) == 0x000490, "Member 'UWBP_CapturingPalLoupe_C::Failed' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, Success) == 0x000498, "Member 'UWBP_CapturingPalLoupe_C::Success' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, Loop) == 0x0004A0, "Member 'UWBP_CapturingPalLoupe_C::Loop' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, CanvasPanel_168) == 0x0004A8, "Member 'UWBP_CapturingPalLoupe_C::CanvasPanel_168' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, Image_Sphere) == 0x0004B0, "Member 'UWBP_CapturingPalLoupe_C::Image_Sphere' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, LoupeArrow) == 0x0004B8, "Member 'UWBP_CapturingPalLoupe_C::LoupeArrow' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, Text_CaptureingState) == 0x0004C0, "Member 'UWBP_CapturingPalLoupe_C::Text_CaptureingState' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, Text_Length) == 0x0004C8, "Member 'UWBP_CapturingPalLoupe_C::Text_Length' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, WBP_PalCommonCharacterIcon) == 0x0004D0, "Member 'UWBP_CapturingPalLoupe_C::WBP_PalCommonCharacterIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, TargetCaptureBody) == 0x0004D8, "Member 'UWBP_CapturingPalLoupe_C::TargetCaptureBody' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, CalcedPosition) == 0x000508, "Member 'UWBP_CapturingPalLoupe_C::CalcedPosition' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, CalcedDot) == 0x000518, "Member 'UWBP_CapturingPalLoupe_C::CalcedDot' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, IsWaitEnded) == 0x000520, "Member 'UWBP_CapturingPalLoupe_C::IsWaitEnded' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, FinalPosition) == 0x000528, "Member 'UWBP_CapturingPalLoupe_C::FinalPosition' has a wrong offset!");
static_assert(offsetof(UWBP_CapturingPalLoupe_C, IsEnded) == 0x000540, "Member 'UWBP_CapturingPalLoupe_C::IsEnded' has a wrong offset!");

}

