#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_StatusBuffTimerContainer.WBP_StatusBuffTimerContainer_C.ExecuteUbergraph_WBP_StatusBuffTimerContainer
// 0x0408 (0x0408 - 0x0000)
struct WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<EPalFoodStatusEffectType>              CallFunc_Map_Keys_Keys;                            // 0x0018(0x0010)(ReferenceParm)
	class UWBP_InventoryEquipment_StatusBuffTimer_C* CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalFoodStatusEffectType                      CallFunc_Array_Get_Item;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x1];                                       // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value;                           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       K2Node_CustomEvent_IndividualParam;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetSaveParameter_ReturnValue;             // 0x0058(0x02A8)(ConstParm)
	bool                                          CallFunc_GetSaveParameterValue_IsPlayer_ReturnValue; // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalFoodRegeneInfo                     CallFunc_GetRegeneItemName_ReturnValue;            // 0x0308(0x0020)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalStatusEffectFoodDataRow            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0330(0x0028)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359[0x3];                                      // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetEffectFoodName_ReturnValue;            // 0x035C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalStatusEffectFoodDataRow            CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0368(0x0028)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0391(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_392[0x6];                                      // 0x0392(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalFoodStatusEffectType, int32>         K2Node_MakeMap_Map;                                // 0x0398(0x0050)()
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x03E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x03F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_InventoryEquipment_StatusBuffTimer_C* CallFunc_Create_ReturnValue_1;                     // 0x03F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0x0400(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer) == 0x000008, "Wrong alignment on WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer");
static_assert(sizeof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer) == 0x000408, "Wrong size on WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, EntryPoint) == 0x000000, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000010, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Map_Keys_Keys) == 0x000018, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Create_ReturnValue) == 0x000028, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000038, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003A, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Map_Find_Value) == 0x00003C, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, K2Node_CustomEvent_IndividualParam) == 0x000048, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::K2Node_CustomEvent_IndividualParam' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetSaveParameter_ReturnValue) == 0x000058, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetSaveParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetSaveParameterValue_IsPlayer_ReturnValue) == 0x000300, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetSaveParameterValue_IsPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetRegeneItemName_ReturnValue) == 0x000308, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetRegeneItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_BooleanAND_ReturnValue) == 0x000328, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetDataTableRowFromName_OutRow) == 0x000330, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000358, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetEffectFoodName_ReturnValue) == 0x00035C, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetEffectFoodName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000368, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000390, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000391, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, K2Node_MakeMap_Map) == 0x000398, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0003E8, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x0003F0, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Create_ReturnValue_1) == 0x0003F8, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_AddChildToHorizontalBox_ReturnValue_1) == 0x000400, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_AddChildToHorizontalBox_ReturnValue_1' has a wrong offset!");

// Function WBP_StatusBuffTimerContainer.WBP_StatusBuffTimerContainer_C.UpdateCharacterBuff
// 0x0008 (0x0008 - 0x0000)
struct WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff final
{
public:
	class UPalIndividualCharacterParameter*       IndividualParam;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff) == 0x000008, "Wrong alignment on WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff");
static_assert(sizeof(WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff) == 0x000008, "Wrong size on WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff, IndividualParam) == 0x000000, "Member 'WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff::IndividualParam' has a wrong offset!");

}

