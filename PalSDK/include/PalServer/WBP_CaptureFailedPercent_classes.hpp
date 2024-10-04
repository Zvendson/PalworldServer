#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C
// 0x0070 (0x0478 - 0x0408)
class UWBP_CaptureFailedPercent_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_PercentNumDecimal;                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_1;                                            // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_10;                                           // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_100;                                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Capturerate_SneakBonus;                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Deci_0;                                       // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Deci_00;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Pecent;                                       // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           ClearSelfTimerHandle;                              // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOverClearTimer;                                  // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        TargetDisplayPercent;                              // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowDisplayPercent;                                 // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_CaptureFailedPercent(int32 EntryPoint);
	void NotifyClearSelf();
	void OnOverClearTimer__DelegateSignature(class UWBP_CaptureFailedPercent_C* SelfWidget);
	void Set_Percent(double Percent);
	void Setup(double DisplayPercent);
	void UpdatePercent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CaptureFailedPercent_C">();
	}
	static class UWBP_CaptureFailedPercent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CaptureFailedPercent_C>();
	}
};
static_assert(alignof(UWBP_CaptureFailedPercent_C) == 0x000008, "Wrong alignment on UWBP_CaptureFailedPercent_C");
static_assert(sizeof(UWBP_CaptureFailedPercent_C) == 0x000478, "Wrong size on UWBP_CaptureFailedPercent_C");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, UberGraphFrame) == 0x000408, "Member 'UWBP_CaptureFailedPercent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, Canvas_PercentNumDecimal) == 0x000410, "Member 'UWBP_CaptureFailedPercent_C::Canvas_PercentNumDecimal' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, Text_1) == 0x000418, "Member 'UWBP_CaptureFailedPercent_C::Text_1' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, Text_10) == 0x000420, "Member 'UWBP_CaptureFailedPercent_C::Text_10' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, Text_100) == 0x000428, "Member 'UWBP_CaptureFailedPercent_C::Text_100' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, Text_Capturerate_SneakBonus) == 0x000430, "Member 'UWBP_CaptureFailedPercent_C::Text_Capturerate_SneakBonus' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, Text_Deci_0) == 0x000438, "Member 'UWBP_CaptureFailedPercent_C::Text_Deci_0' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, Text_Deci_00) == 0x000440, "Member 'UWBP_CaptureFailedPercent_C::Text_Deci_00' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, Text_Pecent) == 0x000448, "Member 'UWBP_CaptureFailedPercent_C::Text_Pecent' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, ClearSelfTimerHandle) == 0x000450, "Member 'UWBP_CaptureFailedPercent_C::ClearSelfTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, OnOverClearTimer) == 0x000458, "Member 'UWBP_CaptureFailedPercent_C::OnOverClearTimer' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, TargetDisplayPercent) == 0x000468, "Member 'UWBP_CaptureFailedPercent_C::TargetDisplayPercent' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureFailedPercent_C, NowDisplayPercent) == 0x000470, "Member 'UWBP_CaptureFailedPercent_C::NowDisplayPercent' has a wrong offset!");

}

