#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_CompassIconBase.WBP_CompassIconBase_C
// 0x0040 (0x0448 - 0x0408)
class UWBP_CompassIconBase_C : public UPalUICompassIconBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                Target_Location;                                   // 0x0410(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  MyLocationID;                                      // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HiddenDistance;                                    // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C[0x4];                                      // 0x043C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurrentDistance;                                   // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CompassIconBase(int32 EntryPoint);
	void Get_Offset_Value(double* OffSetValue);
	void PostSetup();
	void SetDisplayDistance(double Length);
	void SetDistanceText(double Length);
	void SetLocationId(const struct FGuid& LocationId);
	void SetTargetLocation(const struct FVector& TargetLocation);
	void SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateDistance();
	void UpdateVisibility(bool* InDistance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CompassIconBase_C">();
	}
	static class UWBP_CompassIconBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CompassIconBase_C>();
	}
};
static_assert(alignof(UWBP_CompassIconBase_C) == 0x000008, "Wrong alignment on UWBP_CompassIconBase_C");
static_assert(sizeof(UWBP_CompassIconBase_C) == 0x000448, "Wrong size on UWBP_CompassIconBase_C");
static_assert(offsetof(UWBP_CompassIconBase_C, UberGraphFrame) == 0x000408, "Member 'UWBP_CompassIconBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CompassIconBase_C, Target_Location) == 0x000410, "Member 'UWBP_CompassIconBase_C::Target_Location' has a wrong offset!");
static_assert(offsetof(UWBP_CompassIconBase_C, MyLocationID) == 0x000428, "Member 'UWBP_CompassIconBase_C::MyLocationID' has a wrong offset!");
static_assert(offsetof(UWBP_CompassIconBase_C, HiddenDistance) == 0x000438, "Member 'UWBP_CompassIconBase_C::HiddenDistance' has a wrong offset!");
static_assert(offsetof(UWBP_CompassIconBase_C, CurrentDistance) == 0x000440, "Member 'UWBP_CompassIconBase_C::CurrentDistance' has a wrong offset!");

}

