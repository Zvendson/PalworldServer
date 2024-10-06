#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function WBP_EnemyMark.WBP_EnemyMark_C.ExecuteUbergraph_WBP_EnemyMark
// 0x0150 (0x0150 - 0x0000)
struct WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalCharacter* TargetCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_CustomEvent_TargetCharacter_1;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_EnemyExclamationMarkIcon_C*        CallFunc_SpawnObject_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue_1;           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_CustomEvent_TargetCharacter;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_EnemyQuestionMarkIcon_C*           CallFunc_SpawnObject_ReturnValue_1;                // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0068(0x0030)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C> CallFunc_Array_Get_Item;                           // 0x0098(0x0030)(InstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_EnemyQuestionMarkIcon_C*           K2Node_DynamicCast_AsWBP_Enemy_Question_Mark_Icon; // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C> CallFunc_Array_Get_Item_1;                         // 0x0100(0x0030)(InstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_136[0x2];                                      // 0x0136(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APalCharacter* TargetCharacter)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0138(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0148(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark) == 0x000008, "Wrong alignment on WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark");
static_assert(sizeof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark) == 0x000150, "Wrong size on WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, EntryPoint) == 0x000000, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_GetBattleManager_ReturnValue) == 0x000028, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, K2Node_CustomEvent_TargetCharacter_1) == 0x000030, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::K2Node_CustomEvent_TargetCharacter_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, Temp_int_Loop_Counter_Variable_1) == 0x000038, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_SpawnObject_ReturnValue) == 0x000040, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_GetBattleManager_ReturnValue_1) == 0x000050, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_GetBattleManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, K2Node_CustomEvent_TargetCharacter) == 0x000058, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::K2Node_CustomEvent_TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_SpawnObject_ReturnValue_1) == 0x000060, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000068, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_Array_Get_Item) == 0x000098, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x0000D0, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, K2Node_DynamicCast_AsWBP_Enemy_Question_Mark_Icon) == 0x0000E0, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::K2Node_DynamicCast_AsWBP_Enemy_Question_Mark_Icon' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_IsValid_ReturnValue) == 0x0000E9, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_IsValid_ReturnValue_1) == 0x0000EA, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000EB, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000EC, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_AddChild_ReturnValue) == 0x0000F0, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_Array_Add_ReturnValue) == 0x0000F8, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_Array_Get_Item_1) == 0x000100, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_Array_Length_ReturnValue_1) == 0x000130, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x000134, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_Less_IntInt_ReturnValue_1) == 0x000135, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, K2Node_CreateDelegate_OutputDelegate_1) == 0x000138, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark, CallFunc_AddChild_ReturnValue_1) == 0x000148, "Member 'WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");

// Function WBP_EnemyMark.WBP_EnemyMark_C.カスタムイベント_0
// 0x0008 (0x0008 - 0x0000)
struct WBP_EnemyMark_C__________________________0 final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyMark_C__________________________0) == 0x000008, "Wrong alignment on WBP_EnemyMark_C__________________________0");
static_assert(sizeof(WBP_EnemyMark_C__________________________0) == 0x000008, "Wrong size on WBP_EnemyMark_C__________________________0");
static_assert(offsetof(WBP_EnemyMark_C__________________________0, TargetCharacter) == 0x000000, "Member 'WBP_EnemyMark_C__________________________0::TargetCharacter' has a wrong offset!");

// Function WBP_EnemyMark.WBP_EnemyMark_C.カスタムイベント_1
// 0x0008 (0x0008 - 0x0000)
struct WBP_EnemyMark_C__________________________1 final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyMark_C__________________________1) == 0x000008, "Wrong alignment on WBP_EnemyMark_C__________________________1");
static_assert(sizeof(WBP_EnemyMark_C__________________________1) == 0x000008, "Wrong size on WBP_EnemyMark_C__________________________1");
static_assert(offsetof(WBP_EnemyMark_C__________________________1, TargetCharacter) == 0x000000, "Member 'WBP_EnemyMark_C__________________________1::TargetCharacter' has a wrong offset!");

}

