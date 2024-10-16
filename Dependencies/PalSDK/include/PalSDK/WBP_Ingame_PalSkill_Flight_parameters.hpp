#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Ingame_PalSkill_Flight.WBP_Ingame_PalSkill_Flight_C.ExecuteUbergraph_WBP_Ingame_PalSkill_Flight
// 0x0100 (0x0100 - 0x0000)
struct WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputMethodActive_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B[0x1];                                       // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_Select_Default;                             // 0x0068(0x0010)(NoDestructor)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_2;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0080(0x0018)()
	class FName                                   K2Node_Select_Default_1;                           // 0x0098(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_2;                           // 0x00A0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_3;            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_4;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_3;                           // 0x00C8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00F0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight) == 0x000008, "Wrong alignment on WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight");
static_assert(sizeof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight) == 0x000100, "Wrong size on WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, EntryPoint) == 0x000000, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, Temp_bool_Variable) == 0x000004, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000010, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, Temp_bool_Variable_1) == 0x000018, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_IsInputMethodActive_ReturnValue) == 0x000019, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_IsInputMethodActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, Temp_bool_Variable_2) == 0x00001A, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000030, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000034, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_PlayAnimation_ReturnValue_2) == 0x000038, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_MakeLiteralName_ReturnValue) == 0x000040, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, K2Node_CustomEvent_bNewInputType) == 0x000058, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000059, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, Temp_bool_Variable_3) == 0x00005A, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_MakeLiteralName_ReturnValue_1) == 0x00005C, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, K2Node_Select_Default) == 0x000068, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_MakeLiteralName_ReturnValue_2) == 0x000078, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_MakeLiteralName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000080, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, K2Node_Select_Default_1) == 0x000098, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, K2Node_Select_Default_2) == 0x0000A0, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_MakeLiteralName_ReturnValue_3) == 0x0000A8, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_MakeLiteralName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, CallFunc_MakeLiteralName_ReturnValue_4) == 0x0000B0, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::CallFunc_MakeLiteralName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B8, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, K2Node_Select_Default_3) == 0x0000C8, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000D0, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000E0, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000F0, "Member 'WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

// Function WBP_Ingame_PalSkill_Flight.WBP_Ingame_PalSkill_Flight_C.OnDownInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_Ingame_PalSkill_Flight_C_OnDownInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalSkill_Flight_C_OnDownInputMethodChanged) == 0x000001, "Wrong alignment on WBP_Ingame_PalSkill_Flight_C_OnDownInputMethodChanged");
static_assert(sizeof(WBP_Ingame_PalSkill_Flight_C_OnDownInputMethodChanged) == 0x000001, "Wrong size on WBP_Ingame_PalSkill_Flight_C_OnDownInputMethodChanged");
static_assert(offsetof(WBP_Ingame_PalSkill_Flight_C_OnDownInputMethodChanged, bNewInputType) == 0x000000, "Member 'WBP_Ingame_PalSkill_Flight_C_OnDownInputMethodChanged::bNewInputType' has a wrong offset!");

}

