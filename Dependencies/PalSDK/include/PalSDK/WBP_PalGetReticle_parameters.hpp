#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_Captured
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalGetReticle_C_AnmEvent_Captured final
{
public:
	bool                                          IsDisplay;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGetReticle_C_AnmEvent_Captured) == 0x000001, "Wrong alignment on WBP_PalGetReticle_C_AnmEvent_Captured");
static_assert(sizeof(WBP_PalGetReticle_C_AnmEvent_Captured) == 0x000001, "Wrong size on WBP_PalGetReticle_C_AnmEvent_Captured");
static_assert(offsetof(WBP_PalGetReticle_C_AnmEvent_Captured, IsDisplay) == 0x000000, "Member 'WBP_PalGetReticle_C_AnmEvent_Captured::IsDisplay' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.AnmEvent_New
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalGetReticle_C_AnmEvent_New final
{
public:
	bool                                          IsDisplay;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGetReticle_C_AnmEvent_New) == 0x000001, "Wrong alignment on WBP_PalGetReticle_C_AnmEvent_New");
static_assert(sizeof(WBP_PalGetReticle_C_AnmEvent_New) == 0x000001, "Wrong size on WBP_PalGetReticle_C_AnmEvent_New");
static_assert(offsetof(WBP_PalGetReticle_C_AnmEvent_New, IsDisplay) == 0x000000, "Member 'WBP_PalGetReticle_C_AnmEvent_New::IsDisplay' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.DisplayCaptureBonusNum
// 0x0160 (0x0160 - 0x0000)
struct WBP_PalGetReticle_C_DisplayCaptureBonusNum final
{
public:
	int32                                         CaptureBonusCount;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveLinearColor*                      NumYellowCurve;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      PaleBlueCurve;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterial*                              Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              Temp_object_Variable_1;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue_1;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00E0(0x0018)()
	class UMaterial*                              K2Node_Select_Default;                             // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0110(0x0014)()
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_1;        // 0x0124(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0134(0x0014)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0148(0x0014)()
};
static_assert(alignof(WBP_PalGetReticle_C_DisplayCaptureBonusNum) == 0x000008, "Wrong alignment on WBP_PalGetReticle_C_DisplayCaptureBonusNum");
static_assert(sizeof(WBP_PalGetReticle_C_DisplayCaptureBonusNum) == 0x000160, "Wrong size on WBP_PalGetReticle_C_DisplayCaptureBonusNum");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, CaptureBonusCount) == 0x000000, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::CaptureBonusCount' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, NumYellowCurve) == 0x000008, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::NumYellowCurve' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, PaleBlueCurve) == 0x000010, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::PaleBlueCurve' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, Temp_bool_Variable) == 0x000018, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, Temp_bool_Variable_1) == 0x000019, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, Temp_object_Variable) == 0x000020, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, Temp_object_Variable_1) == 0x000028, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, CallFunc_GetGameSetting_ReturnValue) == 0x000030, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, CallFunc_GetGameSetting_ReturnValue_1) == 0x000038, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::CallFunc_GetGameSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, CallFunc_Min_ReturnValue) == 0x000058, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B0, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, K2Node_MakeArray_Array) == 0x0000B8, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000E0, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, K2Node_Select_Default) == 0x0000F8, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, CallFunc_GetLinearColorValue_ReturnValue) == 0x000100, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, K2Node_MakeStruct_SlateColor) == 0x000110, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, CallFunc_GetLinearColorValue_ReturnValue_1) == 0x000124, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::CallFunc_GetLinearColorValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, K2Node_MakeStruct_SlateColor_1) == 0x000134, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_DisplayCaptureBonusNum, K2Node_Select_Default_1) == 0x000148, "Member 'WBP_PalGetReticle_C_DisplayCaptureBonusNum::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.ExecuteUbergraph_WBP_PalGetReticle
// 0x0160 (0x0160 - 0x0000)
struct WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_6;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_7;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_8;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isDisplay_1;                    // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E[0x2];                                       // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_9;              // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isDisplay;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_10;             // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00D0(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UImage*                                 CallFunc_Array_Get_Item_1;                         // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x3];                                      // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidgetAnimation*>               K2Node_MakeArray_Array_1;                          // 0x0148(0x0010)(ReferenceParm)
	double                                        CallFunc_Update_Display_Rate_DeltaTime_ImplicitCast; // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle) == 0x000008, "Wrong alignment on WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle");
