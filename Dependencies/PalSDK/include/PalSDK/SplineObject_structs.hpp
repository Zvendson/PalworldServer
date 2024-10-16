#pragma once

#include "Basic.hpp"

#include "RiverSplineElement_structs.hpp"


namespace PalSDK
{

// UserDefinedStruct SplineObject.SplineObject
// 0x0078 (0x0078 - 0x0000)
struct FSplineObject final
{
public:
	class USplineComponent*                       SplineComponent_4_1D66F7664AC0412834006EACF2F458D1; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRiverSplineElement                    SplineElement_27_62D4534842033DB22DB70AA009FACCF8; // 0x0008(0x0070)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSplineObject) == 0x000008, "Wrong alignment on FSplineObject");
static_assert(sizeof(FSplineObject) == 0x000078, "Wrong size on FSplineObject");
static_assert(offsetof(FSplineObject, SplineComponent_4_1D66F7664AC0412834006EACF2F458D1) == 0x000000, "Member 'FSplineObject::SplineComponent_4_1D66F7664AC0412834006EACF2F458D1' has a wrong offset!");
static_assert(offsetof(FSplineObject, SplineElement_27_62D4534842033DB22DB70AA009FACCF8) == 0x000008, "Member 'FSplineObject::SplineElement_27_62D4534842033DB22DB70AA009FACCF8' has a wrong offset!");

}

