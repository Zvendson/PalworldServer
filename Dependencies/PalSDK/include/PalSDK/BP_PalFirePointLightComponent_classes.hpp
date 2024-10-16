#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C
// 0x0030 (0x0450 - 0x0420)
class UBP_PalFirePointLightComponent_C final : public UPalFirePointLightComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFloatInterval                         BlinkDurationInterval;                             // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentBlinkDuration;                              // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ProgressTimeInPeriod;                              // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            Curve;                                             // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        MaxIntensityCache;                                 // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CacheAndClearIntensity();
	void ExecuteUbergraph_BP_PalFirePointLightComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ResetBlinkDuration();

	double GetCurrentProgressCurveValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalFirePointLightComponent_C">();
	}
	static class UBP_PalFirePointLightComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalFirePointLightComponent_C>();
	}
};
static_assert(alignof(UBP_PalFirePointLightComponent_C) == 0x000010, "Wrong alignment on UBP_PalFirePointLightComponent_C");
static_assert(sizeof(UBP_PalFirePointLightComponent_C) == 0x000450, "Wrong size on UBP_PalFirePointLightComponent_C");
static_assert(offsetof(UBP_PalFirePointLightComponent_C, UberGraphFrame) == 0x000420, "Member 'UBP_PalFirePointLightComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalFirePointLightComponent_C, BlinkDurationInterval) == 0x000428, "Member 'UBP_PalFirePointLightComponent_C::BlinkDurationInterval' has a wrong offset!");
static_assert(offsetof(UBP_PalFirePointLightComponent_C, CurrentBlinkDuration) == 0x000430, "Member 'UBP_PalFirePointLightComponent_C::CurrentBlinkDuration' has a wrong offset!");
static_assert(offsetof(UBP_PalFirePointLightComponent_C, ProgressTimeInPeriod) == 0x000438, "Member 'UBP_PalFirePointLightComponent_C::ProgressTimeInPeriod' has a wrong offset!");
static_assert(offsetof(UBP_PalFirePointLightComponent_C, Curve) == 0x000440, "Member 'UBP_PalFirePointLightComponent_C::Curve' has a wrong offset!");
static_assert(offsetof(UBP_PalFirePointLightComponent_C, MaxIntensityCache) == 0x000448, "Member 'UBP_PalFirePointLightComponent_C::MaxIntensityCache' has a wrong offset!");

}

