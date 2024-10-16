#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalStaticMeshImposterChunk.BP_PalStaticMeshImposterChunk_C.Dev_SetChunkVisible
// 0x0001 (0x0001 - 0x0000)
struct BP_PalStaticMeshImposterChunk_C_Dev_SetChunkVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalStaticMeshImposterChunk_C_Dev_SetChunkVisible) == 0x000001, "Wrong alignment on BP_PalStaticMeshImposterChunk_C_Dev_SetChunkVisible");
static_assert(sizeof(BP_PalStaticMeshImposterChunk_C_Dev_SetChunkVisible) == 0x000001, "Wrong size on BP_PalStaticMeshImposterChunk_C_Dev_SetChunkVisible");
static_assert(offsetof(BP_PalStaticMeshImposterChunk_C_Dev_SetChunkVisible, bVisible) == 0x000000, "Member 'BP_PalStaticMeshImposterChunk_C_Dev_SetChunkVisible::bVisible' has a wrong offset!");

// Function BP_PalStaticMeshImposterChunk.BP_PalStaticMeshImposterChunk_C.ExecuteUbergraph_BP_PalStaticMeshImposterChunk
// 0x0038 (0x0038 - 0x0000)
struct BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bVisible;                             // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NewChunkGridSize;                     // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk) == 0x000008, "Wrong alignment on BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk");
static_assert(sizeof(BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk) == 0x000038, "Wrong size on BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk");
static_assert(offsetof(BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk, EntryPoint) == 0x000000, "Member 'BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk, K2Node_Event_bVisible) == 0x000004, "Member 'BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk, K2Node_Event_NewChunkGridSize) == 0x000008, "Member 'BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk::K2Node_Event_NewChunkGridSize' has a wrong offset!");
static_assert(offsetof(BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk, CallFunc_Divide_IntInt_ReturnValue) == 0x00000C, "Member 'BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000018, "Member 'BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk, CallFunc_MakeVector_ReturnValue) == 0x000020, "Member 'BP_PalStaticMeshImposterChunk_C_ExecuteUbergraph_BP_PalStaticMeshImposterChunk::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function BP_PalStaticMeshImposterChunk.BP_PalStaticMeshImposterChunk_C.OnSetChunkGridSize
// 0x0004 (0x0004 - 0x0000)
struct BP_PalStaticMeshImposterChunk_C_OnSetChunkGridSize final
{
public:
	int32                                         NewChunkGridSize;                                  // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalStaticMeshImposterChunk_C_OnSetChunkGridSize) == 0x000004, "Wrong alignment on BP_PalStaticMeshImposterChunk_C_OnSetChunkGridSize");
static_assert(sizeof(BP_PalStaticMeshImposterChunk_C_OnSetChunkGridSize) == 0x000004, "Wrong size on BP_PalStaticMeshImposterChunk_C_OnSetChunkGridSize");
static_assert(offsetof(BP_PalStaticMeshImposterChunk_C_OnSetChunkGridSize, NewChunkGridSize) == 0x000000, "Member 'BP_PalStaticMeshImposterChunk_C_OnSetChunkGridSize::NewChunkGridSize' has a wrong offset!");

}

