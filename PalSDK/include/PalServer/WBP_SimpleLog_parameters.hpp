#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_SimpleLog.WBP_SimpleLog_C.ExecuteUbergraph_WBP_SimpleLog
// 0x0118 (0x0118 - 0x0000)
struct WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_inText;                               // 0x0020(0x0018)(ConstParm)
	TSoftObjectPtr<class UTexture2D>              K2Node_Event_softTexturePtr;                       // 0x0038(0x0030)(ConstParm, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalLogAdditionalData                  K2Node_Event_inAdditionalData;                     // 0x0070(0x0038)(ConstParm)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_Array_Get_Item;                           // 0x00B0(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E6[0x2];                                       // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00E8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;            // 0x0108(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog) == 0x000008, "Wrong alignment on WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog");
static_assert(sizeof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog) == 0x000118, "Wrong size on WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, EntryPoint) == 0x000000, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, Temp_object_Variable) == 0x000008, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, K2Node_DynamicCast_AsTexture_2D) == 0x000010, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, K2Node_Event_inText) == 0x000020, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::K2Node_Event_inText' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, K2Node_Event_softTexturePtr) == 0x000038, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::K2Node_Event_softTexturePtr' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000068, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, K2Node_Event_inAdditionalData) == 0x000070, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::K2Node_Event_inAdditionalData' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, K2Node_CustomEvent_Loaded) == 0x0000A8, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E4, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000E5, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, K2Node_CreateDelegate_OutputDelegate) == 0x0000E8, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F8, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog, K2Node_CreateDelegate_OutputDelegate_2) == 0x000108, "Member 'WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function WBP_SimpleLog.WBP_SimpleLog_C.OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A
// 0x0008 (0x0008 - 0x0000)
struct WBP_SimpleLog_C_OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SimpleLog_C_OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A) == 0x000008, "Wrong alignment on WBP_SimpleLog_C_OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A");
static_assert(sizeof(WBP_SimpleLog_C_OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A) == 0x000008, "Wrong size on WBP_SimpleLog_C_OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A");
static_assert(offsetof(WBP_SimpleLog_C_OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A, Loaded) == 0x000000, "Member 'WBP_SimpleLog_C_OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A::Loaded' has a wrong offset!");

// Function WBP_SimpleLog.WBP_SimpleLog_C.OverrideBgColor
// 0x0002 (0x0002 - 0x0000)
struct WBP_SimpleLog_C_OverrideBgColor final
{
public:
	EPalLogContentToneType                        ToneType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SimpleLog_C_OverrideBgColor) == 0x000001, "Wrong alignment on WBP_SimpleLog_C_OverrideBgColor");
static_assert(sizeof(WBP_SimpleLog_C_OverrideBgColor) == 0x000002, "Wrong size on WBP_SimpleLog_C_OverrideBgColor");
static_assert(offsetof(WBP_SimpleLog_C_OverrideBgColor, ToneType) == 0x000000, "Member 'WBP_SimpleLog_C_OverrideBgColor::ToneType' has a wrong offset!");
static_assert(offsetof(WBP_SimpleLog_C_OverrideBgColor, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_SimpleLog_C_OverrideBgColor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_SimpleLog.WBP_SimpleLog_C.RequestLoadIconTexture
// 0x0030 (0x0030 - 0x0000)
struct WBP_SimpleLog_C_RequestLoadIconTexture final
{
public:
	TSoftObjectPtr<class UTexture2D>              SoftTexturePtr;                                    // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SimpleLog_C_RequestLoadIconTexture) == 0x000008, "Wrong alignment on WBP_SimpleLog_C_RequestLoadIconTexture");
static_assert(sizeof(WBP_SimpleLog_C_RequestLoadIconTexture) == 0x000030, "Wrong size on WBP_SimpleLog_C_RequestLoadIconTexture");
static_assert(offsetof(WBP_SimpleLog_C_RequestLoadIconTexture, SoftTexturePtr) == 0x000000, "Member 'WBP_SimpleLog_C_RequestLoadIconTexture::SoftTexturePtr' has a wrong offset!");

// Function WBP_SimpleLog.WBP_SimpleLog_C.SetAdditionalData
// 0x0038 (0x0038 - 0x0000)
struct WBP_SimpleLog_C_SetAdditionalData final
{
public:
	struct FPalLogAdditionalData                  InAdditionalData;                                  // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_SimpleLog_C_SetAdditionalData) == 0x000008, "Wrong alignment on WBP_SimpleLog_C_SetAdditionalData");
static_assert(sizeof(WBP_SimpleLog_C_SetAdditionalData) == 0x000038, "Wrong size on WBP_SimpleLog_C_SetAdditionalData");
static_assert(offsetof(WBP_SimpleLog_C_SetAdditionalData, InAdditionalData) == 0x000000, "Member 'WBP_SimpleLog_C_SetAdditionalData::InAdditionalData' has a wrong offset!");

// Function WBP_SimpleLog.WBP_SimpleLog_C.SetLogText
// 0x0018 (0x0018 - 0x0000)
struct WBP_SimpleLog_C_SetLogText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_SimpleLog_C_SetLogText) == 0x000008, "Wrong alignment on WBP_SimpleLog_C_SetLogText");
static_assert(sizeof(WBP_SimpleLog_C_SetLogText) == 0x000018, "Wrong size on WBP_SimpleLog_C_SetLogText");
static_assert(offsetof(WBP_SimpleLog_C_SetLogText, InText) == 0x000000, "Member 'WBP_SimpleLog_C_SetLogText::InText' has a wrong offset!");

}

