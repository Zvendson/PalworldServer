#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_SoldierBee.BP_SoldierBee_C.GetHandAttachMesh
// 0x0008 (0x0008 - 0x0000)
struct BP_SoldierBee_C_GetHandAttachMesh final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SoldierBee_C_GetHandAttachMesh) == 0x000008, "Wrong alignment on BP_SoldierBee_C_GetHandAttachMesh");
static_assert(sizeof(BP_SoldierBee_C_GetHandAttachMesh) == 0x000008, "Wrong size on BP_SoldierBee_C_GetHandAttachMesh");
static_assert(offsetof(BP_SoldierBee_C_GetHandAttachMesh, ReturnValue) == 0x000000, "Member 'BP_SoldierBee_C_GetHandAttachMesh::ReturnValue' has a wrong offset!");

}

