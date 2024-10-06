#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.ExecuteUbergraph_WBP_InGame_Match_HP
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUIDelayGaugeCalculator*             CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUIDelayGaugeCalculator*             CallFunc_SpawnObject_ReturnValue_1;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_InGame_Match_HPPal_C*>      K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWBP_InGame_Match_HPPal_C*>      K2Node_MakeArray_Array_1;                          // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate;              // 0x005C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_InGame_Match_HPPal_C*              CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E[0x2];                                       // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0090(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_InGame_Match_HPPal_C*              CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP) == 0x000008, "Wrong alignment on WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP");
static_assert(sizeof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP) == 0x0000E8, "Wrong size on WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, EntryPoint) == 0x000000, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_IsVisible_ReturnValue) == 0x000004, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, Temp_int_Array_Index_Variable_1) == 0x000020, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, Temp_int_Loop_Counter_Variable_1) == 0x000024, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_SpawnObject_ReturnValue_1) == 0x000030, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, K2Node_MakeArray_Array) == 0x000038, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, K2Node_MakeArray_Array_1) == 0x000048, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, K2Node_CreateDelegate_OutputDelegate) == 0x00005C, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, K2Node_CreateDelegate_OutputDelegate_1) == 0x00006C, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_Array_Get_Item) == 0x000080, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_IsValid_ReturnValue_1) == 0x00008D, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, K2Node_Event_MyGeometry) == 0x000090, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, K2Node_Event_InDeltaTime) == 0x0000D0, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_Array_Length_ReturnValue_1) == 0x0000E0, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E4, "Member 'WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.Setup
// 0x0230 (0x0230 - 0x0000)
struct WBP_InGame_Match_HP_C_Setup final
{
public:
	EPalArenaPlayerIndex                          LocalPlayerIndex;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> PlayerInfoMap;                                     // 0x0008(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x0058(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_withBuff_ReturnValue;            // 0x00A8(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x00B8(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_withBuff_ReturnValue_1;          // 0x00C8(0x0008)(NoDestructor)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_2; // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue_1;                      // 0x00E0(0x0008)(NoDestructor)
	EPalArenaPlayerIndex                          Temp_byte_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_3; // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          Temp_byte_Variable_1;                              // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_Array_Get_Item;                           // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D[0x3];                                      // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaWorldSubsystem*                CallFunc_GetArenaWorldSubsystem_ReturnValue;       // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetArenaBattleTime_ReturnValue;           // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          Temp_byte_Variable_2;                              // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate;              // 0x0138(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0148(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          Temp_byte_Variable_3;                              // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          K2Node_Select_Default;                             // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A[0x6];                                      // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value_1;                         // 0x0160(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_InGame_Match_HPPal_C*              CallFunc_Array_Get_Item_1;                         // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_Array_Get_Item_2;                         // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x3];                                      // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualHandleFromCharacterParameter_ReturnValue; // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue_1;        // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_InGame_Match_HPPal_C*              CallFunc_Array_Get_Item_3;                         // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualHandleFromCharacterParameter_ReturnValue_1; // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FD[0x3];                                      // 0x01FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercentForce_percent_ImplicitCast;     // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;     // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;     // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercentForce_percent_ImplicitCast_1;   // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_HP_C_Setup) == 0x000008, "Wrong alignment on WBP_InGame_Match_HP_C_Setup");
static_assert(sizeof(WBP_InGame_Match_HP_C_Setup) == 0x000230, "Wrong size on WBP_InGame_Match_HP_C_Setup");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, LocalPlayerIndex) == 0x000000, "Member 'WBP_InGame_Match_HP_C_Setup::LocalPlayerIndex' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, PlayerInfoMap) == 0x000008, "Member 'WBP_InGame_Match_HP_C_Setup::PlayerInfoMap' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Map_Find_Value) == 0x000058, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Map_Find_ReturnValue) == 0x0000A0, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_GetMaxHP_withBuff_ReturnValue) == 0x0000A8, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_GetMaxHP_withBuff_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x0000B0, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_GetHP_ReturnValue) == 0x0000B8, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x0000C0, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_GetMaxHP_withBuff_ReturnValue_1) == 0x0000C8, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_GetMaxHP_withBuff_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_2) == 0x0000D8, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_GetHP_ReturnValue_1) == 0x0000E0, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_GetHP_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, Temp_byte_Variable) == 0x0000E8, "Member 'WBP_InGame_Match_HP_C_Setup::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_3) == 0x0000EC, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x0000F0, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, Temp_int_Loop_Counter_Variable) == 0x0000F8, "Member 'WBP_InGame_Match_HP_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, Temp_byte_Variable_1) == 0x0000FC, "Member 'WBP_InGame_Match_HP_C_Setup::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000100, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, Temp_int_Array_Index_Variable) == 0x000104, "Member 'WBP_InGame_Match_HP_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, Temp_int_Loop_Counter_Variable_1) == 0x000108, "Member 'WBP_InGame_Match_HP_C_Setup::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Array_Get_Item) == 0x000110, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x000118, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_IsValid_ReturnValue) == 0x00011C, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, Temp_int_Array_Index_Variable_1) == 0x000120, "Member 'WBP_InGame_Match_HP_C_Setup::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_GetArenaWorldSubsystem_ReturnValue) == 0x000128, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_GetArenaWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_GetArenaBattleTime_ReturnValue) == 0x000130, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_GetArenaBattleTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, Temp_byte_Variable_2) == 0x000134, "Member 'WBP_InGame_Match_HP_C_Setup::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000138, "Member 'WBP_InGame_Match_HP_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000148, "Member 'WBP_InGame_Match_HP_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, Temp_byte_Variable_3) == 0x000158, "Member 'WBP_InGame_Match_HP_C_Setup::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, K2Node_Select_Default) == 0x000159, "Member 'WBP_InGame_Match_HP_C_Setup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Map_Find_Value_1) == 0x000160, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Map_Find_ReturnValue_1) == 0x0001A8, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Array_Get_Item_1) == 0x0001B0, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Array_Get_Item_2) == 0x0001B8, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x0001C0, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x0001C4, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_GetCharacterManager_ReturnValue) == 0x0001C8, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x0001D0, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_GetIndividualHandleFromCharacterParameter_ReturnValue) == 0x0001D8, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_GetIndividualHandleFromCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_GetCharacterManager_ReturnValue_1) == 0x0001E0, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_GetCharacterManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Array_Get_Item_3) == 0x0001E8, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_GetIndividualHandleFromCharacterParameter_ReturnValue_1) == 0x0001F0, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_GetIndividualHandleFromCharacterParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Array_Length_ReturnValue_1) == 0x0001F8, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001FC, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000200, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000208, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_SetPercentForce_percent_ImplicitCast) == 0x000210, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_SetPercentForce_percent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x000218, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x000220, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Setup, CallFunc_SetPercentForce_percent_ImplicitCast_1) == 0x000228, "Member 'WBP_InGame_Match_HP_C_Setup::CallFunc_SetPercentForce_percent_ImplicitCast_1' has a wrong offset!");

// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_InGame_Match_HP_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_HP_C_Tick) == 0x000008, "Wrong alignment on WBP_InGame_Match_HP_C_Tick");
static_assert(sizeof(WBP_InGame_Match_HP_C_Tick) == 0x000048, "Wrong size on WBP_InGame_Match_HP_C_Tick");
static_assert(offsetof(WBP_InGame_Match_HP_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_InGame_Match_HP_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_InGame_Match_HP_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.UpdatePlayerHP
// 0x0038 (0x0038 - 0x0000)
struct WBP_InGame_Match_HP_C_UpdatePlayerHP final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          MaxHP;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_percent_ImplicitCast;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_HP_C_UpdatePlayerHP) == 0x000008, "Wrong alignment on WBP_InGame_Match_HP_C_UpdatePlayerHP");
static_assert(sizeof(WBP_InGame_Match_HP_C_UpdatePlayerHP) == 0x000038, "Wrong size on WBP_InGame_Match_HP_C_UpdatePlayerHP");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdatePlayerHP, NowHP) == 0x000000, "Member 'WBP_InGame_Match_HP_C_UpdatePlayerHP::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdatePlayerHP, MaxHP) == 0x000008, "Member 'WBP_InGame_Match_HP_C_UpdatePlayerHP::MaxHP' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdatePlayerHP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000010, "Member 'WBP_InGame_Match_HP_C_UpdatePlayerHP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdatePlayerHP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x000014, "Member 'WBP_InGame_Match_HP_C_UpdatePlayerHP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdatePlayerHP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_InGame_Match_HP_C_UpdatePlayerHP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdatePlayerHP, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000020, "Member 'WBP_InGame_Match_HP_C_UpdatePlayerHP::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdatePlayerHP, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000028, "Member 'WBP_InGame_Match_HP_C_UpdatePlayerHP::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdatePlayerHP, CallFunc_SetPercent_percent_ImplicitCast) == 0x000030, "Member 'WBP_InGame_Match_HP_C_UpdatePlayerHP::CallFunc_SetPercent_percent_ImplicitCast' has a wrong offset!");

// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.UpdateRivalHP
// 0x0038 (0x0038 - 0x0000)
struct WBP_InGame_Match_HP_C_UpdateRivalHP final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          MaxHP;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_percent_ImplicitCast;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_HP_C_UpdateRivalHP) == 0x000008, "Wrong alignment on WBP_InGame_Match_HP_C_UpdateRivalHP");
static_assert(sizeof(WBP_InGame_Match_HP_C_UpdateRivalHP) == 0x000038, "Wrong size on WBP_InGame_Match_HP_C_UpdateRivalHP");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdateRivalHP, NowHP) == 0x000000, "Member 'WBP_InGame_Match_HP_C_UpdateRivalHP::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdateRivalHP, MaxHP) == 0x000008, "Member 'WBP_InGame_Match_HP_C_UpdateRivalHP::MaxHP' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdateRivalHP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000010, "Member 'WBP_InGame_Match_HP_C_UpdateRivalHP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdateRivalHP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x000014, "Member 'WBP_InGame_Match_HP_C_UpdateRivalHP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdateRivalHP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_InGame_Match_HP_C_UpdateRivalHP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdateRivalHP, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000020, "Member 'WBP_InGame_Match_HP_C_UpdateRivalHP::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdateRivalHP, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000028, "Member 'WBP_InGame_Match_HP_C_UpdateRivalHP::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HP_C_UpdateRivalHP, CallFunc_SetPercent_percent_ImplicitCast) == 0x000030, "Member 'WBP_InGame_Match_HP_C_UpdateRivalHP::CallFunc_SetPercent_percent_ImplicitCast' has a wrong offset!");

}

