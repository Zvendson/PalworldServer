#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function ALI_HumanHair.ALI_HumanHair_C.HairLayer
// 0x0020 (0x0020 - 0x0000)
struct ALI_HumanHair_C_HairLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              HairLayer_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_HumanHair_C_HairLayer) == 0x000008, "Wrong alignment on ALI_HumanHair_C_HairLayer");
static_assert(sizeof(ALI_HumanHair_C_HairLayer) == 0x000020, "Wrong size on ALI_HumanHair_C_HairLayer");
static_assert(offsetof(ALI_HumanHair_C_HairLayer, InPose) == 0x000000, "Member 'ALI_HumanHair_C_HairLayer::InPose' has a wrong offset!");
static_assert(offsetof(ALI_HumanHair_C_HairLayer, HairLayer_0) == 0x000010, "Member 'ALI_HumanHair_C_HairLayer::HairLayer_0' has a wrong offset!");

}

