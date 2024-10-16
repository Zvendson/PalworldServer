#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.ExecuteUbergraph_BP_SkillEffect_Inferno
// 0x00A8 (0x00A8 - 0x0000)
struct BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      CallFunc_GetRandomPointList_NewParam;              // 0x0048(0x0010)(ReferenceParm)
	struct FVector2D                              CallFunc_Array_Get_Item;                           // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetInsertIndex_Index;                     // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetInsertIndex_IsInside;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno) == 0x000008, "Wrong alignment on BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno");
static_assert(sizeof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno) == 0x0000A8, "Wrong size on BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_Array_IsEmpty_ReturnValue) == 0x000004, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, K2Node_Event_DeltaSeconds) == 0x00002C, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000038, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_GetRandomPointList_NewParam) == 0x000048, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_GetRandomPointList_NewParam' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x000070, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_Less_IntInt_ReturnValue) == 0x000088, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_GetInsertIndex_Index) == 0x00008C, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_GetInsertIndex_Index' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_GetInsertIndex_IsInside) == 0x000090, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_GetInsertIndex_IsInside' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_Array_Length_ReturnValue_1) == 0x000098, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00009C, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0000A0, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x0000A4, "Member 'BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");

// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.Explosion
// 0x0020 (0x0020 - 0x0000)
struct BP_SkillEffect_Inferno_C_Explosion final
{
public:
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_Inferno_Bullet_C*       K2Node_DynamicCast_AsBP_Skill_Effect_Inferno_Bullet; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Inferno_C_Explosion) == 0x000008, "Wrong alignment on BP_SkillEffect_Inferno_C_Explosion");
static_assert(sizeof(BP_SkillEffect_Inferno_C_Explosion) == 0x000020, "Wrong size on BP_SkillEffect_Inferno_C_Explosion");
static_assert(offsetof(BP_SkillEffect_Inferno_C_Explosion, CallFunc_Array_Length_ReturnValue) == 0x000000, "Member 'BP_SkillEffect_Inferno_C_Explosion::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_Explosion, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'BP_SkillEffect_Inferno_C_Explosion::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_Explosion, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_SkillEffect_Inferno_C_Explosion::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_Explosion, K2Node_DynamicCast_AsBP_Skill_Effect_Inferno_Bullet) == 0x000010, "Member 'BP_SkillEffect_Inferno_C_Explosion::K2Node_DynamicCast_AsBP_Skill_Effect_Inferno_Bullet' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_Explosion, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_SkillEffect_Inferno_C_Explosion::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.GetEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_Inferno_C_GetEffect final
{
public:
	class UClass*                                 NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Inferno_C_GetEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_Inferno_C_GetEffect");
static_assert(sizeof(BP_SkillEffect_Inferno_C_GetEffect) == 0x000008, "Wrong size on BP_SkillEffect_Inferno_C_GetEffect");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetEffect, NewParam) == 0x000000, "Member 'BP_SkillEffect_Inferno_C_GetEffect::NewParam' has a wrong offset!");

// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.GetInsertIndex
// 0x0068 (0x0068 - 0x0000)
struct BP_SkillEffect_Inferno_C_GetInsertIndex final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInside;                                          // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance2D_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance2D_ReturnValue_1;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Inferno_C_GetInsertIndex) == 0x000008, "Wrong alignment on BP_SkillEffect_Inferno_C_GetInsertIndex");
static_assert(sizeof(BP_SkillEffect_Inferno_C_GetInsertIndex) == 0x000068, "Wrong size on BP_SkillEffect_Inferno_C_GetInsertIndex");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, Location) == 0x000000, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::Location' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, Index_0) == 0x000018, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::Index_0' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, IsInside) == 0x00001C, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::IsInside' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, CallFunc_Vector_Distance2D_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::CallFunc_Vector_Distance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, CallFunc_Vector_Distance2D_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::CallFunc_Vector_Distance2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000064, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetInsertIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000065, "Member 'BP_SkillEffect_Inferno_C_GetInsertIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.GetRandomPointList
// 0x0170 (0x0170 - 0x0000)
struct BP_SkillEffect_Inferno_C_GetRandomPointList final
{
public:
	TArray<struct FVector2D>                      NewParam;                                          // 0x0000(0x0010)(Parm, OutParm)
	TArray<struct FVector2D>                      Temp;                                              // 0x0010(0x0010)(Edit, BlueprintVisible)
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue_1;    // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      CallFunc_GetRandomPointList_outPointArray;         // 0x0148(0x0010)(ReferenceParm)
	float                                         CallFunc_GetRandomPointList_maxYPos_ImplicitCast;  // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomPointList_minYPos_ImplicitCast;  // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomPointList_maxXPos_ImplicitCast;  // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomPointList_minXPos_ImplicitCast;  // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomPointList_sizeX_ImplicitCast;    // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomPointList_sizeY_ImplicitCast;    // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Inferno_C_GetRandomPointList) == 0x000008, "Wrong alignment on BP_SkillEffect_Inferno_C_GetRandomPointList");
static_assert(sizeof(BP_SkillEffect_Inferno_C_GetRandomPointList) == 0x000170, "Wrong size on BP_SkillEffect_Inferno_C_GetRandomPointList");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, NewParam) == 0x000000, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::NewParam' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, Temp) == 0x000010, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::Temp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_GetActionTargetLocation_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_BreakVector_X) == 0x000048, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_BreakVector_Y) == 0x000050, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_BreakVector_Z) == 0x000058, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000068, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000070, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000090, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000098, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0000A0, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_GetActionTargetLocation_ReturnValue_1) == 0x0000A8, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_GetActionTargetLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000C0, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0000D8, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Vector_Normal2D_ReturnValue) == 0x0000F0, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000108, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000120, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Add_VectorVector_ReturnValue) == 0x000128, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000140, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_GetRandomPointList_outPointArray) == 0x000148, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_GetRandomPointList_outPointArray' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_GetRandomPointList_maxYPos_ImplicitCast) == 0x000158, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_GetRandomPointList_maxYPos_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_GetRandomPointList_minYPos_ImplicitCast) == 0x00015C, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_GetRandomPointList_minYPos_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_GetRandomPointList_maxXPos_ImplicitCast) == 0x000160, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_GetRandomPointList_maxXPos_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_GetRandomPointList_minXPos_ImplicitCast) == 0x000164, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_GetRandomPointList_minXPos_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_GetRandomPointList_sizeX_ImplicitCast) == 0x000168, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_GetRandomPointList_sizeX_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_GetRandomPointList, CallFunc_GetRandomPointList_sizeY_ImplicitCast) == 0x00016C, "Member 'BP_SkillEffect_Inferno_C_GetRandomPointList::CallFunc_GetRandomPointList_sizeY_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_Inferno_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Inferno_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_Inferno_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_Inferno_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_Inferno_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_Inferno_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_Inferno_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.SpawnBullet
// 0x02A0 (0x02A0 - 0x0000)
struct BP_SkillEffect_Inferno_C_SpawnBullet final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetEffect_NewParam;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffectBase_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x01B0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Inferno_C_SpawnBullet) == 0x000010, "Wrong alignment on BP_SkillEffect_Inferno_C_SpawnBullet");
static_assert(sizeof(BP_SkillEffect_Inferno_C_SpawnBullet) == 0x0002A0, "Wrong size on BP_SkillEffect_Inferno_C_SpawnBullet");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, Temp_int_Variable) == 0x000000, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_GetActionTargetActor_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_GetEffect_NewParam) == 0x000010, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_GetEffect_NewParam' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_GetActionTargetLocation_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_GetTransform_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_BreakVector_X) == 0x000090, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_BreakVector_Y) == 0x000098, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_BreakVector_Z) == 0x0000A0, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_BreakTransform_Location) == 0x0000A8, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_BreakTransform_Rotation) == 0x0000C0, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_BreakTransform_Scale) == 0x0000D8, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_MakeTransform_ReturnValue) == 0x0000F0, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_Add_IntInt_ReturnValue) == 0x000150, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000158, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_BreakVector_X_1) == 0x000160, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_BreakVector_Y_1) == 0x000168, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_BreakVector_Z_1) == 0x000170, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000178, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_MakeVector_ReturnValue) == 0x000180, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_FinishSpawningActor_ReturnValue) == 0x000198, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_AdjustActorToFloor_ReturnValue) == 0x0001A0, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_Array_Add_ReturnValue) == 0x0001A8, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0001B0, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Inferno_C_SpawnBullet, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000298, "Member 'BP_SkillEffect_Inferno_C_SpawnBullet::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

}

