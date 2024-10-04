#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function ALI_PalmiSubFunction.ALI_PalmiSubFunction_C.LeftHandAttach
// 0x0020 (0x0020 - 0x0000)
struct ALI_PalmiSubFunction_C_LeftHandAttach final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              LeftHandAttach_0;                                  // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_PalmiSubFunction_C_LeftHandAttach) == 0x000008, "Wrong alignment on ALI_PalmiSubFunction_C_LeftHandAttach");
static_assert(sizeof(ALI_PalmiSubFunction_C_LeftHandAttach) == 0x000020, "Wrong size on ALI_PalmiSubFunction_C_LeftHandAttach");
static_assert(offsetof(ALI_PalmiSubFunction_C_LeftHandAttach, InPose) == 0x000000, "Member 'ALI_PalmiSubFunction_C_LeftHandAttach::InPose' has a wrong offset!");
static_assert(offsetof(ALI_PalmiSubFunction_C_LeftHandAttach, LeftHandAttach_0) == 0x000010, "Member 'ALI_PalmiSubFunction_C_LeftHandAttach::LeftHandAttach_0' has a wrong offset!");

}

