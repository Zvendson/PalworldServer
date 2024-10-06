#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ExecuteUbergraph_BP_PalCharacterMaterialVolume
// 0x0008 (0x0008 - 0x0000)
struct BP_PalCharacterMaterialVolume_C_ExecuteUbergraph_BP_PalCharacterMaterialVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCharacterMaterialVolume_C_ExecuteUbergraph_BP_PalCharacterMaterialVolume) == 0x000004, "Wrong alignment on BP_PalCharacterMaterialVolume_C_ExecuteUbergraph_BP_PalCharacterMaterialVolume");
static_assert(sizeof(BP_PalCharacterMaterialVolume_C_ExecuteUbergraph_BP_PalCharacterMaterialVolume) == 0x000008, "Wrong size on BP_PalCharacterMaterialVolume_C_ExecuteUbergraph_BP_PalCharacterMaterialVolume");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ExecuteUbergraph_BP_PalCharacterMaterialVolume, EntryPoint) == 0x000000, "Member 'BP_PalCharacterMaterialVolume_C_ExecuteUbergraph_BP_PalCharacterMaterialVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ExecuteUbergraph_BP_PalCharacterMaterialVolume, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_PalCharacterMaterialVolume_C_ExecuteUbergraph_BP_PalCharacterMaterialVolume::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ForceInit
// 0x0118 (0x0118 - 0x0000)
struct BP_PalCharacterMaterialVolume_C_ForceInit final
{
public:
	TArray<class AActor*>                         Actors;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UMeshComponent*                         Mesh;                                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0050(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPalLit_IsPalLit;                        // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPalLit_IsPalLit_1;                      // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMeshComponent*>                 CallFunc_GetMeshFromActor_Mesh;                    // 0x00C0(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         CallFunc_Array_Get_Item_2;                         // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors_1; // 0x00F0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_3;                         // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCharacterMaterialVolume_C_ForceInit) == 0x000008, "Wrong alignment on BP_PalCharacterMaterialVolume_C_ForceInit");
static_assert(sizeof(BP_PalCharacterMaterialVolume_C_ForceInit) == 0x000118, "Wrong size on BP_PalCharacterMaterialVolume_C_ForceInit");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, Actors) == 0x000000, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::Actors' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, Mesh) == 0x000010, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::Mesh' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, Temp_int_Variable) == 0x000018, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, Temp_int_Loop_Counter_Variable_1) == 0x000030, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Add_IntInt_ReturnValue_2) == 0x000034, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, Temp_int_Array_Index_Variable_2) == 0x000038, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, Temp_int_Loop_Counter_Variable_2) == 0x00003C, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Add_IntInt_ReturnValue_3) == 0x000040, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, Temp_int_Loop_Counter_Variable_3) == 0x000048, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000050, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Array_Add_ReturnValue) == 0x000070, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Array_Length_ReturnValue_1) == 0x000074, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Add_IntInt_ReturnValue_4) == 0x000078, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Less_IntInt_ReturnValue_1) == 0x00007C, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000080, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_GetMaterial_ReturnValue) == 0x000088, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000098, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_IsValid_ReturnValue_1) == 0x0000A1, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_IsPalLit_IsPalLit) == 0x0000A2, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_IsPalLit_IsPalLit' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_IsPalLit_IsPalLit_1) == 0x0000A3, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_IsPalLit_IsPalLit_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, Temp_int_Array_Index_Variable_3) == 0x0000A4, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_GetNumMaterials_ReturnValue) == 0x0000A8, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_GetMeshFromActor_Mesh) == 0x0000C0, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_GetMeshFromActor_Mesh' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Array_Get_Item_2) == 0x0000D8, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_IsValid_ReturnValue_2) == 0x0000E0, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Array_Length_ReturnValue_2) == 0x0000E4, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000E8, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_GetOverlappingActors_OverlappingActors_1) == 0x0000F0, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_GetOverlappingActors_OverlappingActors_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Array_Length_ReturnValue_3) == 0x000100, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Array_Get_Item_3) == 0x000108, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Less_IntInt_ReturnValue_3) == 0x000110, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceInit, CallFunc_Array_Add_ReturnValue_1) == 0x000114, "Member 'BP_PalCharacterMaterialVolume_C_ForceInit::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ForceOff
// 0x0038 (0x0038 - 0x0000)
struct BP_PalCharacterMaterialVolume_C_ForceOff final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       CallFunc_Set_ToArray_Result;                       // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCharacterMaterialVolume_C_ForceOff) == 0x000008, "Wrong alignment on BP_PalCharacterMaterialVolume_C_ForceOff");
static_assert(sizeof(BP_PalCharacterMaterialVolume_C_ForceOff) == 0x000038, "Wrong size on BP_PalCharacterMaterialVolume_C_ForceOff");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOff, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_PalCharacterMaterialVolume_C_ForceOff::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOff, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_PalCharacterMaterialVolume_C_ForceOff::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOff, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalCharacterMaterialVolume_C_ForceOff::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOff, CallFunc_Set_ToArray_Result) == 0x000010, "Member 'BP_PalCharacterMaterialVolume_C_ForceOff::CallFunc_Set_ToArray_Result' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOff, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_PalCharacterMaterialVolume_C_ForceOff::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOff, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PalCharacterMaterialVolume_C_ForceOff::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOff, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_PalCharacterMaterialVolume_C_ForceOff::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ForceOn
// 0x0038 (0x0038 - 0x0000)
struct BP_PalCharacterMaterialVolume_C_ForceOn final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       CallFunc_Set_ToArray_Result;                       // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCharacterMaterialVolume_C_ForceOn) == 0x000008, "Wrong alignment on BP_PalCharacterMaterialVolume_C_ForceOn");
static_assert(sizeof(BP_PalCharacterMaterialVolume_C_ForceOn) == 0x000038, "Wrong size on BP_PalCharacterMaterialVolume_C_ForceOn");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOn, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_PalCharacterMaterialVolume_C_ForceOn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOn, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_PalCharacterMaterialVolume_C_ForceOn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOn, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalCharacterMaterialVolume_C_ForceOn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOn, CallFunc_Set_ToArray_Result) == 0x000010, "Member 'BP_PalCharacterMaterialVolume_C_ForceOn::CallFunc_Set_ToArray_Result' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOn, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_PalCharacterMaterialVolume_C_ForceOn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOn, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PalCharacterMaterialVolume_C_ForceOn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceOn, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_PalCharacterMaterialVolume_C_ForceOn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ForceUpdate
// 0x0030 (0x0030 - 0x0000)
struct BP_PalCharacterMaterialVolume_C_ForceUpdate final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       CallFunc_Set_ToArray_Result;                       // 0x0010(0x0010)(ReferenceParm)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCharacterMaterialVolume_C_ForceUpdate) == 0x000008, "Wrong alignment on BP_PalCharacterMaterialVolume_C_ForceUpdate");
static_assert(sizeof(BP_PalCharacterMaterialVolume_C_ForceUpdate) == 0x000030, "Wrong size on BP_PalCharacterMaterialVolume_C_ForceUpdate");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceUpdate, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_PalCharacterMaterialVolume_C_ForceUpdate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceUpdate, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_PalCharacterMaterialVolume_C_ForceUpdate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceUpdate, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalCharacterMaterialVolume_C_ForceUpdate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceUpdate, CallFunc_Set_ToArray_Result) == 0x000010, "Member 'BP_PalCharacterMaterialVolume_C_ForceUpdate::CallFunc_Set_ToArray_Result' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceUpdate, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_PalCharacterMaterialVolume_C_ForceUpdate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceUpdate, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_PalCharacterMaterialVolume_C_ForceUpdate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ForceUpdate, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_PalCharacterMaterialVolume_C_ForceUpdate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.SetParameters
// 0x0048 (0x0048 - 0x0000)
struct BP_PalCharacterMaterialVolume_C_SetParameters final
{
public:
	class UMaterialInstanceDynamic*               Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Affect_Emissive_Intensity_0;                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Affect_Emissive_Min_0;                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Affect_Emissive_Max_0;                       // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Base_Emissive_Intensity_0;                         // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Base_Color_Intensity_0;                            // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_4; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCharacterMaterialVolume_C_SetParameters) == 0x000008, "Wrong alignment on BP_PalCharacterMaterialVolume_C_SetParameters");
static_assert(sizeof(BP_PalCharacterMaterialVolume_C_SetParameters) == 0x000048, "Wrong size on BP_PalCharacterMaterialVolume_C_SetParameters");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_SetParameters, Material) == 0x000000, "Member 'BP_PalCharacterMaterialVolume_C_SetParameters::Material' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_SetParameters, Light_Affect_Emissive_Intensity_0) == 0x000008, "Member 'BP_PalCharacterMaterialVolume_C_SetParameters::Light_Affect_Emissive_Intensity_0' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_SetParameters, Light_Affect_Emissive_Min_0) == 0x000010, "Member 'BP_PalCharacterMaterialVolume_C_SetParameters::Light_Affect_Emissive_Min_0' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_SetParameters, Light_Affect_Emissive_Max_0) == 0x000018, "Member 'BP_PalCharacterMaterialVolume_C_SetParameters::Light_Affect_Emissive_Max_0' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_SetParameters, Base_Emissive_Intensity_0) == 0x000020, "Member 'BP_PalCharacterMaterialVolume_C_SetParameters::Base_Emissive_Intensity_0' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_SetParameters, Base_Color_Intensity_0) == 0x000028, "Member 'BP_PalCharacterMaterialVolume_C_SetParameters::Base_Color_Intensity_0' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_SetParameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000030, "Member 'BP_PalCharacterMaterialVolume_C_SetParameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_SetParameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000034, "Member 'BP_PalCharacterMaterialVolume_C_SetParameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_SetParameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000038, "Member 'BP_PalCharacterMaterialVolume_C_SetParameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_SetParameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x00003C, "Member 'BP_PalCharacterMaterialVolume_C_SetParameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_SetParameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_4) == 0x000040, "Member 'BP_PalCharacterMaterialVolume_C_SetParameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_4' has a wrong offset!");

// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.UpdateParameters
// 0x0040 (0x0040 - 0x0000)
struct BP_PalCharacterMaterialVolume_C_UpdateParameters final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       CallFunc_Set_ToArray_Result;                       // 0x0010(0x0010)(ReferenceParm)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_3;    // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_4;    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCharacterMaterialVolume_C_UpdateParameters) == 0x000008, "Wrong alignment on BP_PalCharacterMaterialVolume_C_UpdateParameters");
static_assert(sizeof(BP_PalCharacterMaterialVolume_C_UpdateParameters) == 0x000040, "Wrong size on BP_PalCharacterMaterialVolume_C_UpdateParameters");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_Set_ToArray_Result) == 0x000010, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_Set_ToArray_Result' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x000031, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_EqualEqual_DoubleDouble_ReturnValue_2) == 0x000032, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_EqualEqual_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_EqualEqual_DoubleDouble_ReturnValue_3) == 0x000033, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_EqualEqual_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_EqualEqual_DoubleDouble_ReturnValue_4) == 0x000034, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_EqualEqual_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_BooleanAND_ReturnValue) == 0x000035, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_BooleanAND_ReturnValue_1) == 0x000036, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_BooleanAND_ReturnValue_2) == 0x000037, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_UpdateParameters, CallFunc_BooleanAND_ReturnValue_3) == 0x000038, "Member 'BP_PalCharacterMaterialVolume_C_UpdateParameters::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.BeginOverlapPalLit
// 0x0010 (0x0010 - 0x0000)
struct BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit final
{
public:
	class UMaterialInstanceDynamic*               Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          MaterialSrc;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit) == 0x000008, "Wrong alignment on BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit");
