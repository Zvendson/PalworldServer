#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_HeatSourceSphereComponent.BP_HeatSourceSphereComponent_C
// 0x0010 (0x0580 - 0x0570)
class UBP_HeatSourceSphereComponent_C final : public UPalHeatSourceSphereComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         HeatLevel_DayTime;                                 // 0x0578(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HeatLevel_NightTime;                               // 0x057C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Begin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void End(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_HeatSourceSphereComponent(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HeatSourceSphereComponent_C">();
	}
	static class UBP_HeatSourceSphereComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HeatSourceSphereComponent_C>();
	}
};
static_assert(alignof(UBP_HeatSourceSphereComponent_C) == 0x000010, "Wrong alignment on UBP_HeatSourceSphereComponent_C");
static_assert(sizeof(UBP_HeatSourceSphereComponent_C) == 0x000580, "Wrong size on UBP_HeatSourceSphereComponent_C");
static_assert(offsetof(UBP_HeatSourceSphereComponent_C, UberGraphFrame) == 0x000570, "Member 'UBP_HeatSourceSphereComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_HeatSourceSphereComponent_C, HeatLevel_DayTime) == 0x000578, "Member 'UBP_HeatSourceSphereComponent_C::HeatLevel_DayTime' has a wrong offset!");
static_assert(offsetof(UBP_HeatSourceSphereComponent_C, HeatLevel_NightTime) == 0x00057C, "Member 'UBP_HeatSourceSphereComponent_C::HeatLevel_NightTime' has a wrong offset!");

}

