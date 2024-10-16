#pragma once

#include "Basic.hpp"

#include "F_NPCOnePointSpawnInfo_structs.hpp"
#include "F_NPC_PathWalkPoint_structs.hpp"
#include "F_NPC_PathWalkArray_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_NPCSpawnPointComponent.BP_NPCSpawnPointComponent_C.ExecuteUbergraph_BP_NPCSpawnPointComponent
// 0x0004 (0x0004 - 0x0000)
struct BP_NPCSpawnPointComponent_C_ExecuteUbergraph_BP_NPCSpawnPointComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCSpawnPointComponent_C_ExecuteUbergraph_BP_NPCSpawnPointComponent) == 0x000004, "Wrong alignment on BP_NPCSpawnPointComponent_C_ExecuteUbergraph_BP_NPCSpawnPointComponent");
static_assert(sizeof(BP_NPCSpawnPointComponent_C_ExecuteUbergraph_BP_NPCSpawnPointComponent) == 0x000004, "Wrong size on BP_NPCSpawnPointComponent_C_ExecuteUbergraph_BP_NPCSpawnPointComponent");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_ExecuteUbergraph_BP_NPCSpawnPointComponent, EntryPoint) == 0x000000, "Member 'BP_NPCSpawnPointComponent_C_ExecuteUbergraph_BP_NPCSpawnPointComponent::EntryPoint' has a wrong offset!");

// Function BP_NPCSpawnPointComponent.BP_NPCSpawnPointComponent_C.GetOneSpawnInfo
// 0x0270 (0x0270 - 0x0000)
struct BP_NPCSpawnPointComponent_C_GetOneSpawnInfo final
{
public:
	struct FF_NPCOnePointSpawnInfo                Info;                                              // 0x0000(0x00A0)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FF_NPC_PathWalkPoint>           TempArray;                                         // 0x00A0(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_NPC_PathWalkArray                   K2Node_MakeStruct_F_NPC_PathWalkArray;             // 0x00C0(0x0010)(HasGetValueTypeHash)
	class UBP_NPCPathWalkPointComponent_1_C*      CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkPoint                   K2Node_MakeStruct_F_NPC_PathWalkPoint;             // 0x0120(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk; // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x3];                                      // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0160(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_NPCOnePointSpawnInfo                K2Node_MakeStruct_F_NPCOnePointSpawnInfo;          // 0x01C0(0x00A0)(HasGetValueTypeHash)
	double                                        K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast; // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo) == 0x000010, "Wrong alignment on BP_NPCSpawnPointComponent_C_GetOneSpawnInfo");
static_assert(sizeof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo) == 0x000270, "Wrong size on BP_NPCSpawnPointComponent_C_GetOneSpawnInfo");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, Info) == 0x000000, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::Info' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, TempArray) == 0x0000A0, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::TempArray' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, Temp_int_Array_Index_Variable) == 0x0000B0, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, Temp_int_Loop_Counter_Variable) == 0x0000B4, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, CallFunc_Add_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, K2Node_MakeStruct_F_NPC_PathWalkArray) == 0x0000C0, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::K2Node_MakeStruct_F_NPC_PathWalkArray' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0000E0, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, CallFunc_Less_IntInt_ReturnValue) == 0x0000F8, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, CallFunc_BreakRotator_Roll) == 0x0000FC, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, CallFunc_BreakRotator_Pitch) == 0x000100, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, CallFunc_BreakRotator_Yaw) == 0x000104, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000108, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, K2Node_MakeStruct_F_NPC_PathWalkPoint) == 0x000120, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::K2Node_MakeStruct_F_NPC_PathWalkPoint' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk) == 0x000150, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, K2Node_ClassDynamicCast_bSuccess) == 0x000158, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, CallFunc_Array_Add_ReturnValue) == 0x00015C, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000160, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, K2Node_MakeStruct_F_NPCOnePointSpawnInfo) == 0x0001C0, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::K2Node_MakeStruct_F_NPCOnePointSpawnInfo' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_GetOneSpawnInfo, K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast) == 0x000260, "Member 'BP_NPCSpawnPointComponent_C_GetOneSpawnInfo::K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast' has a wrong offset!");

// Function BP_NPCSpawnPointComponent.BP_NPCSpawnPointComponent_C.Setup Walk Point Ref
// 0x00C0 (0x00C0 - 0x0000)
struct BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref final
{
public:
	TArray<class UBP_NPCPathWalkPointComponent_1_C*> TempList;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalNPCSpawnerBase*                     K2Node_DynamicCast_AsPal_NPCSpawner_Base;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        CallFunc_PathWalkNameSort_OutSortedWalkPoint;      // 0x0050(0x0010)(ReferenceParm)
	class UObject*                                CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_NPCPathWalkPointComponent_1_C*      K2Node_DynamicCast_AsBP_NPCPath_Walk_Point_Component_1; // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_Array_Get_Item_1;                         // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_NPCPathWalkPointComponent_1_C*      K2Node_DynamicCast_AsBP_NPCPath_Walk_Point_Component_1_1; // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref) == 0x000008, "Wrong alignment on BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref");
static_assert(sizeof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref) == 0x0000C0, "Wrong size on BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, TempList) == 0x000000, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::TempList' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, Temp_int_Loop_Counter_Variable_1) == 0x000020, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk) == 0x000028, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, K2Node_ClassDynamicCast_bSuccess) == 0x000030, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_GetOwner_ReturnValue) == 0x000038, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, K2Node_DynamicCast_AsPal_NPCSpawner_Base) == 0x000040, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::K2Node_DynamicCast_AsPal_NPCSpawner_Base' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_PathWalkNameSort_OutSortedWalkPoint) == 0x000050, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_PathWalkNameSort_OutSortedWalkPoint' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Array_Get_Item) == 0x000060, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, K2Node_DynamicCast_AsBP_NPCPath_Walk_Point_Component_1) == 0x000070, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::K2Node_DynamicCast_AsBP_NPCPath_Walk_Point_Component_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Less_IntInt_ReturnValue) == 0x000079, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Array_Add_ReturnValue) == 0x00007C, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Array_Length_ReturnValue_1) == 0x000080, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_GetChildrenComponents_Children) == 0x000088, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Greater_IntInt_ReturnValue) == 0x000098, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Array_Get_Item_1) == 0x0000A0, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, K2Node_DynamicCast_AsBP_NPCPath_Walk_Point_Component_1_1) == 0x0000A8, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::K2Node_DynamicCast_AsBP_NPCPath_Walk_Point_Component_1_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Array_Length_ReturnValue_2) == 0x0000B4, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Array_Add_ReturnValue_1) == 0x0000B8, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000BC, "Member 'BP_NPCSpawnPointComponent_C_Setup_Walk_Point_Ref::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

