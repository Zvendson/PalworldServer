#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_VolcanicMonster.BP_VolcanicMonster_C.GetVisual_ExceptMainMesh_SyncAnyway
// 0x0028 (0x0028 - 0x0000)
struct BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway final
{
public:
	TArray<class USceneComponent*>                OutComponent;                                      // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class USceneComponent*>                NewLocalVar;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway) == 0x000008, "Wrong alignment on BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway");
static_assert(sizeof(BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway) == 0x000028, "Wrong size on BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway");
static_assert(offsetof(BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway, OutComponent) == 0x000000, "Member 'BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway::OutComponent' has a wrong offset!");
static_assert(offsetof(BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway, NewLocalVar) == 0x000010, "Member 'BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway::NewLocalVar' has a wrong offset!");
static_assert(offsetof(BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'BP_VolcanicMonster_C_GetVisual_ExceptMainMesh_SyncAnyway::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

