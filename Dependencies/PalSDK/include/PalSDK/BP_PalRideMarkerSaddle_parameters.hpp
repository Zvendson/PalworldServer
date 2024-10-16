#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_PalRideMarkerSaddle.BP_PalRideMarkerSaddle_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalRideMarkerSaddle_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRideMarkerSaddle_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalRideMarkerSaddle_C_ReceiveTick");
static_assert(sizeof(BP_PalRideMarkerSaddle_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalRideMarkerSaddle_C_ReceiveTick");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalRideMarkerSaddle_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalRideMarkerSaddle.BP_PalRideMarkerSaddle_C.OnChangeRiding_イベント_0
// 0x0001 (0x0001 - 0x0000)
struct BP_PalRideMarkerSaddle_C_OnChangeRiding______________0 final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRideMarkerSaddle_C_OnChangeRiding______________0) == 0x000001, "Wrong alignment on BP_PalRideMarkerSaddle_C_OnChangeRiding______________0");
static_assert(sizeof(BP_PalRideMarkerSaddle_C_OnChangeRiding______________0) == 0x000001, "Wrong size on BP_PalRideMarkerSaddle_C_OnChangeRiding______________0");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_OnChangeRiding______________0, IsEnable) == 0x000000, "Member 'BP_PalRideMarkerSaddle_C_OnChangeRiding______________0::IsEnable' has a wrong offset!");

// Function BP_PalRideMarkerSaddle.BP_PalRideMarkerSaddle_C.ExecuteUbergraph_BP_PalRideMarkerSaddle
// 0x0070 (0x0070 - 0x0000)
struct BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnable;                       // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsEnable)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NormalizeToRange_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_1;   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle) == 0x000008, "Wrong alignment on BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle");
static_assert(sizeof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle) == 0x000070, "Wrong size on BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, EntryPoint) == 0x000000, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001C, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, K2Node_CustomEvent_IsEnable) == 0x00001D, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::K2Node_CustomEvent_IsEnable' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_Not_PreBool_ReturnValue) == 0x00001E, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_BooleanAND_ReturnValue) == 0x00001F, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000038, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_IsValid_ReturnValue_2) == 0x000040, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000048, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_VSize_ReturnValue) == 0x000050, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_NormalizeToRange_ReturnValue) == 0x000058, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_FClamp_ReturnValue) == 0x000060, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000068, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle, CallFunc_SetFloatParameter_Param_ImplicitCast_1) == 0x00006C, "Member 'BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle::CallFunc_SetFloatParameter_Param_ImplicitCast_1' has a wrong offset!");

}

