#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.AddRotation
// 0x0030 (0x0030 - 0x0000)
struct BP_PalMonsterCaptureSet_C_AddRotation final
{
public:
	struct FRotator                               Rotator;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_AddRotation) == 0x000008, "Wrong alignment on BP_PalMonsterCaptureSet_C_AddRotation");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_AddRotation) == 0x000030, "Wrong size on BP_PalMonsterCaptureSet_C_AddRotation");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_AddRotation, Rotator) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_AddRotation::Rotator' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_AddRotation, CallFunc_ComposeRotators_ReturnValue) == 0x000018, "Member 'BP_PalMonsterCaptureSet_C_AddRotation::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.ExecuteUbergraph_BP_PalMonsterCaptureSet
// 0x0178 (0x0178 - 0x0000)
struct BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsPal_Character;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   K2Node_CustomEvent_NewParam;                       // 0x0028(0x0030)(HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0088(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_RLerp_Alpha_ImplicitCast;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet) == 0x000008, "Wrong alignment on BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet) == 0x000178, "Wrong size on BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, EntryPoint) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, Temp_class_Variable) == 0x000010, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, K2Node_ClassDynamicCast_AsPal_Character) == 0x000018, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::K2Node_ClassDynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, K2Node_ClassDynamicCast_bSuccess) == 0x000020, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, K2Node_CustomEvent_NewParam) == 0x000028, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000068, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, K2Node_Event_DeltaSeconds) == 0x00006C, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, CallFunc_RLerp_ReturnValue) == 0x000070, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000088, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet, CallFunc_RLerp_Alpha_ImplicitCast) == 0x000170, "Member 'BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet::CallFunc_RLerp_Alpha_ImplicitCast' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.GetCaptureCharacterID
// 0x001C (0x001C - 0x0000)
struct BP_PalMonsterCaptureSet_C_GetCaptureCharacterID final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BPClassName;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_GetCaptureCharacterID) == 0x000004, "Wrong alignment on BP_PalMonsterCaptureSet_C_GetCaptureCharacterID");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_GetCaptureCharacterID) == 0x00001C, "Wrong size on BP_PalMonsterCaptureSet_C_GetCaptureCharacterID");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_GetCaptureCharacterID, CharacterID) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_GetCaptureCharacterID::CharacterID' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_GetCaptureCharacterID, BPClassName) == 0x000008, "Member 'BP_PalMonsterCaptureSet_C_GetCaptureCharacterID::BPClassName' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_GetCaptureCharacterID, CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName) == 0x000010, "Member 'BP_PalMonsterCaptureSet_C_GetCaptureCharacterID::CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_GetCaptureCharacterID, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000018, "Member 'BP_PalMonsterCaptureSet_C_GetCaptureCharacterID::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.GetNowDisplayingPalID
// 0x0008 (0x0008 - 0x0000)
struct BP_PalMonsterCaptureSet_C_GetNowDisplayingPalID final
{
public:
	class FName                                   PalID;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_GetNowDisplayingPalID) == 0x000004, "Wrong alignment on BP_PalMonsterCaptureSet_C_GetNowDisplayingPalID");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_GetNowDisplayingPalID) == 0x000008, "Wrong size on BP_PalMonsterCaptureSet_C_GetNowDisplayingPalID");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_GetNowDisplayingPalID, PalID) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_GetNowDisplayingPalID::PalID' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.On Loaded Pal Class
