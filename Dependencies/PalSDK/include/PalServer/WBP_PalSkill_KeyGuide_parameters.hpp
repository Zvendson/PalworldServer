#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.ExecuteUbergraph_WBP_PalSkill_KeyGuide
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetRideCharacterParameter_IndividualParameter; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalWazaID>                            CallFunc_GetEquipWaza_ReturnValue;                 // 0x0018(0x0010)(ReferenceParm)
	EPalWazaID                                    CallFunc_Array_Get_Item;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetWazaName_outName;                      // 0x0030(0x0018)()
	TArray<class UWBP_PalSkillEntry_C*>           K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0058(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0080(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActiveSkill*                        CallFunc_Map_Find_Value;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalPlayerInventoryType                       CallFunc_GetPrimaryInventoryType_ReturnValue;      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93[0x5];                                       // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00A0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActiveSkill*                        CallFunc_Map_Find_Value_1;                         // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalPlayerInventoryType                       CallFunc_GetPrimaryInventoryType_ReturnValue_1;    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide) == 0x000008, "Wrong alignment on WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide");
static_assert(sizeof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide) == 0x0000B8, "Wrong size on WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, EntryPoint) == 0x000000, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_GetRideCharacterParameter_IndividualParameter) == 0x000008, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_GetRideCharacterParameter_IndividualParameter' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_GetEquipWaza_ReturnValue) == 0x000018, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_GetEquipWaza_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_GetWazaName_outName) == 0x000030, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_GetWazaName_outName' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, K2Node_MakeArray_Array) == 0x000048, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000058, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_GetPalmi_ReturnValue) == 0x000078, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, Temp_int_Variable) == 0x000080, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_Map_Find_Value) == 0x000088, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_Map_Find_ReturnValue) == 0x000090, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_GetPrimaryInventoryType_ReturnValue) == 0x000091, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_GetPrimaryInventoryType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000092, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_GetPalmi_ReturnValue_1) == 0x000098, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, Temp_int_Variable_1) == 0x0000A0, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_Map_Find_Value_1) == 0x0000A8, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_Map_Find_ReturnValue_1) == 0x0000B0, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_GetPrimaryInventoryType_ReturnValue_1) == 0x0000B1, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_GetPrimaryInventoryType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000B2, "Member 'WBP_PalSkill_KeyGuide_C_ExecuteUbergraph_WBP_PalSkill_KeyGuide::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.GetRideCharacterParameter
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter final
{
public:
	class UPalIndividualCharacterParameter*       IndividualParameter;                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualCharacterParameterByActor_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter) == 0x000008, "Wrong alignment on WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter");
static_assert(sizeof(WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter) == 0x000030, "Wrong size on WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter, IndividualParameter) == 0x000000, "Member 'WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter::IndividualParameter' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000008, "Member 'WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000010, "Member 'WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter, K2Node_DynamicCast_AsPal_Character) == 0x000018, "Member 'WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter, CallFunc_GetIndividualCharacterParameterByActor_ReturnValue) == 0x000028, "Member 'WBP_PalSkill_KeyGuide_C_GetRideCharacterParameter::CallFunc_GetIndividualCharacterParameterByActor_ReturnValue' has a wrong offset!");

// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.OnGetOff
// 0x0060 (0x0060 - 0x0000)
struct WBP_PalSkill_KeyGuide_C_OnGetOff final
{
public:
	class AActor*                                 RideActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterParameter* IndividualParameter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetRideCharacterParameter_IndividualParameter; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalActiveSkill*>                CallFunc_Map_Values_Values;                        // 0x0038(0x0010)(ReferenceParm)
	class UPalActiveSkill*                        CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                   CallFunc_Array_Get_Item_1;                         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkill_KeyGuide_C_OnGetOff) == 0x000008, "Wrong alignment on WBP_PalSkill_KeyGuide_C_OnGetOff");
static_assert(sizeof(WBP_PalSkill_KeyGuide_C_OnGetOff) == 0x000060, "Wrong size on WBP_PalSkill_KeyGuide_C_OnGetOff");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, RideActor) == 0x000000, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::RideActor' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, CallFunc_GetRideCharacterParameter_IndividualParameter) == 0x000028, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::CallFunc_GetRideCharacterParameter_IndividualParameter' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, CallFunc_Map_Values_Values) == 0x000038, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, CallFunc_Array_Get_Item) == 0x000048, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnGetOff, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'WBP_PalSkill_KeyGuide_C_OnGetOff::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.OnRide
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_PalSkill_KeyGuide_C_OnRide final
{
public:
	class AActor*                                 RideActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       RideCharacterParameter;                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class APalCharacter>           CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0028(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalIndividualCharacterParameter* IndividualParameter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetRideCharacterParameter_IndividualParameter; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetPartnerSkillMsgID_OutMsgID;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0098(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkill_KeyGuide_C_OnRide) == 0x000008, "Wrong alignment on WBP_PalSkill_KeyGuide_C_OnRide");
static_assert(sizeof(WBP_PalSkill_KeyGuide_C_OnRide) == 0x0000D8, "Wrong size on WBP_PalSkill_KeyGuide_C_OnRide");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, RideActor) == 0x000000, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::RideActor' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, RideCharacterParameter) == 0x000008, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::RideCharacterParameter' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, K2Node_DynamicCast_AsPal_Character) == 0x000018, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000028, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, CallFunc_GetComponentByClass_ReturnValue) == 0x000058, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, CallFunc_GetCharacterID_ReturnValue) == 0x000074, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, CallFunc_GetRideCharacterParameter_IndividualParameter) == 0x000080, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::CallFunc_GetRideCharacterParameter_IndividualParameter' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000088, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, CallFunc_GetPartnerSkillMsgID_OutMsgID) == 0x000090, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::CallFunc_GetPartnerSkillMsgID_OutMsgID' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, CallFunc_GetLocalizedText_ReturnValue) == 0x000098, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B0, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000C0, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnRide, CallFunc_IsValid_ReturnValue_2) == 0x0000D0, "Member 'WBP_PalSkill_KeyGuide_C_OnRide::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.OnUpdateEquipWaza
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalSkill_KeyGuide_C_OnUpdateEquipWaza final
{
public:
	class UPalIndividualCharacterParameter*       IndividualParameter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkill_KeyGuide_C_OnUpdateEquipWaza) == 0x000008, "Wrong alignment on WBP_PalSkill_KeyGuide_C_OnUpdateEquipWaza");
