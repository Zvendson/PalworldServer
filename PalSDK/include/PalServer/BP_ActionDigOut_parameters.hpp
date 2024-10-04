#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_ActionDigOut.BP_ActionDigOut_C.ExecuteUbergraph_BP_ActionDigOut
// 0x0068 (0x0068 - 0x0000)
struct BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_DecreaseFullStomachRate_Work_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_1;          // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut) == 0x000008, "Wrong alignment on BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut");
static_assert(sizeof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut) == 0x000068, "Wrong size on BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, EntryPoint) == 0x000000, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, K2Node_DynamicCast_AsPlayer_Controller) == 0x000018, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000028, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, CallFunc_GetGameSetting_ReturnValue) == 0x000030, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, CallFunc_DecreaseFullStomachRate_Work_ReturnValue) == 0x000038, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::CallFunc_DecreaseFullStomachRate_Work_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000048, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, CallFunc_GetController_ReturnValue_1) == 0x000050, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, K2Node_DynamicCast_AsPlayer_Controller_1) == 0x000058, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::K2Node_DynamicCast_AsPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

