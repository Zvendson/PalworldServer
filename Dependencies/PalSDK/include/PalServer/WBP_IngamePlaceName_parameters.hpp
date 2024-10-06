#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.DisplayRegion
// 0x0048 (0x0048 - 0x0000)
struct WBP_IngamePlaceName_C_DisplayRegion final
{
public:
	class FName                                   RegionNameID;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0010(0x0018)()
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngamePlaceName_C_DisplayRegion) == 0x000008, "Wrong alignment on WBP_IngamePlaceName_C_DisplayRegion");
static_assert(sizeof(WBP_IngamePlaceName_C_DisplayRegion) == 0x000048, "Wrong size on WBP_IngamePlaceName_C_DisplayRegion");
static_assert(offsetof(WBP_IngamePlaceName_C_DisplayRegion, RegionNameID) == 0x000000, "Member 'WBP_IngamePlaceName_C_DisplayRegion::RegionNameID' has a wrong offset!");
static_assert(offsetof(WBP_IngamePlaceName_C_DisplayRegion, CallFunc_GetHUDService_ReturnValue) == 0x000008, "Member 'WBP_IngamePlaceName_C_DisplayRegion::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngamePlaceName_C_DisplayRegion, CallFunc_GetLocalizedText_ReturnValue) == 0x000010, "Member 'WBP_IngamePlaceName_C_DisplayRegion::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngamePlaceName_C_DisplayRegion, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000028, "Member 'WBP_IngamePlaceName_C_DisplayRegion::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngamePlaceName_C_DisplayRegion, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'WBP_IngamePlaceName_C_DisplayRegion::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngamePlaceName_C_DisplayRegion, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'WBP_IngamePlaceName_C_DisplayRegion::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.ExecuteUbergraph_WBP_IngamePlaceName
// 0x0028 (0x0028 - 0x0000)
struct WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName) == 0x000008, "Wrong alignment on WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName");
static_assert(sizeof(WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName) == 0x000028, "Wrong size on WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName");
static_assert(offsetof(WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName, EntryPoint) == 0x000000, "Member 'WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000011, "Member 'WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName, CallFunc_PlayAnimation_ReturnValue_2) == 0x000020, "Member 'WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

}

