#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_EnemyGauge_SAN.WBP_EnemyGauge_SAN_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_EnemyGauge_SAN_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Gauge;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_SanityValue;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMaterial;                                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OriginalSanityGaugeColor;                          // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LowSanityGaugeColor;                               // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_EnemyGauge_SAN(int32 EntryPoint);
	void OnInitialized();
	void SetSanityValue(double NowSanityValue, double MaxSanityValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EnemyGauge_SAN_C">();
	}
	static class UWBP_EnemyGauge_SAN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EnemyGauge_SAN_C>();
	}
};
static_assert(alignof(UWBP_EnemyGauge_SAN_C) == 0x000008, "Wrong alignment on UWBP_EnemyGauge_SAN_C");
static_assert(sizeof(UWBP_EnemyGauge_SAN_C) == 0x0002B8, "Wrong size on UWBP_EnemyGauge_SAN_C");
static_assert(offsetof(UWBP_EnemyGauge_SAN_C, UberGraphFrame) == 0x000278, "Member 'UWBP_EnemyGauge_SAN_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_SAN_C, Gauge) == 0x000280, "Member 'UWBP_EnemyGauge_SAN_C::Gauge' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_SAN_C, Text_SanityValue) == 0x000288, "Member 'UWBP_EnemyGauge_SAN_C::Text_SanityValue' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_SAN_C, GaugeMaterial) == 0x000290, "Member 'UWBP_EnemyGauge_SAN_C::GaugeMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_SAN_C, OriginalSanityGaugeColor) == 0x000298, "Member 'UWBP_EnemyGauge_SAN_C::OriginalSanityGaugeColor' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyGauge_SAN_C, LowSanityGaugeColor) == 0x0002A8, "Member 'UWBP_EnemyGauge_SAN_C::LowSanityGaugeColor' has a wrong offset!");

}

