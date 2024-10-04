#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_CoopParam_Cover.BP_CoopParam_Cover_C
// 0x0020 (0x00C0 - 0x00A0)
class UBP_CoopParam_Cover_C final : public UActorComponent
{
public:
	double                                        ApproachRadius;                                    // 0x00A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SlideDistanceInAim;                                // 0x00A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ApproachSpeedRate;                                 // 0x00B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AnimMontage;                                       // 0x00B8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CoopParam_Cover_C">();
	}
	static class UBP_CoopParam_Cover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CoopParam_Cover_C>();
	}
};
static_assert(alignof(UBP_CoopParam_Cover_C) == 0x000008, "Wrong alignment on UBP_CoopParam_Cover_C");
static_assert(sizeof(UBP_CoopParam_Cover_C) == 0x0000C0, "Wrong size on UBP_CoopParam_Cover_C");
static_assert(offsetof(UBP_CoopParam_Cover_C, ApproachRadius) == 0x0000A0, "Member 'UBP_CoopParam_Cover_C::ApproachRadius' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Cover_C, SlideDistanceInAim) == 0x0000A8, "Member 'UBP_CoopParam_Cover_C::SlideDistanceInAim' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Cover_C, ApproachSpeedRate) == 0x0000B0, "Member 'UBP_CoopParam_Cover_C::ApproachSpeedRate' has a wrong offset!");
static_assert(offsetof(UBP_CoopParam_Cover_C, AnimMontage) == 0x0000B8, "Member 'UBP_CoopParam_Cover_C::AnimMontage' has a wrong offset!");

}

