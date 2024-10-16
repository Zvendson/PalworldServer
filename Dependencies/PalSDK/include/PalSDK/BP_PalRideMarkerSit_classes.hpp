#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalRideMarkerSit.BP_PalRideMarkerSit_C
// 0x0040 (0x0680 - 0x0640)
class UBP_PalRideMarkerSit_C final : public UPalRideMarkerComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        MaterialTimer;                                     // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaterialTime;                                      // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            MaterialCurve;                                     // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       DynamicMaterials;                                  // 0x0660(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsMaterialComplete;                                // 0x0670(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetMaterialProgress(double Progress);
	void ResetMaterial();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnChangeRiding______________0(bool IsEnable);
	void ExecuteUbergraph_BP_PalRideMarkerSit(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRideMarkerSit_C">();
	}
	static class UBP_PalRideMarkerSit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalRideMarkerSit_C>();
	}
};
static_assert(alignof(UBP_PalRideMarkerSit_C) == 0x000010, "Wrong alignment on UBP_PalRideMarkerSit_C");
static_assert(sizeof(UBP_PalRideMarkerSit_C) == 0x000680, "Wrong size on UBP_PalRideMarkerSit_C");
static_assert(offsetof(UBP_PalRideMarkerSit_C, UberGraphFrame) == 0x000640, "Member 'UBP_PalRideMarkerSit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalRideMarkerSit_C, MaterialTimer) == 0x000648, "Member 'UBP_PalRideMarkerSit_C::MaterialTimer' has a wrong offset!");
static_assert(offsetof(UBP_PalRideMarkerSit_C, MaterialTime) == 0x000650, "Member 'UBP_PalRideMarkerSit_C::MaterialTime' has a wrong offset!");
static_assert(offsetof(UBP_PalRideMarkerSit_C, MaterialCurve) == 0x000658, "Member 'UBP_PalRideMarkerSit_C::MaterialCurve' has a wrong offset!");
static_assert(offsetof(UBP_PalRideMarkerSit_C, DynamicMaterials) == 0x000660, "Member 'UBP_PalRideMarkerSit_C::DynamicMaterials' has a wrong offset!");
static_assert(offsetof(UBP_PalRideMarkerSit_C, IsMaterialComplete) == 0x000670, "Member 'UBP_PalRideMarkerSit_C::IsMaterialComplete' has a wrong offset!");

}

