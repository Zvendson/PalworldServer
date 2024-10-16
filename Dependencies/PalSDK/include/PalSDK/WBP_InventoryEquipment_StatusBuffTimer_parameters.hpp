#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_InventoryEquipment_StatusBuffTimer.WBP_InventoryEquipment_StatusBuffTimer_C.ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer
// 0x0118 (0x0118 - 0x0000)
struct WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalFoodStatusEffectType                      K2Node_CustomEvent_BuffType;                       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsBuff;                         // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       K2Node_CustomEvent_IndividualParam;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsRegene;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalFoodRegeneInfo                     CallFunc_GetRegeneItemName_ReturnValue;            // 0x0060(0x0020)()
	float                                         CallFunc_GetEffectFoodTimeRate_ReturnValue;        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalFoodStatusEffectType, class UTexture*> K2Node_Select_Default_1;                           // 0x00A8(0x0050)()
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               CallFunc_Map_Find_Value_1;                         // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_113[0x1];                                      // 0x0113(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer) == 0x000008, "Wrong alignment on WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer");
static_assert(sizeof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer) == 0x000118, "Wrong size on WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, EntryPoint) == 0x000000, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, Temp_byte_Variable) == 0x000004, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, Temp_byte_Variable_1) == 0x000010, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, Temp_bool_Variable) == 0x000011, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, Temp_byte_Variable_2) == 0x000012, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, Temp_byte_Variable_3) == 0x000013, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, K2Node_CustomEvent_BuffType) == 0x000014, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::K2Node_CustomEvent_BuffType' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, K2Node_CustomEvent_IsBuff) == 0x000015, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::K2Node_CustomEvent_IsBuff' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, K2Node_CustomEvent_IndividualParam) == 0x000018, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::K2Node_CustomEvent_IndividualParam' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, K2Node_CustomEvent_IsRegene) == 0x000020, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::K2Node_CustomEvent_IsRegene' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000028, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, K2Node_Select_Default) == 0x000030, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000058, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_GetRegeneItemName_ReturnValue) == 0x000060, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_GetRegeneItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_GetEffectFoodTimeRate_ReturnValue) == 0x000080, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_GetEffectFoodTimeRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000088, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000090, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000098, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, Temp_bool_Variable_1) == 0x0000A0, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, K2Node_Select_Default_1) == 0x0000A8, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_Map_Find_Value) == 0x0000F8, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_Map_Find_ReturnValue) == 0x000100, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_Map_Find_Value_1) == 0x000108, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_Map_Find_ReturnValue_1) == 0x000110, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, Temp_bool_Variable_2) == 0x000111, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, K2Node_Select_Default_2) == 0x000112, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000114, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function WBP_InventoryEquipment_StatusBuffTimer.WBP_InventoryEquipment_StatusBuffTimer_C.SetFoodBuff
// 0x0018 (0x0018 - 0x0000)
struct WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff final
{
public:
	EPalFoodStatusEffectType                      BuffType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBuff;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       IndividualParam;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRegene;                                          // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff) == 0x000008, "Wrong alignment on WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff");
static_assert(sizeof(WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff) == 0x000018, "Wrong size on WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff, BuffType) == 0x000000, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff::BuffType' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff, IsBuff) == 0x000001, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff::IsBuff' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff, IndividualParam) == 0x000008, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff::IndividualParam' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff, IsRegene) == 0x000010, "Member 'WBP_InventoryEquipment_StatusBuffTimer_C_SetFoodBuff::IsRegene' has a wrong offset!");

}

