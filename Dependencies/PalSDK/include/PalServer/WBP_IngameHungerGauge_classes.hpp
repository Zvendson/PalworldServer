#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_IngameHungerGauge.WBP_IngameHungerGauge_C
// 0x00A0 (0x0318 - 0x0278)
class UWBP_IngameHungerGauge_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Down_Loop;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Gauge_Default;                                 // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Gauge_Low;                                     // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NormalToDown;                                  // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Debuff;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot;                                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_1;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_2;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_3;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_02;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_03;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_04;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_05;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_78;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Base;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Line;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_219;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AnmEvent_Debuff();
	void AnmEvent_Normal();
	void Construct();
	void ExecuteUbergraph_WBP_IngameHungerGauge(int32 EntryPoint);
	void SetHunger(const struct FFixedPoint& NowHunger, const struct FFixedPoint& MaxHunger);
	void SetHunger_ByRate(double Rate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameHungerGauge_C">();
	}
	static class UWBP_IngameHungerGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameHungerGauge_C>();
	}
};
static_assert(alignof(UWBP_IngameHungerGauge_C) == 0x000008, "Wrong alignment on UWBP_IngameHungerGauge_C");
static_assert(sizeof(UWBP_IngameHungerGauge_C) == 0x000318, "Wrong size on UWBP_IngameHungerGauge_C");
static_assert(offsetof(UWBP_IngameHungerGauge_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameHungerGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Anm_Down_Loop) == 0x000280, "Member 'UWBP_IngameHungerGauge_C::Anm_Down_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Anm_Gauge_Default) == 0x000288, "Member 'UWBP_IngameHungerGauge_C::Anm_Gauge_Default' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Anm_Gauge_Low) == 0x000290, "Member 'UWBP_IngameHungerGauge_C::Anm_Gauge_Low' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Anm_NormalToDown) == 0x000298, "Member 'UWBP_IngameHungerGauge_C::Anm_NormalToDown' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, CanvasPanel_Debuff) == 0x0002A0, "Member 'UWBP_IngameHungerGauge_C::CanvasPanel_Debuff' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Dot) == 0x0002A8, "Member 'UWBP_IngameHungerGauge_C::Dot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Dot_1) == 0x0002B0, "Member 'UWBP_IngameHungerGauge_C::Dot_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Dot_2) == 0x0002B8, "Member 'UWBP_IngameHungerGauge_C::Dot_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Dot_3) == 0x0002C0, "Member 'UWBP_IngameHungerGauge_C::Dot_3' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Dot_02) == 0x0002C8, "Member 'UWBP_IngameHungerGauge_C::Dot_02' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Dot_03) == 0x0002D0, "Member 'UWBP_IngameHungerGauge_C::Dot_03' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Dot_04) == 0x0002D8, "Member 'UWBP_IngameHungerGauge_C::Dot_04' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Dot_05) == 0x0002E0, "Member 'UWBP_IngameHungerGauge_C::Dot_05' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Icon) == 0x0002E8, "Member 'UWBP_IngameHungerGauge_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Image_78) == 0x0002F0, "Member 'UWBP_IngameHungerGauge_C::Image_78' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Image_Base) == 0x0002F8, "Member 'UWBP_IngameHungerGauge_C::Image_Base' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, Image_Line) == 0x000300, "Member 'UWBP_IngameHungerGauge_C::Image_Line' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, InvalidationBox_0) == 0x000308, "Member 'UWBP_IngameHungerGauge_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_IngameHungerGauge_C, ProgressBar_219) == 0x000310, "Member 'UWBP_IngameHungerGauge_C::ProgressBar_219' has a wrong offset!");

}

