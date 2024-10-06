#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameStatusPoint.WBP_IngameStatusPoint_C.ExecuteUbergraph_WBP_IngameStatusPoint
// 0x000C (0x000C - 0x0000)
struct WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_UnusedPoint;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_TechnologyPoint;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint) == 0x000004, "Wrong alignment on WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint");
static_assert(sizeof(WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint) == 0x00000C, "Wrong size on WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint");
static_assert(offsetof(WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint, EntryPoint) == 0x000000, "Member 'WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint, K2Node_CustomEvent_UnusedPoint) == 0x000004, "Member 'WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint::K2Node_CustomEvent_UnusedPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint, K2Node_CustomEvent_TechnologyPoint) == 0x000008, "Member 'WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint::K2Node_CustomEvent_TechnologyPoint' has a wrong offset!");

// Function WBP_IngameStatusPoint.WBP_IngameStatusPoint_C.SetupStatusPointAttention
// 0x0040 (0x0040 - 0x0000)
struct WBP_IngameStatusPoint_C_SetupStatusPointAttention final
{
public:
	bool                                          AllPointMax;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStatusPointAllMax_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetUnusedStatusPoint_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameStatusPoint_C_SetupStatusPointAttention) == 0x000008, "Wrong alignment on WBP_IngameStatusPoint_C_SetupStatusPointAttention");
static_assert(sizeof(WBP_IngameStatusPoint_C_SetupStatusPointAttention) == 0x000040, "Wrong size on WBP_IngameStatusPoint_C_SetupStatusPointAttention");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, AllPointMax) == 0x000000, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::AllPointMax' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, Temp_byte_Variable) == 0x000001, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, Temp_bool_Variable) == 0x000004, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_BooleanAND_ReturnValue) == 0x000011, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000018, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, K2Node_Select_Default) == 0x000020, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000028, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_IsValid_ReturnValue_3) == 0x000031, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_IsStatusPointAllMax_ReturnValue) == 0x000032, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_IsStatusPointAllMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_GetUnusedStatusPoint_ReturnValue) == 0x000034, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_GetUnusedStatusPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameStatusPoint_C_SetupStatusPointAttention, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'WBP_IngameStatusPoint_C_SetupStatusPointAttention::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_IngameStatusPoint.WBP_IngameStatusPoint_C.UpdatedTechnologyPoint
// 0x0004 (0x0004 - 0x0000)
struct WBP_IngameStatusPoint_C_UpdatedTechnologyPoint final
{
public:
	int32                                         TechnologyPoint;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameStatusPoint_C_UpdatedTechnologyPoint) == 0x000004, "Wrong alignment on WBP_IngameStatusPoint_C_UpdatedTechnologyPoint");
static_assert(sizeof(WBP_IngameStatusPoint_C_UpdatedTechnologyPoint) == 0x000004, "Wrong size on WBP_IngameStatusPoint_C_UpdatedTechnologyPoint");
static_assert(offsetof(WBP_IngameStatusPoint_C_UpdatedTechnologyPoint, TechnologyPoint) == 0x000000, "Member 'WBP_IngameStatusPoint_C_UpdatedTechnologyPoint::TechnologyPoint' has a wrong offset!");

// Function WBP_IngameStatusPoint.WBP_IngameStatusPoint_C.UpdateUnusedStatusPoint
// 0x0004 (0x0004 - 0x0000)
struct WBP_IngameStatusPoint_C_UpdateUnusedStatusPoint final
{
public:
	int32                                         UnusedPoint;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameStatusPoint_C_UpdateUnusedStatusPoint) == 0x000004, "Wrong alignment on WBP_IngameStatusPoint_C_UpdateUnusedStatusPoint");
static_assert(sizeof(WBP_IngameStatusPoint_C_UpdateUnusedStatusPoint) == 0x000004, "Wrong size on WBP_IngameStatusPoint_C_UpdateUnusedStatusPoint");
static_assert(offsetof(WBP_IngameStatusPoint_C_UpdateUnusedStatusPoint, UnusedPoint) == 0x000000, "Member 'WBP_IngameStatusPoint_C_UpdateUnusedStatusPoint::UnusedPoint' has a wrong offset!");

}

