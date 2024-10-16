#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function ALI_HumanCloth.ALI_HumanCloth_C.ClothLayer
// 0x0020 (0x0020 - 0x0000)
struct ALI_HumanCloth_C_ClothLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              ClothLayer_0;                                      // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_HumanCloth_C_ClothLayer) == 0x000008, "Wrong alignment on ALI_HumanCloth_C_ClothLayer");
static_assert(sizeof(ALI_HumanCloth_C_ClothLayer) == 0x000020, "Wrong size on ALI_HumanCloth_C_ClothLayer");
static_assert(offsetof(ALI_HumanCloth_C_ClothLayer, InPose) == 0x000000, "Member 'ALI_HumanCloth_C_ClothLayer::InPose' has a wrong offset!");
static_assert(offsetof(ALI_HumanCloth_C_ClothLayer, ClothLayer_0) == 0x000010, "Member 'ALI_HumanCloth_C_ClothLayer::ClothLayer_0' has a wrong offset!");

}