static_assert(sizeof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle) == 0x000160, "Wrong size on WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, EntryPoint) == 0x000000, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000004, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_PlayAnimation_ReturnValue_3) == 0x000030, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_PlayAnimation_ReturnValue_4) == 0x000038, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_PlayAnimation_ReturnValue_5) == 0x000040, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_PlayAnimation_ReturnValue_6) == 0x000048, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_PlayAnimation_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_PlayAnimation_ReturnValue_7) == 0x000050, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_PlayAnimation_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000058, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000060, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_GetEndTime_ReturnValue) == 0x000068, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_IsValid_ReturnValue) == 0x00006C, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_RandomInteger_ReturnValue) == 0x000070, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_Array_Get_Item) == 0x000078, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_PlayAnimation_ReturnValue_8) == 0x000090, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_PlayAnimation_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, K2Node_CustomEvent_isDisplay_1) == 0x00009C, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::K2Node_CustomEvent_isDisplay_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_Less_IntInt_ReturnValue) == 0x00009D, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_PlayAnimation_ReturnValue_9) == 0x0000A0, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_PlayAnimation_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, K2Node_CustomEvent_isDisplay) == 0x0000A8, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::K2Node_CustomEvent_isDisplay' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_PlayAnimation_ReturnValue_10) == 0x0000B0, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_PlayAnimation_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B8, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000C8, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, K2Node_Event_MyGeometry) == 0x0000D0, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, K2Node_Event_InDeltaTime) == 0x000110, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, K2Node_MakeArray_Array) == 0x000118, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_Array_Get_Item_1) == 0x000128, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_Array_Length_ReturnValue_1) == 0x000130, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000138, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_Less_IntInt_ReturnValue_1) == 0x000140, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_Array_Add_ReturnValue) == 0x000144, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, K2Node_MakeArray_Array_1) == 0x000148, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle, CallFunc_Update_Display_Rate_DeltaTime_ImplicitCast) == 0x000158, "Member 'WBP_PalGetReticle_C_ExecuteUbergraph_WBP_PalGetReticle::CallFunc_Update_Display_Rate_DeltaTime_ImplicitCast' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.Set Display Capture Rate Force
// 0x0110 (0x0110 - 0x0000)
struct WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force final
{
public:
	double                                        Rate;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0058(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0070(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x0094(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_2;              // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x00D0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x00E8(0x0018)()
	float                                         CallFunc_GetLinearColorValue_InTime_ImplicitCast;  // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1; // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force) == 0x000008, "Wrong alignment on WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force");
static_assert(sizeof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force) == 0x000110, "Wrong size on WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, Rate) == 0x000000, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::Rate' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Round_ReturnValue) == 0x000014, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Less_IntInt_ReturnValue_1) == 0x000019, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_SelectFloat_ReturnValue_1) == 0x000028, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Percent_IntInt_ReturnValue) == 0x000030, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Percent_IntInt_ReturnValue_1) == 0x000034, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Divide_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000054, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000058, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000070, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, Temp_int_Array_Index_Variable) == 0x000088, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, Temp_int_Loop_Counter_Variable) == 0x00008C, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_GetLinearColorValue_ReturnValue) == 0x000094, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000B4, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000B8, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_FTrunc_ReturnValue) == 0x0000C0, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Divide_IntInt_ReturnValue_2) == 0x0000C4, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Divide_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Percent_IntInt_ReturnValue_2) == 0x0000C8, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0000D0, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_Conv_IntToText_ReturnValue_4) == 0x0000E8, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_GetLinearColorValue_InTime_ImplicitCast) == 0x000100, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_GetLinearColorValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000104, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1) == 0x000108, "Member 'WBP_PalGetReticle_C_Set_Display_Capture_Rate_Force::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.SetCaptureRateForce
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalGetReticle_C_SetCaptureRateForce final
{
public:
	double                                        CaptureRate;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGetReticle_C_SetCaptureRateForce) == 0x000008, "Wrong alignment on WBP_PalGetReticle_C_SetCaptureRateForce");
static_assert(sizeof(WBP_PalGetReticle_C_SetCaptureRateForce) == 0x000008, "Wrong size on WBP_PalGetReticle_C_SetCaptureRateForce");
static_assert(offsetof(WBP_PalGetReticle_C_SetCaptureRateForce, CaptureRate) == 0x000000, "Member 'WBP_PalGetReticle_C_SetCaptureRateForce::CaptureRate' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.SetCaptureRateFromListIndex
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalGetReticle_C_SetCaptureRateFromListIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGetReticle_C_SetCaptureRateFromListIndex) == 0x000008, "Wrong alignment on WBP_PalGetReticle_C_SetCaptureRateFromListIndex");
static_assert(sizeof(WBP_PalGetReticle_C_SetCaptureRateFromListIndex) == 0x000028, "Wrong size on WBP_PalGetReticle_C_SetCaptureRateFromListIndex");
static_assert(offsetof(WBP_PalGetReticle_C_SetCaptureRateFromListIndex, Index_0) == 0x000000, "Member 'WBP_PalGetReticle_C_SetCaptureRateFromListIndex::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_SetCaptureRateFromListIndex, CallFunc_Array_Get_Item) == 0x000008, "Member 'WBP_PalGetReticle_C_SetCaptureRateFromListIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_SetCaptureRateFromListIndex, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_PalGetReticle_C_SetCaptureRateFromListIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_SetCaptureRateFromListIndex, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_PalGetReticle_C_SetCaptureRateFromListIndex::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_SetCaptureRateFromListIndex, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000020, "Member 'WBP_PalGetReticle_C_SetCaptureRateFromListIndex::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.SetCaptureRateList
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalGetReticle_C_SetCaptureRateList final
{
public:
	TArray<double>                                RateList_0;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_PalGetReticle_C_SetCaptureRateList) == 0x000008, "Wrong alignment on WBP_PalGetReticle_C_SetCaptureRateList");
static_assert(sizeof(WBP_PalGetReticle_C_SetCaptureRateList) == 0x000010, "Wrong size on WBP_PalGetReticle_C_SetCaptureRateList");
static_assert(offsetof(WBP_PalGetReticle_C_SetCaptureRateList, RateList_0) == 0x000000, "Member 'WBP_PalGetReticle_C_SetCaptureRateList::RateList_0' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.SetSneakBonusFlag
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalGetReticle_C_SetSneakBonusFlag final
{
public:
	bool                                          IsBonus;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0008(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0020(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0038(0x0018)()
};
static_assert(alignof(WBP_PalGetReticle_C_SetSneakBonusFlag) == 0x000008, "Wrong alignment on WBP_PalGetReticle_C_SetSneakBonusFlag");
static_assert(sizeof(WBP_PalGetReticle_C_SetSneakBonusFlag) == 0x000050, "Wrong size on WBP_PalGetReticle_C_SetSneakBonusFlag");
static_assert(offsetof(WBP_PalGetReticle_C_SetSneakBonusFlag, IsBonus) == 0x000000, "Member 'WBP_PalGetReticle_C_SetSneakBonusFlag::IsBonus' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_SetSneakBonusFlag, Temp_bool_Variable) == 0x000001, "Member 'WBP_PalGetReticle_C_SetSneakBonusFlag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_SetSneakBonusFlag, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000008, "Member 'WBP_PalGetReticle_C_SetSneakBonusFlag::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_SetSneakBonusFlag, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000020, "Member 'WBP_PalGetReticle_C_SetSneakBonusFlag::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_SetSneakBonusFlag, K2Node_Select_Default) == 0x000038, "Member 'WBP_PalGetReticle_C_SetSneakBonusFlag::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.SetWorldLocation
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalGetReticle_C_SetWorldLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGetReticle_C_SetWorldLocation) == 0x000008, "Wrong alignment on WBP_PalGetReticle_C_SetWorldLocation");
static_assert(sizeof(WBP_PalGetReticle_C_SetWorldLocation) == 0x000018, "Wrong size on WBP_PalGetReticle_C_SetWorldLocation");
static_assert(offsetof(WBP_PalGetReticle_C_SetWorldLocation, Location) == 0x000000, "Member 'WBP_PalGetReticle_C_SetWorldLocation::Location' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalGetReticle_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGetReticle_C_Tick) == 0x000008, "Wrong alignment on WBP_PalGetReticle_C_Tick");
static_assert(sizeof(WBP_PalGetReticle_C_Tick) == 0x000048, "Wrong size on WBP_PalGetReticle_C_Tick");
static_assert(offsetof(WBP_PalGetReticle_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PalGetReticle_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_PalGetReticle_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.Update Display Rate
// 0x0088 (0x0088 - 0x0000)
struct WBP_PalGetReticle_C_Update_Display_Rate final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGetReticle_C_Update_Display_Rate) == 0x000008, "Wrong alignment on WBP_PalGetReticle_C_Update_Display_Rate");
static_assert(sizeof(WBP_PalGetReticle_C_Update_Display_Rate) == 0x000088, "Wrong size on WBP_PalGetReticle_C_Update_Display_Rate");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, DeltaTime) == 0x000000, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::DeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_GetFloatValue_ReturnValue) == 0x000020, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_FMin_ReturnValue) == 0x000040, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000048, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_Array_Get_Item) == 0x000058, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000068, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000074, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000078, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Display_Rate, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000080, "Member 'WBP_PalGetReticle_C_Update_Display_Rate::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function WBP_PalGetReticle.WBP_PalGetReticle_C.Update Position
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalGetReticle_C_Update_Position final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGetReticle_C_Update_Position) == 0x000008, "Wrong alignment on WBP_PalGetReticle_C_Update_Position");
static_assert(sizeof(WBP_PalGetReticle_C_Update_Position) == 0x000028, "Wrong size on WBP_PalGetReticle_C_Update_Position");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Position, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'WBP_PalGetReticle_C_Update_Position::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Position, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'WBP_PalGetReticle_C_Update_Position::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Position, CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition) == 0x000010, "Member 'WBP_PalGetReticle_C_Update_Position::CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition' has a wrong offset!");
static_assert(offsetof(WBP_PalGetReticle_C_Update_Position, CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue) == 0x000020, "Member 'WBP_PalGetReticle_C_Update_Position::CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue' has a wrong offset!");

}

