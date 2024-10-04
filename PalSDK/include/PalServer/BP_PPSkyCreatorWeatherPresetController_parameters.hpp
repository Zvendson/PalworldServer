#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "PPSkyCreatorPlugin_structs.hpp"
#include "S_PPSkyCreatorTimePreset_structs.hpp"


namespace PalServer::Params
{

// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController
// 0x08F0 (0x08F0 - 0x0000)
struct BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTime_ReturnValue;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPPSkyCreatorWeatherPreset*             CallFunc_GetPresets_CurrentPreset;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPPSkyCreatorWeatherPreset*             CallFunc_GetPresets_NextPreset;                    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetPresets_Alpha;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPresets_PresetIndex;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPPSkyCreatorWeatherSettings           CallFunc_GetWeatherPresetSettings_ReturnValue;     // 0x0030(0x0458)(NoDestructor)
	struct FPPSkyCreatorWeatherSettings           CallFunc_GetWeatherPresetSettings_ReturnValue_1;   // 0x0488(0x0458)(NoDestructor)
	double                                        CallFunc_GetPresets_Time_ImplicitCast;             // 0x08E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_LerpWeatherSettings_Alpha_ImplicitCast;   // 0x08E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController) == 0x000008, "Wrong alignment on BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController");
static_assert(sizeof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController) == 0x0008F0, "Wrong size on BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, EntryPoint) == 0x000000, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, CallFunc_GetTime_ReturnValue) == 0x000008, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::CallFunc_GetTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, CallFunc_GetPresets_CurrentPreset) == 0x000010, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::CallFunc_GetPresets_CurrentPreset' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, CallFunc_GetPresets_NextPreset) == 0x000018, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::CallFunc_GetPresets_NextPreset' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, CallFunc_GetPresets_Alpha) == 0x000020, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::CallFunc_GetPresets_Alpha' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, CallFunc_GetPresets_PresetIndex) == 0x000028, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::CallFunc_GetPresets_PresetIndex' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, K2Node_Event_DeltaSeconds) == 0x00002C, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, CallFunc_GetWeatherPresetSettings_ReturnValue) == 0x000030, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::CallFunc_GetWeatherPresetSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, CallFunc_GetWeatherPresetSettings_ReturnValue_1) == 0x000488, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::CallFunc_GetWeatherPresetSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, CallFunc_GetPresets_Time_ImplicitCast) == 0x0008E0, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::CallFunc_GetPresets_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController, CallFunc_LerpWeatherSettings_Alpha_ImplicitCast) == 0x0008E8, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController::CallFunc_LerpWeatherSettings_Alpha_ImplicitCast' has a wrong offset!");

// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.GetPrePreset
// 0x0040 (0x0040 - 0x0000)
struct BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPPSkyCreatorWeatherPreset*             Pre;                                               // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_PPSkyCreatorTimePreset              CallFunc_Array_Get_Item;                           // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PPSkyCreatorTimePreset              CallFunc_Array_Get_Item_1;                         // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset) == 0x000008, "Wrong alignment on BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset");
static_assert(sizeof(BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset) == 0x000040, "Wrong size on BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset, Index_0) == 0x000000, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset::Index_0' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset, Pre) == 0x000008, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset::Pre' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00002C, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPrePreset::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.GetPresets
// 0x00C0 (0x00C0 - 0x0000)
struct BP_PPSkyCreatorWeatherPresetController_C_GetPresets final
{
public:
	double                                        Time_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPPSkyCreatorWeatherPreset*             CurrentPreset;                                     // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPPSkyCreatorWeatherPreset*             NextPreset;                                        // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Alpha_0;                                           // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PresetIndex;                                       // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TargetTime;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Next;                                              // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Current;                                           // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E[0x2];                                       // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NormalizeToRange_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PPSkyCreatorTimePreset              CallFunc_Array_Get_Item;                           // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_PPSkyCreatorTimePreset              CallFunc_Array_Get_Item_1;                         // 0x0088(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_PPSkyCreatorTimePreset              CallFunc_Array_Get_Item_2;                         // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets) == 0x000008, "Wrong alignment on BP_PPSkyCreatorWeatherPresetController_C_GetPresets");
static_assert(sizeof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets) == 0x0000C0, "Wrong size on BP_PPSkyCreatorWeatherPresetController_C_GetPresets");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, Time_0) == 0x000000, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::Time_0' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CurrentPreset) == 0x000008, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CurrentPreset' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, NextPreset) == 0x000010, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::NextPreset' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, Alpha_0) == 0x000018, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::Alpha_0' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, PresetIndex) == 0x000020, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::PresetIndex' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, TargetTime) == 0x000028, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::TargetTime' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, Next) == 0x000030, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::Next' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, Current) == 0x000034, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::Current' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, Temp_int_Variable) == 0x000038, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Add_IntInt_ReturnValue_2) == 0x000044, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Add_IntInt_ReturnValue_3) == 0x000048, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, Temp_bool_Variable) == 0x00004C, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Not_PreBool_ReturnValue) == 0x00004D, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000050, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000058, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_NormalizeToRange_ReturnValue) == 0x000068, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_FClamp_ReturnValue) == 0x000070, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Array_Get_Item) == 0x000078, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00009C, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Array_Get_Item_2) == 0x0000A0, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Array_Length_ReturnValue_1) == 0x0000B0, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000B4, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000BC, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_GetPresets, CallFunc_BooleanAND_ReturnValue) == 0x0000BD, "Member 'BP_PPSkyCreatorWeatherPresetController_C_GetPresets::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PPSkyCreatorWeatherPresetController_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PPSkyCreatorWeatherPresetController_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PPSkyCreatorWeatherPresetController_C_ReceiveTick");
static_assert(sizeof(BP_PPSkyCreatorWeatherPresetController_C_ReceiveTick) == 0x000004, "Wrong size on BP_PPSkyCreatorWeatherPresetController_C_ReceiveTick");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PPSkyCreatorWeatherPresetController_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.SetBrightness
// 0x00D0 (0x00D0 - 0x0000)
struct BP_PPSkyCreatorWeatherPresetController_C_SetBrightness final
{
public:
	double                                        Brightness;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               CallFunc_MakeVector4_ReturnValue;                  // 0x0010(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalOptionGraphicsSettings             CallFunc_GetOptionGraphicsSettings_ReturnValue;    // 0x0030(0x005C)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness) == 0x000010, "Wrong alignment on BP_PPSkyCreatorWeatherPresetController_C_SetBrightness");
static_assert(sizeof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness) == 0x0000D0, "Wrong size on BP_PPSkyCreatorWeatherPresetController_C_SetBrightness");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, Brightness) == 0x000000, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::Brightness' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, CallFunc_MakeVector4_ReturnValue) == 0x000010, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::CallFunc_MakeVector4_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, CallFunc_GetOptionGraphicsSettings_ReturnValue) == 0x000030, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::CallFunc_GetOptionGraphicsSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, CallFunc_IsValid_ReturnValue) == 0x00008C, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000090, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000098, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000A0, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000A8, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0000B8, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000C0, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorWeatherPresetController_C_SetBrightness, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0000C8, "Member 'BP_PPSkyCreatorWeatherPresetController_C_SetBrightness::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

}

