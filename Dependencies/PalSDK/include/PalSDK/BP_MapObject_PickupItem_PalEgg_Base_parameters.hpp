#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C.ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base
// 0x0004 (0x0004 - 0x0000)
struct BP_MapObject_PickupItem_PalEgg_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_PickupItem_PalEgg_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base) == 0x000004, "Wrong alignment on BP_MapObject_PickupItem_PalEgg_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base");
static_assert(sizeof(BP_MapObject_PickupItem_PalEgg_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base) == 0x000004, "Wrong size on BP_MapObject_PickupItem_PalEgg_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base, EntryPoint) == 0x000000, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base::EntryPoint' has a wrong offset!");

// Function BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C.GetPalEggScale
// 0x0070 (0x0070 - 0x0000)
struct BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale final
{
public:
	int32                                         PalRarity;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PalEggScale;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FPalEggRankInfo                        CallFunc_Array_Get_Item;                           // 0x0048(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_FunctionResult_PalEggScale_ImplicitCast;    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_FunctionResult_PalEggScale_ImplicitCast_1;  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale) == 0x000008, "Wrong alignment on BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale");
static_assert(sizeof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale) == 0x000070, "Wrong size on BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, PalRarity) == 0x000000, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::PalRarity' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, PalEggScale) == 0x000008, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::PalEggScale' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, CallFunc_GetGameSetting_ReturnValue) == 0x000030, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000059, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, K2Node_FunctionResult_PalEggScale_ImplicitCast) == 0x000060, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::K2Node_FunctionResult_PalEggScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale, K2Node_FunctionResult_PalEggScale_ImplicitCast_1) == 0x000068, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_GetPalEggScale::K2Node_FunctionResult_PalEggScale_ImplicitCast_1' has a wrong offset!");

// Function BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C.OnRep_Scale
// 0x0180 (0x0180 - 0x0000)
struct BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale final
{
public:
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0068(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale) == 0x000008, "Wrong alignment on BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale");
static_assert(sizeof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale) == 0x000180, "Wrong size on BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000000, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale, CallFunc_BreakVector_X) == 0x000018, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale, CallFunc_BreakVector_Y) == 0x000020, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale, CallFunc_BreakVector_Z) == 0x000028, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x000038, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale, CallFunc_MakeVector_ReturnValue) == 0x000050, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000068, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000150, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000168, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_OnRep_Scale::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");

// Function BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C.SetupPalEggScale
// 0x0030 (0x0030 - 0x0000)
struct BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale final
{
public:
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue_1;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRarity_ReturnValue;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetPalEggScale_PalEggScale;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale) == 0x000008, "Wrong alignment on BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale");
static_assert(sizeof(BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale) == 0x000030, "Wrong size on BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale, CallFunc_GetCharacterID_ReturnValue) == 0x000000, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale, CallFunc_GetCharacterID_ReturnValue_1) == 0x000008, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale::CallFunc_GetCharacterID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000010, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000018, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale, CallFunc_GetRarity_ReturnValue) == 0x000024, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale, CallFunc_GetPalEggScale_PalEggScale) == 0x000028, "Member 'BP_MapObject_PickupItem_PalEgg_Base_C_SetupPalEggScale::CallFunc_GetPalEggScale_PalEggScale' has a wrong offset!");

}

