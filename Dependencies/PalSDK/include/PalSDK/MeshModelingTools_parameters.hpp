#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function MeshModelingTools.ExistingMeshMaterialProperties.GetUVChannelNamesFunc
// 0x0010 (0x0010 - 0x0000)
struct ExistingMeshMaterialProperties_GetUVChannelNamesFunc final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ExistingMeshMaterialProperties_GetUVChannelNamesFunc) == 0x000008, "Wrong alignment on ExistingMeshMaterialProperties_GetUVChannelNamesFunc");
static_assert(sizeof(ExistingMeshMaterialProperties_GetUVChannelNamesFunc) == 0x000010, "Wrong size on ExistingMeshMaterialProperties_GetUVChannelNamesFunc");
static_assert(offsetof(ExistingMeshMaterialProperties_GetUVChannelNamesFunc, ReturnValue) == 0x000000, "Member 'ExistingMeshMaterialProperties_GetUVChannelNamesFunc::ReturnValue' has a wrong offset!");

// Function MeshModelingTools.MeshUVChannelProperties.GetUVChannelNamesFunc
// 0x0010 (0x0010 - 0x0000)
struct MeshUVChannelProperties_GetUVChannelNamesFunc final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshUVChannelProperties_GetUVChannelNamesFunc) == 0x000008, "Wrong alignment on MeshUVChannelProperties_GetUVChannelNamesFunc");
static_assert(sizeof(MeshUVChannelProperties_GetUVChannelNamesFunc) == 0x000010, "Wrong size on MeshUVChannelProperties_GetUVChannelNamesFunc");
static_assert(offsetof(MeshUVChannelProperties_GetUVChannelNamesFunc, ReturnValue) == 0x000000, "Member 'MeshUVChannelProperties_GetUVChannelNamesFunc::ReturnValue' has a wrong offset!");

}

