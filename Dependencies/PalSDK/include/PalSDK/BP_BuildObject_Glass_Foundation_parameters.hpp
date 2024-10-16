#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_BuildObject_Glass_Foundation.BP_BuildObject_Glass_Foundation_C.GetStaticMeshComponents
// 0x0020 (0x0020 - 0x0000)
struct BP_BuildObject_Glass_Foundation_C_GetStaticMeshComponents final
{
public:
	TArray<class UStaticMeshComponent*>           OutComponents;                                     // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>           K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_BuildObject_Glass_Foundation_C_GetStaticMeshComponents) == 0x000008, "Wrong alignment on BP_BuildObject_Glass_Foundation_C_GetStaticMeshComponents");
static_assert(sizeof(BP_BuildObject_Glass_Foundation_C_GetStaticMeshComponents) == 0x000020, "Wrong size on BP_BuildObject_Glass_Foundation_C_GetStaticMeshComponents");
static_assert(offsetof(BP_BuildObject_Glass_Foundation_C_GetStaticMeshComponents, OutComponents) == 0x000000, "Member 'BP_BuildObject_Glass_Foundation_C_GetStaticMeshComponents::OutComponents' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_Foundation_C_GetStaticMeshComponents, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_BuildObject_Glass_Foundation_C_GetStaticMeshComponents::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_BuildObject_Glass_Foundation.BP_BuildObject_Glass_Foundation_C.GetStaticMeshInfos
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObject_Glass_Foundation_C_GetStaticMeshInfos final
{
public:
	TArray<struct FPalStaticMeshImposterStaticMeshInfo> OutStaticMeshInfo;                                 // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BP_BuildObject_Glass_Foundation_C_GetStaticMeshInfos) == 0x000008, "Wrong alignment on BP_BuildObject_Glass_Foundation_C_GetStaticMeshInfos");
static_assert(sizeof(BP_BuildObject_Glass_Foundation_C_GetStaticMeshInfos) == 0x000010, "Wrong size on BP_BuildObject_Glass_Foundation_C_GetStaticMeshInfos");
static_assert(offsetof(BP_BuildObject_Glass_Foundation_C_GetStaticMeshInfos, OutStaticMeshInfo) == 0x000000, "Member 'BP_BuildObject_Glass_Foundation_C_GetStaticMeshInfos::OutStaticMeshInfo' has a wrong offset!");

}

