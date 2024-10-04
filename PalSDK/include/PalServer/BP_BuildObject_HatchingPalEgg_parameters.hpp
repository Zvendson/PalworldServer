#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.ExecuteUbergraph_BP_BuildObject_HatchingPalEgg
// 0x00A8 (0x00A8 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   K2Node_CustomEvent_EggActorClass;                  // 0x0030(0x0030)(HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Other_1;                        // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            K2Node_CustomEvent_IndicatorType_1;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Other;                          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            K2Node_CustomEvent_IndicatorType;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B[0x1];                                       // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_NextTemperature;                // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelBase*         K2Node_CustomEvent_Model;                          // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0088(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Workable;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg) == 0x0000A8, "Wrong size on BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, EntryPoint) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, Temp_class_Variable) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_ClassDynamicCast_AsActor) == 0x000010, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_ClassDynamicCast_bSuccess) == 0x000018, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_CustomEvent_EggActorClass) == 0x000030, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_CustomEvent_EggActorClass' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_CustomEvent_Other_1) == 0x000060, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_CustomEvent_Other_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_CustomEvent_IndicatorType_1) == 0x000068, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_CustomEvent_IndicatorType_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_CustomEvent_Other) == 0x000070, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_CustomEvent_Other' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_CustomEvent_IndicatorType) == 0x000078, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_CustomEvent_IndicatorType' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000079, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00007A, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_CustomEvent_NextTemperature) == 0x00007C, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_CustomEvent_NextTemperature' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_CustomEvent_Model) == 0x000080, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_CustomEvent_Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_CustomEvent_Loaded) == 0x000088, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_CustomEvent_Workable) == 0x000090, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_CustomEvent_Workable' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg, K2Node_CreateDelegate_OutputDelegate_1) == 0x000094, "Member 'BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.GetCurrentTemperature
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_GetCurrentTemperature final
{
public:
	int32                                         CurrentTemperature;                                // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentTemperature_ReturnValue;        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_GetCurrentTemperature) == 0x000004, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_GetCurrentTemperature");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_GetCurrentTemperature) == 0x000008, "Wrong size on BP_BuildObject_HatchingPalEgg_C_GetCurrentTemperature");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetCurrentTemperature, CurrentTemperature) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_GetCurrentTemperature::CurrentTemperature' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetCurrentTemperature, CallFunc_GetCurrentTemperature_ReturnValue) == 0x000004, "Member 'BP_BuildObject_HatchingPalEgg_C_GetCurrentTemperature::CallFunc_GetCurrentTemperature_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.GetHatchingTemperature
// 0x0018 (0x0018 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature final
{
public:
	int32                                         Temperature;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Item_Anim_PalEgg_Base_C*            K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetHatchingTemperature_Temperature;       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature) == 0x000018, "Wrong size on BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature, Temperature) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature::Temperature' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature, K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature::K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature, CallFunc_GetHatchingTemperature_Temperature) == 0x000014, "Member 'BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature::CallFunc_GetHatchingTemperature_Temperature' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.GetTemperatureDiff
// 0x0014 (0x0014 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff final
{
public:
	int32                                         Diff;                                              // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHatchingTemperature_Temperature;       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentTemperature_CurrentTemperature; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff) == 0x000004, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff) == 0x000014, "Wrong size on BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff, Diff) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff::Diff' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff, CallFunc_GetHatchingTemperature_Temperature) == 0x000004, "Member 'BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff::CallFunc_GetHatchingTemperature_Temperature' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff, CallFunc_GetCurrentTemperature_CurrentTemperature) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff::CallFunc_GetCurrentTemperature_CurrentTemperature' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.LoadEggMeshModel
// 0x0030 (0x0030 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_LoadEggMeshModel final
{
public:
	TSoftClassPtr<class UClass>                   EggActorClass_0;                                   // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_LoadEggMeshModel) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_LoadEggMeshModel");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_LoadEggMeshModel) == 0x000030, "Wrong size on BP_BuildObject_HatchingPalEgg_C_LoadEggMeshModel");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_LoadEggMeshModel, EggActorClass_0) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_LoadEggMeshModel::EggActorClass_0' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.On Change Temperature
// 0x0004 (0x0004 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_On_Change_Temperature final
{
public:
	int32                                         NextTemperature;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_On_Change_Temperature) == 0x000004, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_On_Change_Temperature");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_On_Change_Temperature) == 0x000004, "Wrong size on BP_BuildObject_HatchingPalEgg_C_On_Change_Temperature");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_On_Change_Temperature, NextTemperature) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_On_Change_Temperature::NextTemperature' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnEndTriggerInteract
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_OnEndTriggerInteract final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            IndicatorType;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_OnEndTriggerInteract) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_OnEndTriggerInteract");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_OnEndTriggerInteract) == 0x000010, "Wrong size on BP_BuildObject_HatchingPalEgg_C_OnEndTriggerInteract");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnEndTriggerInteract, Other) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_OnEndTriggerInteract::Other' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnEndTriggerInteract, IndicatorType) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_OnEndTriggerInteract::IndicatorType' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnHatchedCharacter
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter final
{
public:
	class UPalMapObjectHatchingEggModel*          Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter) == 0x000010, "Wrong size on BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter, Model) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter::Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE) == 0x000008, "Wrong size on BP_BuildObject_HatchingPalEgg_C_OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE, Loaded) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE::Loaded' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnSetConcreteModelAvailable
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailable final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailable) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailable");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailable) == 0x000008, "Wrong size on BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailable");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailable, Model) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailable::Model' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnSetConcreteModelAvailableInternal
// 0x00B0 (0x00B0 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectHatchingEggModel* Model)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Workable)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInteractDelegates*                  CallFunc_Delegates_ReturnValue;                    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectHatchingEggModel*          K2Node_DynamicCast_AsPal_Map_Object_Hatching_Egg_Model; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 NextTemperature)>        K2Node_CreateDelegate_OutputDelegate_4;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectItemContainerModule*       CallFunc_GetItemContainerModule_ReturnValue;       // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectHatchingEggModel* Model)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemContainer*                      CallFunc_GetContainer_ReturnValue;                 // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalItemContainer* Container)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal) == 0x0000B0, "Wrong size on BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, ConcreteModel) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, K2Node_CreateDelegate_OutputDelegate_3) == 0x000038, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, CallFunc_Delegates_ReturnValue) == 0x000048, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::CallFunc_Delegates_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, K2Node_DynamicCast_AsPal_Map_Object_Hatching_Egg_Model) == 0x000050, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::K2Node_DynamicCast_AsPal_Map_Object_Hatching_Egg_Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, K2Node_CreateDelegate_OutputDelegate_4) == 0x00005C, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, CallFunc_GetItemContainerModule_ReturnValue) == 0x000070, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::CallFunc_GetItemContainerModule_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, K2Node_CreateDelegate_OutputDelegate_5) == 0x000078, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, CallFunc_GetContainer_ReturnValue) == 0x000090, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::CallFunc_GetContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, K2Node_CreateDelegate_OutputDelegate_6) == 0x000098, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal, CallFunc_IsValid_ReturnValue_1) == 0x0000A8, "Member 'BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnStartTriggerInteract
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_OnStartTriggerInteract final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            IndicatorType;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_OnStartTriggerInteract) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_OnStartTriggerInteract");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_OnStartTriggerInteract) == 0x000010, "Wrong size on BP_BuildObject_HatchingPalEgg_C_OnStartTriggerInteract");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnStartTriggerInteract, Other) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_OnStartTriggerInteract::Other' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnStartTriggerInteract, IndicatorType) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_OnStartTriggerInteract::IndicatorType' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnUpdateHatchedCharacter
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter final
{
public:
	class UPalMapObjectHatchingEggModel*          Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter) == 0x000010, "Wrong size on BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter, Model) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter::Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnUpdateItemContainer
