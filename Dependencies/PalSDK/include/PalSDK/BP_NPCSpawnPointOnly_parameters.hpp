#pragma once

#include "Basic.hpp"

#include "F_NPC_PathWalkPoint_structs.hpp"
#include "F_NPCOnePointSpawnInfo_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "F_NPC_PathWalkArray_structs.hpp"


namespace PalSDK::Params
{

// Function BP_NPCSpawnPointOnly.BP_NPCSpawnPointOnly_C.Get Spawn One Info
// 0x02F0 (0x02F0 - 0x0000)
struct BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info final
{
public:
	struct FF_NPCOnePointSpawnInfo                OneInfo;                                           // 0x0000(0x00A0)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FF_NPC_PathWalkPoint>           TempArray;                                         // 0x00A0(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FF_NPC_PathWalkPoint>           K2Node_MakeArray_Array_1;                          // 0x00E0(0x0010)(ReferenceParm)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00F0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkArray                   K2Node_MakeStruct_F_NPC_PathWalkArray;             // 0x0150(0x0010)(HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_165[0x3];                                      // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0170(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UClass*                                 K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk; // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_Array_Get_Item_1;                         // 0x0190(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPC_WalkPathPoint_1_C*              K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1;     // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_NPC_PathWalkPoint                   K2Node_MakeStruct_F_NPC_PathWalkPoint;             // 0x0200(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0xC];                                      // 0x0234(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_NPCOnePointSpawnInfo                K2Node_MakeStruct_F_NPCOnePointSpawnInfo;          // 0x0240(0x00A0)(HasGetValueTypeHash)
	double                                        K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast; // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info) == 0x000010, "Wrong alignment on BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info");
static_assert(sizeof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info) == 0x0002F0, "Wrong size on BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, OneInfo) == 0x000000, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::OneInfo' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, TempArray) == 0x0000A0, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::TempArray' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, Temp_int_Array_Index_Variable) == 0x0000B0, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, K2Node_MakeArray_Array) == 0x0000B8, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, Temp_int_Loop_Counter_Variable) == 0x0000D4, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_Add_IntInt_ReturnValue) == 0x0000D8, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, Temp_int_Array_Index_Variable_1) == 0x0000DC, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, K2Node_MakeArray_Array_1) == 0x0000E0, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_GetTransform_ReturnValue) == 0x0000F0, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, K2Node_MakeStruct_F_NPC_PathWalkArray) == 0x000150, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::K2Node_MakeStruct_F_NPC_PathWalkArray' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, Temp_int_Loop_Counter_Variable_1) == 0x000160, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_Less_IntInt_ReturnValue) == 0x000164, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_Add_IntInt_ReturnValue_1) == 0x000168, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_GetChildrenComponents_Children) == 0x000170, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk) == 0x000180, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, K2Node_ClassDynamicCast_bSuccess) == 0x000188, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_Array_Get_Item_1) == 0x000190, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_Array_Length_ReturnValue_1) == 0x000198, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_GetOwner_ReturnValue) == 0x0001A0, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001A8, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1) == 0x0001B0, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0001C0, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001D8, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_BreakRotator_Roll) == 0x0001F0, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_BreakRotator_Pitch) == 0x0001F4, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_BreakRotator_Yaw) == 0x0001F8, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, K2Node_MakeStruct_F_NPC_PathWalkPoint) == 0x000200, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::K2Node_MakeStruct_F_NPC_PathWalkPoint' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, CallFunc_Array_Add_ReturnValue) == 0x000230, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, K2Node_MakeStruct_F_NPCOnePointSpawnInfo) == 0x000240, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::K2Node_MakeStruct_F_NPCOnePointSpawnInfo' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info, K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast) == 0x0002E0, "Member 'BP_NPCSpawnPointOnly_C_Get_Spawn_One_Info::K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast' has a wrong offset!");

// Function BP_NPCSpawnPointOnly.BP_NPCSpawnPointOnly_C.GetOneSpawnInfo
// 0x0140 (0x0140 - 0x0000)
struct BP_NPCSpawnPointOnly_C_GetOneSpawnInfo final
{
public:
	struct FF_NPCOnePointSpawnInfo                Info;                                              // 0x0000(0x00A0)(Parm, OutParm, HasGetValueTypeHash)
	struct FF_NPCOnePointSpawnInfo                CallFunc_Get_Spawn_One_Info_OneInfo;               // 0x00A0(0x00A0)(HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCSpawnPointOnly_C_GetOneSpawnInfo) == 0x000010, "Wrong alignment on BP_NPCSpawnPointOnly_C_GetOneSpawnInfo");
static_assert(sizeof(BP_NPCSpawnPointOnly_C_GetOneSpawnInfo) == 0x000140, "Wrong size on BP_NPCSpawnPointOnly_C_GetOneSpawnInfo");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_GetOneSpawnInfo, Info) == 0x000000, "Member 'BP_NPCSpawnPointOnly_C_GetOneSpawnInfo::Info' has a wrong offset!");
static_assert(offsetof(BP_NPCSpawnPointOnly_C_GetOneSpawnInfo, CallFunc_Get_Spawn_One_Info_OneInfo) == 0x0000A0, "Member 'BP_NPCSpawnPointOnly_C_GetOneSpawnInfo::CallFunc_Get_Spawn_One_Info_OneInfo' has a wrong offset!");

}

