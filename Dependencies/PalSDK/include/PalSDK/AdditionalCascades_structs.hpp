#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// UserDefinedStruct AdditionalCascades.AdditionalCascades
// 0x0090 (0x0090 - 0x0000)
struct FAdditionalCascades final
{
public:
	bool                                          GroundCheck_28_A6A012C24B35997C7699838357EE6D33;   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EasyScale_11_67CA65DB47FC16694A0C129F80BAA58A;     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform_25_E9077CB7454CBBFB01F9FAB68A3A1959;     // 0x0010(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSplinePoint>                   SplinePoints_3_9FEC5B1E442397E1BCAE7EA746E41A17;   // 0x0070(0x0010)(Edit, BlueprintVisible)
	TArray<class AActor*>                         ActorstoIgnore_15_677CA1B446ED3E57BACA079B76EE1C71; // 0x0080(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
};
static_assert(alignof(FAdditionalCascades) == 0x000010, "Wrong alignment on FAdditionalCascades");
static_assert(sizeof(FAdditionalCascades) == 0x000090, "Wrong size on FAdditionalCascades");
static_assert(offsetof(FAdditionalCascades, GroundCheck_28_A6A012C24B35997C7699838357EE6D33) == 0x000000, "Member 'FAdditionalCascades::GroundCheck_28_A6A012C24B35997C7699838357EE6D33' has a wrong offset!");
static_assert(offsetof(FAdditionalCascades, EasyScale_11_67CA65DB47FC16694A0C129F80BAA58A) == 0x000004, "Member 'FAdditionalCascades::EasyScale_11_67CA65DB47FC16694A0C129F80BAA58A' has a wrong offset!");
static_assert(offsetof(FAdditionalCascades, Transform_25_E9077CB7454CBBFB01F9FAB68A3A1959) == 0x000010, "Member 'FAdditionalCascades::Transform_25_E9077CB7454CBBFB01F9FAB68A3A1959' has a wrong offset!");
static_assert(offsetof(FAdditionalCascades, SplinePoints_3_9FEC5B1E442397E1BCAE7EA746E41A17) == 0x000070, "Member 'FAdditionalCascades::SplinePoints_3_9FEC5B1E442397E1BCAE7EA746E41A17' has a wrong offset!");
static_assert(offsetof(FAdditionalCascades, ActorstoIgnore_15_677CA1B446ED3E57BACA079B76EE1C71) == 0x000080, "Member 'FAdditionalCascades::ActorstoIgnore_15_677CA1B446ED3E57BACA079B76EE1C71' has a wrong offset!");

}