// 0x0028 (0x0028 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer final
{
public:
	class UPalItemContainer*                      Container;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer) == 0x000028, "Wrong size on BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer, Container) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer::Container' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnUpdateWorkable
// 0x0001 (0x0001 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_OnUpdateWorkable final
{
public:
	bool                                          Workable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_OnUpdateWorkable) == 0x000001, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_OnUpdateWorkable");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_OnUpdateWorkable) == 0x000001, "Wrong size on BP_BuildObject_HatchingPalEgg_C_OnUpdateWorkable");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_OnUpdateWorkable, Workable) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_OnUpdateWorkable::Workable' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.ResetHatchingSpeed
// 0x0001 (0x0001 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_ResetHatchingSpeed final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_ResetHatchingSpeed) == 0x000001, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_ResetHatchingSpeed");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_ResetHatchingSpeed) == 0x000001, "Wrong size on BP_BuildObject_HatchingPalEgg_C_ResetHatchingSpeed");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_ResetHatchingSpeed, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_ResetHatchingSpeed::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.SetEggAnimPlayState
// 0x0018 (0x0018 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState final
{
public:
	bool                                          IsPlay;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Item_Anim_PalEgg_Base_C*            K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState) == 0x000018, "Wrong size on BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState, IsPlay) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState::IsPlay' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState, K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState::K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.SetupItemForeach