// 0x0660 (0x0660 - 0x0000)
struct BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class final
{
public:
	class UClass*                                 NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetStaticParameteComponentFromActorClassr_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshComponentFromActorClass_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralBlendSpaceType                     Temp_byte_Variable;                                // 0x00D8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            CallFunc_Map_Find_Value;                           // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA[0x6];                                       // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          CallFunc_Map_Find_Value_1;                         // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FA[0x2];                                       // 0x00FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName_1; // 0x00FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0114(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUICaptureCameraOffsetData          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0120(0x00B0)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult; // 0x01D8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x02C0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x03A8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x0490(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_2;  // 0x0578(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class) == 0x000010, "Wrong alignment on BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class) == 0x000660, "Wrong size on BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, NewParam) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::NewParam' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_GetStaticParameteComponentFromActorClassr_ReturnValue) == 0x000008, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_GetStaticParameteComponentFromActorClassr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName) == 0x000010, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000018, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_GetSkeletalMeshComponentFromActorClass_ReturnValue) == 0x000020, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_GetSkeletalMeshComponentFromActorClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_GetSkeletalMeshAsset_ReturnValue) == 0x000028, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_GetSkeletalMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_GetRelativeTransform_ReturnValue) == 0x000030, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_BreakTransform_Location) == 0x000090, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_BreakTransform_Rotation) == 0x0000A8, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_BreakTransform_Scale) == 0x0000C0, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, Temp_byte_Variable) == 0x0000D8, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_Map_Find_Value) == 0x0000E0, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_Map_Find_ReturnValue) == 0x0000E8, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000E9, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_Map_Find_Value_1) == 0x0000F0, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_Map_Find_ReturnValue_1) == 0x0000F8, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_Map_Contains_ReturnValue) == 0x0000F9, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName_1) == 0x0000FC, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName_1' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000104, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, Temp_name_Variable) == 0x000108, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, Temp_bool_Variable) == 0x000110, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, K2Node_Select_Default) == 0x000114, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_GetDataTableRowFromName_OutRow) == 0x000120, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001D0, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult) == 0x0001D8, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x0002C0, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0003A8, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x000490, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class, CallFunc_K2_SetRelativeLocation_SweepHitResult_2) == 0x000578, "Member 'BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class::CallFunc_K2_SetRelativeLocation_SweepHitResult_2' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.OnLoaded_47E3700548CBE24684940690F7B5FBD1
// 0x0008 (0x0008 - 0x0000)
struct BP_PalMonsterCaptureSet_C_OnLoaded_47E3700548CBE24684940690F7B5FBD1 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_OnLoaded_47E3700548CBE24684940690F7B5FBD1) == 0x000008, "Wrong alignment on BP_PalMonsterCaptureSet_C_OnLoaded_47E3700548CBE24684940690F7B5FBD1");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_OnLoaded_47E3700548CBE24684940690F7B5FBD1) == 0x000008, "Wrong size on BP_PalMonsterCaptureSet_C_OnLoaded_47E3700548CBE24684940690F7B5FBD1");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OnLoaded_47E3700548CBE24684940690F7B5FBD1, Loaded) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_OnLoaded_47E3700548CBE24684940690F7B5FBD1::Loaded' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.OnRequestLoadPalClass
// 0x0030 (0x0030 - 0x0000)
struct BP_PalMonsterCaptureSet_C_OnRequestLoadPalClass final
{
public:
	TSoftClassPtr<class UClass>                   NewParam;                                          // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_OnRequestLoadPalClass) == 0x000008, "Wrong alignment on BP_PalMonsterCaptureSet_C_OnRequestLoadPalClass");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_OnRequestLoadPalClass) == 0x000030, "Wrong size on BP_PalMonsterCaptureSet_C_OnRequestLoadPalClass");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OnRequestLoadPalClass, NewParam) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_OnRequestLoadPalClass::NewParam' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.OverrideMaterial
// 0x0048 (0x0048 - 0x0000)
struct BP_PalMonsterCaptureSet_C_OverrideMaterial final
{
public:
	class USkeletalMeshComponent*                 TargetSkeletalMesh;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0010(0x0010)(ReferenceParm)
	class UMaterialInterface*                     CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_Map_Find_Value;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_OverrideMaterial) == 0x000008, "Wrong alignment on BP_PalMonsterCaptureSet_C_OverrideMaterial");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_OverrideMaterial) == 0x000048, "Wrong size on BP_PalMonsterCaptureSet_C_OverrideMaterial");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OverrideMaterial, TargetSkeletalMesh) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_OverrideMaterial::TargetSkeletalMesh' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OverrideMaterial, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_PalMonsterCaptureSet_C_OverrideMaterial::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OverrideMaterial, CallFunc_GetMaterials_ReturnValue) == 0x000010, "Member 'BP_PalMonsterCaptureSet_C_OverrideMaterial::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OverrideMaterial, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_PalMonsterCaptureSet_C_OverrideMaterial::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OverrideMaterial, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_PalMonsterCaptureSet_C_OverrideMaterial::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OverrideMaterial, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'BP_PalMonsterCaptureSet_C_OverrideMaterial::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OverrideMaterial, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_PalMonsterCaptureSet_C_OverrideMaterial::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OverrideMaterial, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_PalMonsterCaptureSet_C_OverrideMaterial::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OverrideMaterial, CallFunc_Map_Find_Value) == 0x000038, "Member 'BP_PalMonsterCaptureSet_C_OverrideMaterial::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_OverrideMaterial, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'BP_PalMonsterCaptureSet_C_OverrideMaterial::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalMonsterCaptureSet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalMonsterCaptureSet_C_ReceiveTick");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalMonsterCaptureSet_C_ReceiveTick");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.Request Capture from PalSkin
