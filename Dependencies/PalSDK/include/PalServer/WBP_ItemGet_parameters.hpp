#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function WBP_ItemGet.WBP_ItemGet_C.ChangeBgColor
// 0x0010 (0x0010 - 0x0000)
struct WBP_ItemGet_C_ChangeBgColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemGet_C_ChangeBgColor) == 0x000004, "Wrong alignment on WBP_ItemGet_C_ChangeBgColor");
static_assert(sizeof(WBP_ItemGet_C_ChangeBgColor) == 0x000010, "Wrong size on WBP_ItemGet_C_ChangeBgColor");
static_assert(offsetof(WBP_ItemGet_C_ChangeBgColor, Color) == 0x000000, "Member 'WBP_ItemGet_C_ChangeBgColor::Color' has a wrong offset!");

// Function WBP_ItemGet.WBP_ItemGet_C.ExecuteUbergraph_WBP_ItemGet
// 0x0058 (0x0058 - 0x0000)
struct WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet) == 0x000008, "Wrong alignment on WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet");
static_assert(sizeof(WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet) == 0x000058, "Wrong size on WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet");
static_assert(offsetof(WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet, EntryPoint) == 0x000000, "Member 'WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000028, "Member 'WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000030, "Member 'WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1) == 0x000040, "Member 'WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1) == 0x000048, "Member 'WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_ItemGet.WBP_ItemGet_C.SetDefaultFontStyleName
// 0x000C (0x000C - 0x0000)
struct WBP_ItemGet_C_SetDefaultFontStyleName final
{
public:
	class FName                                   StyleName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemGet_C_SetDefaultFontStyleName) == 0x000004, "Wrong alignment on WBP_ItemGet_C_SetDefaultFontStyleName");
static_assert(sizeof(WBP_ItemGet_C_SetDefaultFontStyleName) == 0x00000C, "Wrong size on WBP_ItemGet_C_SetDefaultFontStyleName");
static_assert(offsetof(WBP_ItemGet_C_SetDefaultFontStyleName, StyleName) == 0x000000, "Member 'WBP_ItemGet_C_SetDefaultFontStyleName::StyleName' has a wrong offset!");
static_assert(offsetof(WBP_ItemGet_C_SetDefaultFontStyleName, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000008, "Member 'WBP_ItemGet_C_SetDefaultFontStyleName::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function WBP_ItemGet.WBP_ItemGet_C.SetIconTexture
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemGet_C_SetIconTexture final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemGet_C_SetIconTexture) == 0x000008, "Wrong alignment on WBP_ItemGet_C_SetIconTexture");
static_assert(sizeof(WBP_ItemGet_C_SetIconTexture) == 0x000008, "Wrong size on WBP_ItemGet_C_SetIconTexture");
static_assert(offsetof(WBP_ItemGet_C_SetIconTexture, Texture) == 0x000000, "Member 'WBP_ItemGet_C_SetIconTexture::Texture' has a wrong offset!");

// Function WBP_ItemGet.WBP_ItemGet_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct WBP_ItemGet_C_SetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ItemGet_C_SetText) == 0x000008, "Wrong alignment on WBP_ItemGet_C_SetText");
static_assert(sizeof(WBP_ItemGet_C_SetText) == 0x000018, "Wrong size on WBP_ItemGet_C_SetText");
static_assert(offsetof(WBP_ItemGet_C_SetText, Text) == 0x000000, "Member 'WBP_ItemGet_C_SetText::Text' has a wrong offset!");

}

