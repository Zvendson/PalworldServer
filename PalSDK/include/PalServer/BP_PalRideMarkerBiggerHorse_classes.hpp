#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalRideMarkerBiggerHorse.BP_PalRideMarkerBiggerHorse_C
// 0x0020 (0x0660 - 0x0640)
class UBP_PalRideMarkerBiggerHorse_C final : public UPalRideMarkerComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Effect;                                            // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        MinSpeed;                                          // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxSpeed;                                          // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnChangeRiding______________0(bool IsEnable);
	void ExecuteUbergraph_BP_PalRideMarkerBiggerHorse(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRideMarkerBiggerHorse_C">();
	}
	static class UBP_PalRideMarkerBiggerHorse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalRideMarkerBiggerHorse_C>();
	}
};
static_assert(alignof(UBP_PalRideMarkerBiggerHorse_C) == 0x000010, "Wrong alignment on UBP_PalRideMarkerBiggerHorse_C");
static_assert(sizeof(UBP_PalRideMarkerBiggerHorse_C) == 0x000660, "Wrong size on UBP_PalRideMarkerBiggerHorse_C");
static_assert(offsetof(UBP_PalRideMarkerBiggerHorse_C, UberGraphFrame) == 0x000640, "Member 'UBP_PalRideMarkerBiggerHorse_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalRideMarkerBiggerHorse_C, Effect) == 0x000648, "Member 'UBP_PalRideMarkerBiggerHorse_C::Effect' has a wrong offset!");
static_assert(offsetof(UBP_PalRideMarkerBiggerHorse_C, MinSpeed) == 0x000650, "Member 'UBP_PalRideMarkerBiggerHorse_C::MinSpeed' has a wrong offset!");
static_assert(offsetof(UBP_PalRideMarkerBiggerHorse_C, MaxSpeed) == 0x000658, "Member 'UBP_PalRideMarkerBiggerHorse_C::MaxSpeed' has a wrong offset!");

}