// 0x0040 (0x0040 - 0x0000)
struct BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin final
{
public:
	class FName                                   PalRowName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   SkinClass;                                         // 0x0008(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCaptureCharacterID_BPClassName;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin) == 0x000008, "Wrong alignment on BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin) == 0x000040, "Wrong size on BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin, PalRowName) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin::PalRowName' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin, SkinClass) == 0x000008, "Member 'BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin::SkinClass' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin, CallFunc_GetCaptureCharacterID_BPClassName) == 0x000038, "Member 'BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin::CallFunc_GetCaptureCharacterID_BPClassName' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.RequestCaptureFromPalID
// 0x0048 (0x0048 - 0x0000)
struct BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID final
{
public:
	class FName                                   PalRowName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCaptureCharacterID_BPClassName;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_GetBPClass_ReturnValue;                   // 0x0018(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID) == 0x000008, "Wrong alignment on BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID) == 0x000048, "Wrong size on BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID, PalRowName) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID::PalRowName' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID, CallFunc_GetCaptureCharacterID_BPClassName) == 0x000008, "Member 'BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID::CallFunc_GetCaptureCharacterID_BPClassName' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000010, "Member 'BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID, CallFunc_GetBPClass_ReturnValue) == 0x000018, "Member 'BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID::CallFunc_GetBPClass_ReturnValue' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.Reset
// 0x0240 (0x0240 - 0x0000)
struct BP_PalMonsterCaptureSet_C_Reset final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0060(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0150(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_Reset) == 0x000010, "Wrong alignment on BP_PalMonsterCaptureSet_C_Reset");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_Reset) == 0x000240, "Wrong size on BP_PalMonsterCaptureSet_C_Reset");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_Reset, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_Reset::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_Reset, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000060, "Member 'BP_PalMonsterCaptureSet_C_Reset::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_Reset, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000148, "Member 'BP_PalMonsterCaptureSet_C_Reset::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_Reset, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000150, "Member 'BP_PalMonsterCaptureSet_C_Reset::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.ResetRotator
// 0x00E8 (0x00E8 - 0x0000)
struct BP_PalMonsterCaptureSet_C_ResetRotator final
{
public:
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0000(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_ResetRotator) == 0x000008, "Wrong alignment on BP_PalMonsterCaptureSet_C_ResetRotator");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_ResetRotator) == 0x0000E8, "Wrong size on BP_PalMonsterCaptureSet_C_ResetRotator");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_ResetRotator, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_ResetRotator::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.SetupDelayHandle
// 0x0018 (0x0018 - 0x0000)
struct BP_PalMonsterCaptureSet_C_SetupDelayHandle final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_SetupDelayHandle) == 0x000008, "Wrong alignment on BP_PalMonsterCaptureSet_C_SetupDelayHandle");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_SetupDelayHandle) == 0x000018, "Wrong size on BP_PalMonsterCaptureSet_C_SetupDelayHandle");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_SetupDelayHandle, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_SetupDelayHandle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_SetupDelayHandle, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'BP_PalMonsterCaptureSet_C_SetupDelayHandle::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.SetupSkeletalMesh
// 0x0008 (0x0008 - 0x0000)
struct BP_PalMonsterCaptureSet_C_SetupSkeletalMesh final
{
public:
	class USkeletalMesh*                          Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalMonsterCaptureSet_C_SetupSkeletalMesh) == 0x000008, "Wrong alignment on BP_PalMonsterCaptureSet_C_SetupSkeletalMesh");
static_assert(sizeof(BP_PalMonsterCaptureSet_C_SetupSkeletalMesh) == 0x000008, "Wrong size on BP_PalMonsterCaptureSet_C_SetupSkeletalMesh");
static_assert(offsetof(BP_PalMonsterCaptureSet_C_SetupSkeletalMesh, Mesh) == 0x000000, "Member 'BP_PalMonsterCaptureSet_C_SetupSkeletalMesh::Mesh' has a wrong offset!");

}