static_assert(sizeof(BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit) == 0x000010, "Wrong size on BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit, Material) == 0x000000, "Member 'BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit::Material' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit, MaterialSrc) == 0x000008, "Member 'BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit::MaterialSrc' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit, CallFunc_Set_Contains_ReturnValue) == 0x000009, "Member 'BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");

// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.EndOverlapPalLit
// 0x0010 (0x0010 - 0x0000)
struct BP_PalCharacterMaterialVolume_C_EndOverlapPalLit final
{
public:
	class UMaterialInstanceDynamic*               Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Remove_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCharacterMaterialVolume_C_EndOverlapPalLit) == 0x000008, "Wrong alignment on BP_PalCharacterMaterialVolume_C_EndOverlapPalLit");
static_assert(sizeof(BP_PalCharacterMaterialVolume_C_EndOverlapPalLit) == 0x000010, "Wrong size on BP_PalCharacterMaterialVolume_C_EndOverlapPalLit");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_EndOverlapPalLit, Material) == 0x000000, "Member 'BP_PalCharacterMaterialVolume_C_EndOverlapPalLit::Material' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_EndOverlapPalLit, CallFunc_Set_Remove_ReturnValue) == 0x000008, "Member 'BP_PalCharacterMaterialVolume_C_EndOverlapPalLit::CallFunc_Set_Remove_ReturnValue' has a wrong offset!");

// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalCharacterMaterialVolume_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCharacterMaterialVolume_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalCharacterMaterialVolume_C_ReceiveTick");
static_assert(sizeof(BP_PalCharacterMaterialVolume_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalCharacterMaterialVolume_C_ReceiveTick");
static_assert(offsetof(BP_PalCharacterMaterialVolume_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalCharacterMaterialVolume_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

