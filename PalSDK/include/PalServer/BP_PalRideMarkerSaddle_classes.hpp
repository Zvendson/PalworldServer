#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalRideMarkerSaddle.BP_PalRideMarkerSaddle_C
// 0x0020 (0x0660 - 0x0640)
class UBP_PalRideMarkerSaddle_C final : public UPalRideMarkerComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Effect;                                            // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        MinSpeed;                                          // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxSpeed;                                          // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalRideMarkerSaddle(int32 EntryPoint);
	void OnChangeRiding______________0(bool IsEnable);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRideMarkerSaddle_C">();
	}
	static class UBP_PalRideMarkerSaddle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalRideMarkerSaddle_C>();
	}
};
static_assert(alignof(UBP_PalRideMarkerSaddle_C) == 0x000010, "Wrong alignment on UBP_PalRideMarkerSaddle_C");
static_assert(sizeof(UBP_PalRideMarkerSaddle_C) == 0x000660, "Wrong size on UBP_PalRideMarkerSaddle_C");
static_assert(offsetof(UBP_PalRideMarkerSaddle_C, UberGraphFrame) == 0x000640, "Member 'UBP_PalRideMarkerSaddle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalRideMarkerSaddle_C, Effect) == 0x000648, "Member 'UBP_PalRideMarkerSaddle_C::Effect' has a wrong offset!");
static_assert(offsetof(UBP_PalRideMarkerSaddle_C, MinSpeed) == 0x000650, "Member 'UBP_PalRideMarkerSaddle_C::MinSpeed' has a wrong offset!");
static_assert(offsetof(UBP_PalRideMarkerSaddle_C, MaxSpeed) == 0x000658, "Member 'UBP_PalRideMarkerSaddle_C::MaxSpeed' has a wrong offset!");

}

