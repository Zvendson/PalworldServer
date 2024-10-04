#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_Ground.BP_Ground_C.ChangeMode
// 0x0050 (0x0050 - 0x0000)
struct BP_Ground_C_ChangeMode final
{
public:
	int32                                         NewMode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_4;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ground_C_ChangeMode) == 0x000008, "Wrong alignment on BP_Ground_C_ChangeMode");
static_assert(sizeof(BP_Ground_C_ChangeMode) == 0x000050, "Wrong size on BP_Ground_C_ChangeMode");
static_assert(offsetof(BP_Ground_C_ChangeMode, NewMode) == 0x000000, "Member 'BP_Ground_C_ChangeMode::NewMode' has a wrong offset!");
static_assert(offsetof(BP_Ground_C_ChangeMode, Temp_int_Variable) == 0x000004, "Member 'BP_Ground_C_ChangeMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ground_C_ChangeMode, Temp_object_Variable) == 0x000008, "Member 'BP_Ground_C_ChangeMode::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ground_C_ChangeMode, Temp_object_Variable_1) == 0x000010, "Member 'BP_Ground_C_ChangeMode::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Ground_C_ChangeMode, Temp_object_Variable_2) == 0x000018, "Member 'BP_Ground_C_ChangeMode::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Ground_C_ChangeMode, Temp_object_Variable_3) == 0x000020, "Member 'BP_Ground_C_ChangeMode::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Ground_C_ChangeMode, Temp_object_Variable_4) == 0x000028, "Member 'BP_Ground_C_ChangeMode::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_Ground_C_ChangeMode, Temp_int_Variable_1) == 0x000030, "Member 'BP_Ground_C_ChangeMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Ground_C_ChangeMode, K2Node_Select_Default) == 0x000038, "Member 'BP_Ground_C_ChangeMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Ground_C_ChangeMode, K2Node_Select_Default_1) == 0x000040, "Member 'BP_Ground_C_ChangeMode::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_Ground_C_ChangeMode, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'BP_Ground_C_ChangeMode::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

