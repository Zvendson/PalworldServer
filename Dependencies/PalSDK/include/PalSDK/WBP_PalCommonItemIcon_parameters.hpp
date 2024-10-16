#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.ExecuteUbergraph_WBP_PalCommonItemIcon
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2D* LoadedTexture)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon) == 0x000008, "Wrong alignment on WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon");
static_assert(sizeof(WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon) == 0x000040, "Wrong size on WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon");
static_assert(offsetof(WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon, EntryPoint) == 0x000000, "Member 'WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.OnLoaded
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCommonItemIcon_C_OnLoaded final
{
public:
	class UTexture2D*                             LoadedTexture;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemIcon_C_OnLoaded) == 0x000008, "Wrong alignment on WBP_PalCommonItemIcon_C_OnLoaded");
static_assert(sizeof(WBP_PalCommonItemIcon_C_OnLoaded) == 0x000010, "Wrong size on WBP_PalCommonItemIcon_C_OnLoaded");
static_assert(offsetof(WBP_PalCommonItemIcon_C_OnLoaded, LoadedTexture) == 0x000000, "Member 'WBP_PalCommonItemIcon_C_OnLoaded::LoadedTexture' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemIcon_C_OnLoaded, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalCommonItemIcon_C_OnLoaded::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

