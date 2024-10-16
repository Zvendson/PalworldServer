#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_BlinkedLog.WBP_BlinkedLog_C.ExecuteUbergraph_WBP_BlinkedLog
// 0x01A8 (0x01A8 - 0x0000)
struct WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_inText;                               // 0x0010(0x0018)(ConstParm)
	TSoftObjectPtr<class UTexture2D>              K2Node_Event_softTexturePtr;                       // 0x0028(0x0030)(ConstParm, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x005C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalLogAdditionalData                  K2Node_Event_inAdditionalData;                     // 0x0070(0x0038)(ConstParm)
	TSoftObjectPtr<class UTexture2D>              CallFunc_Array_Get_Item;                           // 0x00A8(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DE[0x2];                                       // 0x00DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00FC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0118(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15E[0x2];                                      // 0x015E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0180(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog) == 0x000008, "Wrong alignment on WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog");
static_assert(sizeof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog) == 0x0001A8, "Wrong size on WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, EntryPoint) == 0x000000, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, K2Node_Event_inText) == 0x000010, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::K2Node_Event_inText' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, K2Node_Event_softTexturePtr) == 0x000028, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::K2Node_Event_softTexturePtr' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000058, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, K2Node_CreateDelegate_OutputDelegate) == 0x00005C, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, K2Node_Event_inAdditionalData) == 0x000070, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::K2Node_Event_inAdditionalData' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_Greater_IntInt_ReturnValue) == 0x0000DC, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000DD, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, Temp_object_Variable) == 0x0000E0, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, K2Node_CustomEvent_Loaded) == 0x0000E8, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, K2Node_DynamicCast_AsTexture_2D) == 0x0000F0, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000FC, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000110, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, K2Node_Event_MyGeometry) == 0x000118, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, K2Node_Event_InDeltaTime) == 0x000158, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_IsValid_ReturnValue) == 0x00015C, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_IsValid_ReturnValue_1) == 0x00015D, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000160, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_FMin_ReturnValue) == 0x000168, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000170, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_FMax_ReturnValue) == 0x000178, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, K2Node_CreateDelegate_OutputDelegate_2) == 0x000180, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000190, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000198, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0001A0, "Member 'WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1
// 0x0008 (0x0008 - 0x0000)
struct WBP_BlinkedLog_C_OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BlinkedLog_C_OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1) == 0x000008, "Wrong alignment on WBP_BlinkedLog_C_OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1");
static_assert(sizeof(WBP_BlinkedLog_C_OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1) == 0x000008, "Wrong size on WBP_BlinkedLog_C_OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1");
static_assert(offsetof(WBP_BlinkedLog_C_OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1, Loaded) == 0x000000, "Member 'WBP_BlinkedLog_C_OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1::Loaded' has a wrong offset!");

// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OverrideBgColor
// 0x0002 (0x0002 - 0x0000)
struct WBP_BlinkedLog_C_OverrideBgColor final
{
public:
	EPalLogContentToneType                        ToneType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BlinkedLog_C_OverrideBgColor) == 0x000001, "Wrong alignment on WBP_BlinkedLog_C_OverrideBgColor");
static_assert(sizeof(WBP_BlinkedLog_C_OverrideBgColor) == 0x000002, "Wrong size on WBP_BlinkedLog_C_OverrideBgColor");
static_assert(offsetof(WBP_BlinkedLog_C_OverrideBgColor, ToneType) == 0x000000, "Member 'WBP_BlinkedLog_C_OverrideBgColor::ToneType' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_OverrideBgColor, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_BlinkedLog_C_OverrideBgColor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_BlinkedLog.WBP_BlinkedLog_C.RequestLoadIconTexture
// 0x0030 (0x0030 - 0x0000)
struct WBP_BlinkedLog_C_RequestLoadIconTexture final
{
public:
	TSoftObjectPtr<class UTexture2D>              SoftTexturePtr;                                    // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BlinkedLog_C_RequestLoadIconTexture) == 0x000008, "Wrong alignment on WBP_BlinkedLog_C_RequestLoadIconTexture");
static_assert(sizeof(WBP_BlinkedLog_C_RequestLoadIconTexture) == 0x000030, "Wrong size on WBP_BlinkedLog_C_RequestLoadIconTexture");
static_assert(offsetof(WBP_BlinkedLog_C_RequestLoadIconTexture, SoftTexturePtr) == 0x000000, "Member 'WBP_BlinkedLog_C_RequestLoadIconTexture::SoftTexturePtr' has a wrong offset!");

// Function WBP_BlinkedLog.WBP_BlinkedLog_C.SetAdditionalData
// 0x0038 (0x0038 - 0x0000)
struct WBP_BlinkedLog_C_SetAdditionalData final
{
public:
	struct FPalLogAdditionalData                  InAdditionalData;                                  // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_BlinkedLog_C_SetAdditionalData) == 0x000008, "Wrong alignment on WBP_BlinkedLog_C_SetAdditionalData");
static_assert(sizeof(WBP_BlinkedLog_C_SetAdditionalData) == 0x000038, "Wrong size on WBP_BlinkedLog_C_SetAdditionalData");
static_assert(offsetof(WBP_BlinkedLog_C_SetAdditionalData, InAdditionalData) == 0x000000, "Member 'WBP_BlinkedLog_C_SetAdditionalData::InAdditionalData' has a wrong offset!");

// Function WBP_BlinkedLog.WBP_BlinkedLog_C.SetLogText
// 0x0018 (0x0018 - 0x0000)
struct WBP_BlinkedLog_C_SetLogText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_BlinkedLog_C_SetLogText) == 0x000008, "Wrong alignment on WBP_BlinkedLog_C_SetLogText");
static_assert(sizeof(WBP_BlinkedLog_C_SetLogText) == 0x000018, "Wrong size on WBP_BlinkedLog_C_SetLogText");
static_assert(offsetof(WBP_BlinkedLog_C_SetLogText, InText) == 0x000000, "Member 'WBP_BlinkedLog_C_SetLogText::InText' has a wrong offset!");

// Function WBP_BlinkedLog.WBP_BlinkedLog_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_BlinkedLog_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BlinkedLog_C_Tick) == 0x000008, "Wrong alignment on WBP_BlinkedLog_C_Tick");
static_assert(sizeof(WBP_BlinkedLog_C_Tick) == 0x000048, "Wrong size on WBP_BlinkedLog_C_Tick");
static_assert(offsetof(WBP_BlinkedLog_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_BlinkedLog_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_BlinkedLog_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_BlinkedLog_C_Tick::InDeltaTime' has a wrong offset!");

}