// 0x0060 (0x0060 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_SetupItemForeach final
{
public:
	class UPalItemSlot*                           Slot;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemId                             CallFunc_GetItemId_ReturnValue;                    // 0x0010(0x0028)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemData                           CallFunc_GetItemData_ReturnValue;                  // 0x0048(0x0010)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_SetupItemForeach) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_SetupItemForeach");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_SetupItemForeach) == 0x000060, "Wrong size on BP_BuildObject_HatchingPalEgg_C_SetupItemForeach");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetupItemForeach, Slot) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_SetupItemForeach::Slot' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetupItemForeach, Index_0) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_SetupItemForeach::Index_0' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetupItemForeach, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'BP_BuildObject_HatchingPalEgg_C_SetupItemForeach::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetupItemForeach, CallFunc_GetItemId_ReturnValue) == 0x000010, "Member 'BP_BuildObject_HatchingPalEgg_C_SetupItemForeach::CallFunc_GetItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetupItemForeach, CallFunc_GetItemIDManager_ReturnValue) == 0x000038, "Member 'BP_BuildObject_HatchingPalEgg_C_SetupItemForeach::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetupItemForeach, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BP_BuildObject_HatchingPalEgg_C_SetupItemForeach::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetupItemForeach, CallFunc_GetItemData_ReturnValue) == 0x000048, "Member 'BP_BuildObject_HatchingPalEgg_C_SetupItemForeach::CallFunc_GetItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SetupItemForeach, CallFunc_IsEmpty_ReturnValue) == 0x000058, "Member 'BP_BuildObject_HatchingPalEgg_C_SetupItemForeach::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.SpawnGetPalEffect
// 0x00D0 (0x00D0 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect final
{
public:
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0000(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect) == 0x000010, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect) == 0x0000D0, "Wrong size on BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect, CallFunc_GetTransform_ReturnValue) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect, CallFunc_BreakTransform_Location) == 0x000060, "Member 'BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect, CallFunc_BreakTransform_Rotation) == 0x000078, "Member 'BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect, CallFunc_BreakTransform_Scale) == 0x000090, "Member 'BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A8, "Member 'BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000C0, "Member 'BP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.UpdateHatchingSpeed
// 0x0060 (0x0060 - 0x0000)
struct BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed final
{
public:
	float                                         CallFunc_GetDefaultAutoWorkAmountBySec_ReturnValue; // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTemperatureDiff_Diff;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Map_Find_Value;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_UpdateWorkAmountBySec_NewWorkAmountBySec_ImplicitCast; // 0x0058(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed) == 0x000008, "Wrong alignment on BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed");
static_assert(sizeof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed) == 0x000060, "Wrong size on BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_GetDefaultAutoWorkAmountBySec_ReturnValue) == 0x000000, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_GetDefaultAutoWorkAmountBySec_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_GetTemperatureDiff_Diff) == 0x000008, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_GetTemperatureDiff_Diff' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_Abs_Int_ReturnValue) == 0x00000C, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_GetGameSetting_ReturnValue) == 0x000010, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_Map_Find_Value) == 0x000038, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_Map_Find_ReturnValue) == 0x00003C, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000048, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000050, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed, CallFunc_UpdateWorkAmountBySec_NewWorkAmountBySec_ImplicitCast) == 0x000058, "Member 'BP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed::CallFunc_UpdateWorkAmountBySec_NewWorkAmountBySec_ImplicitCast' has a wrong offset!");

}

