#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_Common_LoadingIcon.WBP_Common_LoadingIcon_C.ExecuteUbergraph_WBP_Common_LoadingIcon
// 0x0010 (0x0010 - 0x0000)
struct WBP_Common_LoadingIcon_C_ExecuteUbergraph_WBP_Common_LoadingIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Common_LoadingIcon_C_ExecuteUbergraph_WBP_Common_LoadingIcon) == 0x000008, "Wrong alignment on WBP_Common_LoadingIcon_C_ExecuteUbergraph_WBP_Common_LoadingIcon");
static_assert(sizeof(WBP_Common_LoadingIcon_C_ExecuteUbergraph_WBP_Common_LoadingIcon) == 0x000010, "Wrong size on WBP_Common_LoadingIcon_C_ExecuteUbergraph_WBP_Common_LoadingIcon");
static_assert(offsetof(WBP_Common_LoadingIcon_C_ExecuteUbergraph_WBP_Common_LoadingIcon, EntryPoint) == 0x000000, "Member 'WBP_Common_LoadingIcon_C_ExecuteUbergraph_WBP_Common_LoadingIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Common_LoadingIcon_C_ExecuteUbergraph_WBP_Common_LoadingIcon, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_Common_LoadingIcon_C_ExecuteUbergraph_WBP_Common_LoadingIcon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

