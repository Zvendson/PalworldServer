#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_IngameDamageVinette.WBP_IngameDamageVinette_C.ExecuteUbergraph_WBP_IngameDamageVinette
// 0x0020 (0x0020 - 0x0000)
struct WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette) == 0x000008, "Wrong alignment on WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette");
static_assert(sizeof(WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette) == 0x000020, "Wrong size on WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette");
static_assert(offsetof(WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette, EntryPoint) == 0x000000, "Member 'WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

}

