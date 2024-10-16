#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass SplineTarget_BP.SplineTarget_BP_C
// 0x0008 (0x0298 - 0x0290)
class ASplineTarget_BP_C final : public AActor
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SplineTarget_BP_C">();
	}
	static class ASplineTarget_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASplineTarget_BP_C>();
	}
};
static_assert(alignof(ASplineTarget_BP_C) == 0x000008, "Wrong alignment on ASplineTarget_BP_C");
static_assert(sizeof(ASplineTarget_BP_C) == 0x000298, "Wrong size on ASplineTarget_BP_C");
static_assert(offsetof(ASplineTarget_BP_C, Billboard) == 0x000290, "Member 'ASplineTarget_BP_C::Billboard' has a wrong offset!");

}