static_assert(sizeof(WBP_PalSkill_KeyGuide_C_OnUpdateEquipWaza) == 0x000008, "Wrong size on WBP_PalSkill_KeyGuide_C_OnUpdateEquipWaza");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_OnUpdateEquipWaza, IndividualParameter) == 0x000000, "Member 'WBP_PalSkill_KeyGuide_C_OnUpdateEquipWaza::IndividualParameter' has a wrong offset!");

// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.Setup
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalSkill_KeyGuide_C_Setup final
{
public:
	TDelegate<void(class AActor* RideActor)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* RideActor)>      K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkill_KeyGuide_C_Setup) == 0x000008, "Wrong alignment on WBP_PalSkill_KeyGuide_C_Setup");
static_assert(sizeof(WBP_PalSkill_KeyGuide_C_Setup) == 0x000038, "Wrong size on WBP_PalSkill_KeyGuide_C_Setup");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalSkill_KeyGuide_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_PalSkill_KeyGuide_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_Setup, CallFunc_GetPalmi_ReturnValue) == 0x000020, "Member 'WBP_PalSkill_KeyGuide_C_Setup::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_Setup, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'WBP_PalSkill_KeyGuide_C_Setup::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_PalSkill_KeyGuide_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'WBP_PalSkill_KeyGuide_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C.UpdateSkillInfo
// 0x0140 (0x0140 - 0x0000)
struct WBP_PalSkill_KeyGuide_C_UpdateSkillInfo final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRideMarkerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetRideCharacterParameter_IndividualParameter; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalWazaID>                            CallFunc_GetEquipWaza_ReturnValue;                 // 0x0060(0x0010)(ReferenceParm)
	EPalWazaID                                    CallFunc_Array_Get_Item_1;                         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetWazaName_outName;                      // 0x0078(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActiveSkillSlot*                    CallFunc_GetActiveSkillSlot_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, class UPalActiveSkill*>           CallFunc_GetSkillMap_ReturnValue;                  // 0x00A8(0x0050)()
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalSkillEntry_C*                   CallFunc_Array_Get_Item_2;                         // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalSkillEntry_C*                   CallFunc_Array_Get_Item_3;                         // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D[0x3];                                      // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalActiveSkill*>                CallFunc_Map_Values_Values;                        // 0x0120(0x0010)(ReferenceParm)
	class UPalActiveSkill*                        CallFunc_Array_Get_Item_4;                         // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo) == 0x000008, "Wrong alignment on WBP_PalSkill_KeyGuide_C_UpdateSkillInfo");
static_assert(sizeof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo) == 0x000140, "Wrong size on WBP_PalSkill_KeyGuide_C_UpdateSkillInfo");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, Temp_int_Array_Index_Variable_2) == 0x000018, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, Temp_int_Loop_Counter_Variable_2) == 0x00001C, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x000020, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000028, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, K2Node_DynamicCast_AsPal_Character) == 0x000038, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_GetRideCharacterParameter_IndividualParameter) == 0x000050, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_GetRideCharacterParameter_IndividualParameter' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_GetEquipWaza_ReturnValue) == 0x000060, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_GetEquipWaza_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_GetWazaName_outName) == 0x000078, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_GetWazaName_outName' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_GetActiveSkillSlot_ReturnValue) == 0x000098, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_GetActiveSkillSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_IsValid_ReturnValue_1) == 0x0000A0, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_GetSkillMap_ReturnValue) == 0x0000A8, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_GetSkillMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000F8, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Array_Get_Item_2) == 0x000100, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Array_Length_ReturnValue_1) == 0x000108, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00010C, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Array_Get_Item_3) == 0x000110, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Array_Length_ReturnValue_2) == 0x000118, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x00011C, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Map_Values_Values) == 0x000120, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Array_Get_Item_4) == 0x000130, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Array_Length_ReturnValue_3) == 0x000138, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalSkill_KeyGuide_C_UpdateSkillInfo, CallFunc_Less_IntInt_ReturnValue_2) == 0x00013C, "Member 'WBP_PalSkill_KeyGuide_C_UpdateSkillInfo::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

}

