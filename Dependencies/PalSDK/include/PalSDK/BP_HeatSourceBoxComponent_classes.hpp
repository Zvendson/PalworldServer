#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_HeatSourceBoxComponent.BP_HeatSourceBoxComponent_C
// 0x0010 (0x05A0 - 0x0590)
class UBP_HeatSourceBoxComponent_C final : public UPalHeatSourceBoxComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0590(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         HeatLevel_DayTime;                                 // 0x0598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HeatLevel_NightTime;                               // 0x059C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Begin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void End(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_HeatSourceBoxComponent(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HeatSourceBoxComponent_C">();
	}
	static class UBP_HeatSourceBoxComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HeatSourceBoxComponent_C>();
	}
};
static_assert(alignof(UBP_HeatSourceBoxComponent_C) == 0x000010, "Wrong alignment on UBP_HeatSourceBoxComponent_C");
static_assert(sizeof(UBP_HeatSourceBoxComponent_C) == 0x0005A0, "Wrong size on UBP_HeatSourceBoxComponent_C");
static_assert(offsetof(UBP_HeatSourceBoxComponent_C, UberGraphFrame) == 0x000590, "Member 'UBP_HeatSourceBoxComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_HeatSourceBoxComponent_C, HeatLevel_DayTime) == 0x000598, "Member 'UBP_HeatSourceBoxComponent_C::HeatLevel_DayTime' has a wrong offset!");
static_assert(offsetof(UBP_HeatSourceBoxComponent_C, HeatLevel_NightTime) == 0x00059C, "Member 'UBP_HeatSourceBoxComponent_C::HeatLevel_NightTime' has a wrong offset!");

}

