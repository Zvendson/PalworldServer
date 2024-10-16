#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_LvNum.WBP_LvNum_C.SetLevel
// 0x0050 (0x0050 - 0x0000)
struct WBP_LvNum_C_SetLevel final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LvNum_C_SetLevel) == 0x000008, "Wrong alignment on WBP_LvNum_C_SetLevel");
static_assert(sizeof(WBP_LvNum_C_SetLevel) == 0x000050, "Wrong size on WBP_LvNum_C_SetLevel");
static_assert(offsetof(WBP_LvNum_C_SetLevel, Level) == 0x000000, "Member 'WBP_LvNum_C_SetLevel::Level' has a wrong offset!");
static_assert(offsetof(WBP_LvNum_C_SetLevel, CallFunc_Divide_IntInt_ReturnValue) == 0x000004, "Member 'WBP_LvNum_C_SetLevel::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LvNum_C_SetLevel, CallFunc_Percent_IntInt_ReturnValue) == 0x000008, "Member 'WBP_LvNum_C_SetLevel::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LvNum_C_SetLevel, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_LvNum_C_SetLevel::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LvNum_C_SetLevel, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_LvNum_C_SetLevel::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LvNum_C_SetLevel, CallFunc_SelectFloat_ReturnValue) == 0x000028, "Member 'WBP_LvNum_C_SetLevel::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LvNum_C_SetLevel, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'WBP_LvNum_C_SetLevel::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LvNum_C_SetLevel, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000048, "Member 'WBP_LvNum_C_SetLevel::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

}

