#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalPlayerController.BP_PalPlayerController_C.CanRideSupportPal
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_CanRideSupportPal final
{
public:
	bool                                          CanRide;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSwimming_ReturnValue;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSwimPal_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_CanRideSupportPal) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_CanRideSupportPal");
static_assert(sizeof(BP_PalPlayerController_C_CanRideSupportPal) == 0x000018, "Wrong size on BP_PalPlayerController_C_CanRideSupportPal");
static_assert(offsetof(BP_PalPlayerController_C_CanRideSupportPal, CanRide) == 0x000000, "Member 'BP_PalPlayerController_C_CanRideSupportPal::CanRide' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CanRideSupportPal, CallFunc_IsSwimming_ReturnValue) == 0x000001, "Member 'BP_PalPlayerController_C_CanRideSupportPal::CallFunc_IsSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CanRideSupportPal, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000008, "Member 'BP_PalPlayerController_C_CanRideSupportPal::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CanRideSupportPal, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PalPlayerController_C_CanRideSupportPal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CanRideSupportPal, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'BP_PalPlayerController_C_CanRideSupportPal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CanRideSupportPal, CallFunc_IsSwimPal_ReturnValue) == 0x000012, "Member 'BP_PalPlayerController_C_CanRideSupportPal::CallFunc_IsSwimPal_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.ChangeMoveRate
// 0x0008 (0x0008 - 0x0000)
struct BP_PalPlayerController_C_ChangeMoveRate final
{
public:
	double                                        Rate;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_ChangeMoveRate) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_ChangeMoveRate");
static_assert(sizeof(BP_PalPlayerController_C_ChangeMoveRate) == 0x000008, "Wrong size on BP_PalPlayerController_C_ChangeMoveRate");
static_assert(offsetof(BP_PalPlayerController_C_ChangeMoveRate, Rate) == 0x000000, "Member 'BP_PalPlayerController_C_ChangeMoveRate::Rate' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.ChangeMoveSpeed
// 0x0028 (0x0028 - 0x0000)
struct BP_PalPlayerController_C_ChangeMoveSpeed final
{
public:
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_ChangeMoveSpeed) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_ChangeMoveSpeed");
static_assert(sizeof(BP_PalPlayerController_C_ChangeMoveSpeed) == 0x000028, "Wrong size on BP_PalPlayerController_C_ChangeMoveSpeed");
static_assert(offsetof(BP_PalPlayerController_C_ChangeMoveSpeed, CallFunc_K2_GetPawn_ReturnValue) == 0x000000, "Member 'BP_PalPlayerController_C_ChangeMoveSpeed::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ChangeMoveSpeed, K2Node_DynamicCast_AsPal_Player_Character) == 0x000008, "Member 'BP_PalPlayerController_C_ChangeMoveSpeed::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ChangeMoveSpeed, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PalPlayerController_C_ChangeMoveSpeed::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ChangeMoveSpeed, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000018, "Member 'BP_PalPlayerController_C_ChangeMoveSpeed::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ChangeMoveSpeed, CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast) == 0x000020, "Member 'BP_PalPlayerController_C_ChangeMoveSpeed::CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.ChangeTargetPlayer
// 0x0004 (0x0004 - 0x0000)
struct BP_PalPlayerController_C_ChangeTargetPlayer final
{
public:
	int32                                         AddPlayerIndex;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_ChangeTargetPlayer) == 0x000004, "Wrong alignment on BP_PalPlayerController_C_ChangeTargetPlayer");
static_assert(sizeof(BP_PalPlayerController_C_ChangeTargetPlayer) == 0x000004, "Wrong size on BP_PalPlayerController_C_ChangeTargetPlayer");
static_assert(offsetof(BP_PalPlayerController_C_ChangeTargetPlayer, AddPlayerIndex) == 0x000000, "Member 'BP_PalPlayerController_C_ChangeTargetPlayer::AddPlayerIndex' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.CreatedOtomoIndividualHandleCallback
// 0x0050 (0x0050 - 0x0000)
struct BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         HoldIndex;                                         // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CreatedIndividualHandle;                           // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterHandle*>  HoldOtomoIndividualHandles;                        // 0x0040(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback");
static_assert(sizeof(BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback) == 0x000050, "Wrong size on BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback");
static_assert(offsetof(BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback, ID) == 0x000000, "Member 'BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback::ID' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback, HoldIndex) == 0x000030, "Member 'BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback::HoldIndex' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback, CreatedIndividualHandle) == 0x000038, "Member 'BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback::CreatedIndividualHandle' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback, HoldOtomoIndividualHandles) == 0x000040, "Member 'BP_PalPlayerController_C_CreatedOtomoIndividualHandleCallback::HoldOtomoIndividualHandles' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.CreateOtomo
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_CreateOtomo final
{
public:
	bool                                          IsClientPlayer;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalDebugOtomoPalInfo>          TempOtomoList;                                     // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(BP_PalPlayerController_C_CreateOtomo) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_CreateOtomo");
static_assert(sizeof(BP_PalPlayerController_C_CreateOtomo) == 0x000018, "Wrong size on BP_PalPlayerController_C_CreateOtomo");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomo, IsClientPlayer) == 0x000000, "Member 'BP_PalPlayerController_C_CreateOtomo::IsClientPlayer' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomo, TempOtomoList) == 0x000008, "Member 'BP_PalPlayerController_C_CreateOtomo::TempOtomoList' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.CreateOtomoByNameList
// 0x0380 (0x0380 - 0x0000)
struct BP_PalPlayerController_C_CreateOtomoByNameList final
{
public:
	TArray<struct FPalDebugOtomoPalInfo>          OtomoInfo;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                           Skill;                                             // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPalDebugCharacterStatusRank>   K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDebugOtomoPalInfo                  CallFunc_Array_Get_Item;                           // 0x0048(0x0040)()
	struct FPalDataTableRowName_PassiveSkillData  CallFunc_Array_Get_Item_1;                         // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetPalPlayerState_ReturnValue;            // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetInitializedCharacterSaveParemter_DebugDefaultParamSetup_outParameter; // 0x00B0(0x02A8)()
	bool                                          CallFunc_GetInitializedCharacterSaveParemter_DebugDefaultParamSetup_ReturnValue; // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359[0x3];                                      // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate;              // 0x035C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_CreateIndividual_ReturnValue;             // 0x0378(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_CreateOtomoByNameList) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_CreateOtomoByNameList");
static_assert(sizeof(BP_PalPlayerController_C_CreateOtomoByNameList) == 0x000380, "Wrong size on BP_PalPlayerController_C_CreateOtomoByNameList");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, OtomoInfo) == 0x000000, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::OtomoInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, Skill) == 0x000010, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::Skill' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, Temp_int_Variable) == 0x000020, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, K2Node_MakeArray_Array) == 0x000028, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, Temp_int_Array_Index_Variable) == 0x000040, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000094, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_Array_Add_ReturnValue) == 0x000098, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00009C, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_Array_Length_ReturnValue_1) == 0x0000A0, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_Less_IntInt_ReturnValue) == 0x0000A4, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_GetPalPlayerState_ReturnValue) == 0x0000A8, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_GetPalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_GetInitializedCharacterSaveParemter_DebugDefaultParamSetup_outParameter) == 0x0000B0, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_GetInitializedCharacterSaveParemter_DebugDefaultParamSetup_outParameter' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_GetInitializedCharacterSaveParemter_DebugDefaultParamSetup_ReturnValue) == 0x000358, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_GetInitializedCharacterSaveParemter_DebugDefaultParamSetup_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, K2Node_CreateDelegate_OutputDelegate) == 0x00035C, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_GetCharacterManager_ReturnValue) == 0x000370, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameList, CallFunc_CreateIndividual_ReturnValue) == 0x000378, "Member 'BP_PalPlayerController_C_CreateOtomoByNameList::CallFunc_CreateIndividual_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.CreateOtomoByNameListToServer
// 0x0010 (0x0010 - 0x0000)
struct BP_PalPlayerController_C_CreateOtomoByNameListToServer final
{
public:
	TArray<struct FPalDebugOtomoPalInfo>          OtomoInfo;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PalPlayerController_C_CreateOtomoByNameListToServer) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_CreateOtomoByNameListToServer");
static_assert(sizeof(BP_PalPlayerController_C_CreateOtomoByNameListToServer) == 0x000010, "Wrong size on BP_PalPlayerController_C_CreateOtomoByNameListToServer");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoByNameListToServer, OtomoInfo) == 0x000000, "Member 'BP_PalPlayerController_C_CreateOtomoByNameListToServer::OtomoInfo' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.CreateOtomoToServer
// 0x0001 (0x0001 - 0x0000)
struct BP_PalPlayerController_C_CreateOtomoToServer final
{
public:
	bool                                          IsClientServer;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_CreateOtomoToServer) == 0x000001, "Wrong alignment on BP_PalPlayerController_C_CreateOtomoToServer");
static_assert(sizeof(BP_PalPlayerController_C_CreateOtomoToServer) == 0x000001, "Wrong size on BP_PalPlayerController_C_CreateOtomoToServer");
static_assert(offsetof(BP_PalPlayerController_C_CreateOtomoToServer, IsClientServer) == 0x000000, "Member 'BP_PalPlayerController_C_CreateOtomoToServer::IsClientServer' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.DecrementSelectOtomo_Internal
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_DecrementSelectOtomo_Internal final
{
public:
	int32                                         BeforeDecrementID;                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetOtomoCount_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue_1;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_DecrementSelectOtomo_Internal) == 0x000004, "Wrong alignment on BP_PalPlayerController_C_DecrementSelectOtomo_Internal");
static_assert(sizeof(BP_PalPlayerController_C_DecrementSelectOtomo_Internal) == 0x000018, "Wrong size on BP_PalPlayerController_C_DecrementSelectOtomo_Internal");
static_assert(offsetof(BP_PalPlayerController_C_DecrementSelectOtomo_Internal, BeforeDecrementID) == 0x000000, "Member 'BP_PalPlayerController_C_DecrementSelectOtomo_Internal::BeforeDecrementID' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_DecrementSelectOtomo_Internal, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x000004, "Member 'BP_PalPlayerController_C_DecrementSelectOtomo_Internal::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_DecrementSelectOtomo_Internal, CallFunc_GetOtomoCount_ReturnValue) == 0x000008, "Member 'BP_PalPlayerController_C_DecrementSelectOtomo_Internal::CallFunc_GetOtomoCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_DecrementSelectOtomo_Internal, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'BP_PalPlayerController_C_DecrementSelectOtomo_Internal::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_DecrementSelectOtomo_Internal, CallFunc_GetSelectedOtomoID_ReturnValue_1) == 0x000010, "Member 'BP_PalPlayerController_C_DecrementSelectOtomo_Internal::CallFunc_GetSelectedOtomoID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_DecrementSelectOtomo_Internal, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000014, "Member 'BP_PalPlayerController_C_DecrementSelectOtomo_Internal::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.DoStep
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_DoStep final
{
public:
	EPalStepAxisType                              Axis;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              StepDirection;                                     // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_DoStep) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_DoStep");
static_assert(sizeof(BP_PalPlayerController_C_DoStep) == 0x000018, "Wrong size on BP_PalPlayerController_C_DoStep");
static_assert(offsetof(BP_PalPlayerController_C_DoStep, Axis) == 0x000000, "Member 'BP_PalPlayerController_C_DoStep::Axis' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_DoStep, StepDirection) == 0x000008, "Member 'BP_PalPlayerController_C_DoStep::StepDirection' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.ExecuteUbergraph_BP_PalPlayerController
// 0x0D00 (0x0D00 - 0x0000)
struct BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputKeyEvent_Key_8;                        // 0x0008(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_7;                        // 0x0020(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_6;                        // 0x0038(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_5;                        // 0x0050(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_4;                        // 0x0068(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_3;                        // 0x0080(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_2;                        // 0x0098(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_1;                        // 0x00B0(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key;                          // 0x00C8(0x0018)(HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x00E8(0x0010)(ConstParm, ReferenceParm)
	struct FKey                                   K2Node_InputKeyEvent_Key_9;                        // 0x00F8(0x0018)(HasGetValueTypeHash)
	TArray<struct FPalDebugOtomoPalInfo>          K2Node_CustomEvent_OtomoInfo;                      // 0x0110(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsActivatedSelectOtomo_ReturnValue;       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActivateCurrentOtomoNearThePlayer_ReturnValue; // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo;   // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Inactivate_Otomo_isSuccess;               // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_132[0x6];                                      // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0150(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRiding_ReturnValue;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Inactivate_Otomo_isSuccess_1;             // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B2[0x2];                                      // 0x01B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ID;                             // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsClientServer;                 // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActivateCurrentOtomoNearThePlayer_ReturnValue_1; // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BA[0x6];                                      // 0x01BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_Move;                           // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_Rate;                           // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_AddPlayerIndex;                 // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_TargetPlayerName;               // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_MaxPlayer;                      // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SelectPlayer;                   // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0258(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x02A8(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02F8(0x0018)()
	TArray<class APalCharacter*>                  CallFunc_GetAllPlayerCharacters_OutPlayers;        // 0x0310(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0320(0x0050)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0378(0x0010)(ReferenceParm)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0390(0x0018)()
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC[0x4];                                      // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPlayerCharacterByPlayerIndex_ReturnValue; // 0x03C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C9[0x7];                                      // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetPlayerState_ReturnValue;               // 0x03D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x03D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x03E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0400(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0420(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_509[0x7];                                      // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable_2;                            // 0x0510(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSpectator_bSpectatorMode;              // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519[0x7];                                      // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System;               // 0x0520(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSpectator_bSpectatorMode_1;            // 0x0529(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSpectator_bSpectatorMode_2;            // 0x052A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52B[0x5];                                      // 0x052B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0530(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0538(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0550(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x0568(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x0650(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0651(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_652[0x2];                                      // 0x0652(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0654(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PalCapturedCage_C*                  K2Node_CustomEvent_Cage;                           // 0x0658(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetDefaultPlayerCharacter_ReturnValue;    // 0x0660(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_1;       // 0x0668(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0670(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_671[0x7];                                      // 0x0671(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0678(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalStepAxisType                              K2Node_Event_axis;                                 // 0x0680(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_681[0x7];                                      // 0x0681(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Event_StepDirection;                        // 0x0688(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x0698(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x06A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Vector_Forward_ReturnValue;               // 0x06B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_3;                 // 0x06D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x06D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_4;                 // 0x06F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x06F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0700(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0708(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0710(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0728(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0740(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_5;                 // 0x0758(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0760(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x0778(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0790(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x07A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x07B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x07C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x07E0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x08C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x08C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x08CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CB[0x1];                                      // 0x08CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x08CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x08D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D4[0x4];                                      // 0x08D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x08D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x08F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0908(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0920(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0938(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0940(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0948(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0950(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0958(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0960(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0964(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0968(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96C[0x4];                                      // 0x096C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0970(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0988(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_5;           // 0x09A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_2;     // 0x09B8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_2;        // 0x0AA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0AA1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanRideSupportPal_CanRide;                // 0x0AA2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA3[0x5];                                      // 0x0AA3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UNiagaraSystem>          K2Node_CustomEvent_EffectPath;                     // 0x0AA8(0x0030)(HasGetValueTypeHash)
	uint8                                         Pad_AD8[0x8];                                      // 0x0AD8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             K2Node_CustomEvent_SpawnTransform;                 // 0x0AE0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0B40(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0B58(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0B70(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x0B88(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0B90(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B94[0x4];                                      // 0x0B94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UNiagaraSystem>          CallFunc_Array_Get_Item;                           // 0x0B98(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0BC8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0BCC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0BD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BD1[0x7];                                      // 0x0BD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0BD8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0BE0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0BE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BE9[0x7];                                      // 0x0BE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue_1;         // 0x0BF0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_slotID;                               // 0x0BF8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BFC[0x4];                                      // 0x0BFC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_CustomEvent_Pawn;                           // 0x0C00(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInClientConnection_ReturnValue;         // 0x0C08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C09[0x7];                                      // 0x0C09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0C10(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0C18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalControlActor_ReturnValue;          // 0x0C19(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1A[0x2];                                      // 0x0C1A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FPalDamageResult& DamageResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0C1C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRiding_ReturnValue_1;                   // 0x0C2C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2D[0x3];                                      // 0x0C2D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetDefaultPlayerCharacter_ReturnValue_1;  // 0x0C30(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0C38(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0C40(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_6;                 // 0x0C48(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0C50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0C51(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C52[0x6];                                      // 0x0C52(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0C58(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0C60(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue;       // 0x0C68(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0C70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0C71(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C72[0x2];                                      // 0x0C72(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x0C74(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;            // 0x0C84(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0C94(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CA4[0x4];                                      // 0x0CA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0CA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0CB0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0CB8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0CD0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0CD8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSpectator_bSpectatorMode_3;            // 0x0CF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0CF1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditorBuild_ReturnValue;                // 0x0CF2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController) == 0x000010, "Wrong alignment on BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController");
static_assert(sizeof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController) == 0x000D00, "Wrong size on BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, EntryPoint) == 0x000000, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_InputKeyEvent_Key_8) == 0x000008, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_InputKeyEvent_Key_8' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_InputKeyEvent_Key_7) == 0x000020, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_InputKeyEvent_Key_7' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_InputKeyEvent_Key_6) == 0x000038, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_InputKeyEvent_Key_6' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_InputKeyEvent_Key_5) == 0x000050, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_InputKeyEvent_Key_5' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_InputKeyEvent_Key_4) == 0x000068, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_InputKeyEvent_Key_4' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_InputKeyEvent_Key_3) == 0x000080, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_InputKeyEvent_Key_3' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_InputKeyEvent_Key_2) == 0x000098, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_InputKeyEvent_Key_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_InputKeyEvent_Key_1) == 0x0000B0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_InputKeyEvent_Key_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_InputKeyEvent_Key) == 0x0000C8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_InputKeyEvent_Key' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, Temp_int_Array_Index_Variable) == 0x0000E0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, Temp_object_Variable) == 0x0000E8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_InputKeyEvent_Key_9) == 0x0000F8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_InputKeyEvent_Key_9' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_OtomoInfo) == 0x000110, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_OtomoInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsActivatedSelectOtomo_ReturnValue) == 0x000120, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsActivatedSelectOtomo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_ActivateCurrentOtomoNearThePlayer_ReturnValue) == 0x000121, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_ActivateCurrentOtomoNearThePlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo) == 0x000128, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Inactivate_Otomo_isSuccess) == 0x000131, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Inactivate_Otomo_isSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000138, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_MakeTransform_ReturnValue) == 0x000150, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsRiding_ReturnValue) == 0x0001B0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsRiding_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Inactivate_Otomo_isSuccess_1) == 0x0001B1, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Inactivate_Otomo_isSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_ID) == 0x0001B4, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_ID' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_IsClientServer) == 0x0001B8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_IsClientServer' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_ActivateCurrentOtomoNearThePlayer_ReturnValue_1) == 0x0001B9, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_ActivateCurrentOtomoNearThePlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_Move) == 0x0001C0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_Move' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, Temp_object_Variable_1) == 0x0001D8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_Rate) == 0x0001E0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_Rate' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0001E8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_FClamp_ReturnValue) == 0x0001F0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_AddPlayerIndex) == 0x0001F8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_AddPlayerIndex' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetPawn_ReturnValue) == 0x000200, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Add_IntInt_ReturnValue) == 0x000208, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_DynamicCast_AsPal_Player_Character) == 0x000210, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_DynamicCast_bSuccess) == 0x000218, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_TargetPlayerName) == 0x000220, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_TargetPlayerName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_MaxPlayer) == 0x000230, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_MaxPlayer' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_SelectPlayer) == 0x000234, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_SelectPlayer' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_Loaded) == 0x000238, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Add_IntInt_ReturnValue_1) == 0x000240, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000248, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000250, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_MakeStruct_FormatArgumentData) == 0x000258, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_MakeStruct_FormatArgumentData_1) == 0x0002A8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Conv_StringToText_ReturnValue) == 0x0002F8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetAllPlayerCharacters_OutPlayers) == 0x000310, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetAllPlayerCharacters_OutPlayers' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_MakeStruct_FormatArgumentData_2) == 0x000320, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Array_Length_ReturnValue) == 0x000370, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_MakeArray_Array) == 0x000378, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Subtract_IntInt_ReturnValue) == 0x000388, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Format_ReturnValue) == 0x000390, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Clamp_ReturnValue) == 0x0003A8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Conv_TextToString_ReturnValue) == 0x0003B0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetPlayerCharacterByPlayerIndex_ReturnValue) == 0x0003C0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetPlayerCharacterByPlayerIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsValid_ReturnValue_1) == 0x0003C8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetPlayerState_ReturnValue) == 0x0003D0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetPlayerName_ReturnValue) == 0x0003D8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0003E8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Add_VectorVector_ReturnValue) == 0x000400, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_HasAuthority_ReturnValue) == 0x000418, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000420, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000508, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, Temp_object_Variable_2) == 0x000510, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetSpectator_bSpectatorMode) == 0x000518, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetSpectator_bSpectatorMode' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_DynamicCast_AsNiagara_System) == 0x000520, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_DynamicCast_AsNiagara_System' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_DynamicCast_bSuccess_1) == 0x000528, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetSpectator_bSpectatorMode_1) == 0x000529, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetSpectator_bSpectatorMode_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetSpectator_bSpectatorMode_2) == 0x00052A, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetSpectator_bSpectatorMode_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000530, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000538, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000550, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x000568, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x000650, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Not_PreBool_ReturnValue) == 0x000651, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_Event_DeltaSeconds) == 0x000654, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_Cage) == 0x000658, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_Cage' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetDefaultPlayerCharacter_ReturnValue) == 0x000660, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetDefaultPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_DynamicCast_AsPal_Player_Character_1) == 0x000668, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_DynamicCast_AsPal_Player_Character_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_DynamicCast_bSuccess_2) == 0x000670, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_Event_PossessedPawn) == 0x000678, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_Event_axis) == 0x000680, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_Event_axis' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_Event_StepDirection) == 0x000688, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_Event_StepDirection' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetPawn_ReturnValue_2) == 0x000698, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0006A0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Vector_Forward_ReturnValue) == 0x0006B8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Vector_Forward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetPawn_ReturnValue_3) == 0x0006D0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x0006D8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetPawn_ReturnValue_4) == 0x0006F0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetPawn_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakVector_X) == 0x0006F8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakVector_Y) == 0x000700, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakVector_Z) == 0x000708, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000710, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_MakeVector_ReturnValue) == 0x000728, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Normal_ReturnValue) == 0x000740, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetPawn_ReturnValue_5) == 0x000758, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetPawn_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000760, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x000778, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000790, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0007A8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Add_VectorVector_ReturnValue_3) == 0x0007B0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Add_VectorVector_ReturnValue_4) == 0x0007C8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_LineTraceSingle_OutHit) == 0x0007E0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_LineTraceSingle_ReturnValue) == 0x0008C8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_bBlockingHit) == 0x0008C9, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_bInitialOverlap) == 0x0008CA, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_Time) == 0x0008CC, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_Distance) == 0x0008D0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_Location) == 0x0008D8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_ImpactPoint) == 0x0008F0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_Normal) == 0x000908, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_ImpactNormal) == 0x000920, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_PhysMat) == 0x000938, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_HitActor) == 0x000940, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_HitComponent) == 0x000948, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_HitBoneName) == 0x000950, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_BoneName) == 0x000958, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_HitItem) == 0x000960, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_ElementIndex) == 0x000964, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_FaceIndex) == 0x000968, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_TraceStart) == 0x000970, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakHitResult_TraceEnd) == 0x000988, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Add_VectorVector_ReturnValue_5) == 0x0009A0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Add_VectorVector_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_SetActorLocation_SweepHitResult_2) == 0x0009B8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_SetActorLocation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_SetActorLocation_ReturnValue_2) == 0x000AA0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_SetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_Event_EndPlayReason) == 0x000AA1, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_CanRideSupportPal_CanRide) == 0x000AA2, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_CanRideSupportPal_CanRide' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_EffectPath) == 0x000AA8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_EffectPath' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_SpawnTransform) == 0x000AE0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_SpawnTransform' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakTransform_Location) == 0x000B40, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakTransform_Rotation) == 0x000B58, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_BreakTransform_Scale) == 0x000B70, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x000B88, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, Temp_int_Loop_Counter_Variable) == 0x000B90, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Array_Get_Item) == 0x000B98, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Add_IntInt_ReturnValue_2) == 0x000BC8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Array_Length_ReturnValue_1) == 0x000BCC, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Less_IntInt_ReturnValue) == 0x000BD0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000BD8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000BE0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsValid_ReturnValue_2) == 0x000BE8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetPalDebugSetting_ReturnValue_1) == 0x000BF0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetPalDebugSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_Event_slotID) == 0x000BF8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_Event_slotID' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_Pawn) == 0x000C00, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_Pawn' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsInClientConnection_ReturnValue) == 0x000C08, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsInClientConnection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetComponentByClass_ReturnValue) == 0x000C10, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsValid_ReturnValue_3) == 0x000C18, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsLocalControlActor_ReturnValue) == 0x000C19, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsLocalControlActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CreateDelegate_OutputDelegate) == 0x000C1C, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsRiding_ReturnValue_1) == 0x000C2C, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsRiding_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetDefaultPlayerCharacter_ReturnValue_1) == 0x000C30, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetDefaultPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CustomEvent_Loaded_1) == 0x000C38, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000C40, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_GetPawn_ReturnValue_6) == 0x000C48, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_GetPawn_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsValid_ReturnValue_4) == 0x000C50, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsValid_ReturnValue_5) == 0x000C51, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000C58, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000C60, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetIndividualParameter_ReturnValue) == 0x000C68, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsValid_ReturnValue_6) == 0x000C70, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsValid_ReturnValue_7) == 0x000C71, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CreateDelegate_OutputDelegate_1) == 0x000C74, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CreateDelegate_OutputDelegate_2) == 0x000C84, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, K2Node_CreateDelegate_OutputDelegate_3) == 0x000C94, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000CA8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000CB0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_MakeVector_ReturnValue_1) == 0x000CB8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000CD0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_MakeVector_ReturnValue_2) == 0x000CD8, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_GetSpectator_bSpectatorMode_3) == 0x000CF0, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_GetSpectator_bSpectatorMode_3' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsServer_ReturnValue) == 0x000CF1, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController, CallFunc_IsEditorBuild_ReturnValue) == 0x000CF2, "Member 'BP_PalPlayerController_C_ExecuteUbergraph_BP_PalPlayerController::CallFunc_IsEditorBuild_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.GetOffSupportPal
// 0x0020 (0x0020 - 0x0000)
struct BP_PalPlayerController_C_GetOffSupportPal final
{
public:
	class APalCharacter*                          CallFunc_GetRiderCharacter_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOffFromPal_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_GetOffSupportPal) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_GetOffSupportPal");
static_assert(sizeof(BP_PalPlayerController_C_GetOffSupportPal) == 0x000020, "Wrong size on BP_PalPlayerController_C_GetOffSupportPal");
static_assert(offsetof(BP_PalPlayerController_C_GetOffSupportPal, CallFunc_GetRiderCharacter_ReturnValue) == 0x000000, "Member 'BP_PalPlayerController_C_GetOffSupportPal::CallFunc_GetRiderCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_GetOffSupportPal, CallFunc_GetOffFromPal_ReturnValue) == 0x000008, "Member 'BP_PalPlayerController_C_GetOffSupportPal::CallFunc_GetOffFromPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_GetOffSupportPal, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'BP_PalPlayerController_C_GetOffSupportPal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_GetOffSupportPal, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000010, "Member 'BP_PalPlayerController_C_GetOffSupportPal::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_GetOffSupportPal, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'BP_PalPlayerController_C_GetOffSupportPal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.GetSpectator
// 0x0020 (0x0020 - 0x0000)
struct BP_PalPlayerController_C_GetSpectator final
{
public:
	bool                                          bSpectatorMode;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_GetSpectator) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_GetSpectator");
static_assert(sizeof(BP_PalPlayerController_C_GetSpectator) == 0x000020, "Wrong size on BP_PalPlayerController_C_GetSpectator");
static_assert(offsetof(BP_PalPlayerController_C_GetSpectator, bSpectatorMode) == 0x000000, "Member 'BP_PalPlayerController_C_GetSpectator::bSpectatorMode' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_GetSpectator, CallFunc_K2_GetPawn_ReturnValue) == 0x000008, "Member 'BP_PalPlayerController_C_GetSpectator::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_GetSpectator, K2Node_DynamicCast_AsPal_Player_Character) == 0x000010, "Member 'BP_PalPlayerController_C_GetSpectator::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_GetSpectator, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PalPlayerController_C_GetSpectator::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.GetTimerGaugeWidgetClass
// 0x0008 (0x0008 - 0x0000)
struct BP_PalPlayerController_C_GetTimerGaugeWidgetClass final
{
public:
	TSubclassOf<class UPalUserWidgetTimerGaugeBase> ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_GetTimerGaugeWidgetClass) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_GetTimerGaugeWidgetClass");
static_assert(sizeof(BP_PalPlayerController_C_GetTimerGaugeWidgetClass) == 0x000008, "Wrong size on BP_PalPlayerController_C_GetTimerGaugeWidgetClass");
static_assert(offsetof(BP_PalPlayerController_C_GetTimerGaugeWidgetClass, ReturnValue) == 0x000000, "Member 'BP_PalPlayerController_C_GetTimerGaugeWidgetClass::ReturnValue' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.IncrementSelectOtomo_Internal
// 0x0010 (0x0010 - 0x0000)
struct BP_PalPlayerController_C_IncrementSelectOtomo_Internal final
{
public:
	int32                                         BeforeIncrementID;                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue_1;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_IncrementSelectOtomo_Internal) == 0x000004, "Wrong alignment on BP_PalPlayerController_C_IncrementSelectOtomo_Internal");
static_assert(sizeof(BP_PalPlayerController_C_IncrementSelectOtomo_Internal) == 0x000010, "Wrong size on BP_PalPlayerController_C_IncrementSelectOtomo_Internal");
static_assert(offsetof(BP_PalPlayerController_C_IncrementSelectOtomo_Internal, BeforeIncrementID) == 0x000000, "Member 'BP_PalPlayerController_C_IncrementSelectOtomo_Internal::BeforeIncrementID' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_IncrementSelectOtomo_Internal, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x000004, "Member 'BP_PalPlayerController_C_IncrementSelectOtomo_Internal::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_IncrementSelectOtomo_Internal, CallFunc_GetSelectedOtomoID_ReturnValue_1) == 0x000008, "Member 'BP_PalPlayerController_C_IncrementSelectOtomo_Internal::CallFunc_GetSelectedOtomoID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_IncrementSelectOtomo_Internal, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00000C, "Member 'BP_PalPlayerController_C_IncrementSelectOtomo_Internal::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_End_K2Node_InputKeyEvent_5
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_InpActEvt_End_K2Node_InputKeyEvent_5 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_InpActEvt_End_K2Node_InputKeyEvent_5) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_InpActEvt_End_K2Node_InputKeyEvent_5");
static_assert(sizeof(BP_PalPlayerController_C_InpActEvt_End_K2Node_InputKeyEvent_5) == 0x000018, "Wrong size on BP_PalPlayerController_C_InpActEvt_End_K2Node_InputKeyEvent_5");
static_assert(offsetof(BP_PalPlayerController_C_InpActEvt_End_K2Node_InputKeyEvent_5, Key) == 0x000000, "Member 'BP_PalPlayerController_C_InpActEvt_End_K2Node_InputKeyEvent_5::Key' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_Left_K2Node_InputKeyEvent_4
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_InpActEvt_Left_K2Node_InputKeyEvent_4 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_InpActEvt_Left_K2Node_InputKeyEvent_4) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_InpActEvt_Left_K2Node_InputKeyEvent_4");
static_assert(sizeof(BP_PalPlayerController_C_InpActEvt_Left_K2Node_InputKeyEvent_4) == 0x000018, "Wrong size on BP_PalPlayerController_C_InpActEvt_Left_K2Node_InputKeyEvent_4");
static_assert(offsetof(BP_PalPlayerController_C_InpActEvt_Left_K2Node_InputKeyEvent_4, Key) == 0x000000, "Member 'BP_PalPlayerController_C_InpActEvt_Left_K2Node_InputKeyEvent_4::Key' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_6
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_6 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_6) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_6");
static_assert(sizeof(BP_PalPlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_6) == 0x000018, "Wrong size on BP_PalPlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_6");
static_assert(offsetof(BP_PalPlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_6, Key) == 0x000000, "Member 'BP_PalPlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_6::Key' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_7
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_7 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_7) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_7");
static_assert(sizeof(BP_PalPlayerController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_7) == 0x000018, "Wrong size on BP_PalPlayerController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_7");
static_assert(offsetof(BP_PalPlayerController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_7, Key) == 0x000000, "Member 'BP_PalPlayerController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_7::Key' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_PageDown_K2Node_InputKeyEvent_1
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_InpActEvt_PageDown_K2Node_InputKeyEvent_1 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_InpActEvt_PageDown_K2Node_InputKeyEvent_1) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_InpActEvt_PageDown_K2Node_InputKeyEvent_1");
static_assert(sizeof(BP_PalPlayerController_C_InpActEvt_PageDown_K2Node_InputKeyEvent_1) == 0x000018, "Wrong size on BP_PalPlayerController_C_InpActEvt_PageDown_K2Node_InputKeyEvent_1");
static_assert(offsetof(BP_PalPlayerController_C_InpActEvt_PageDown_K2Node_InputKeyEvent_1, Key) == 0x000000, "Member 'BP_PalPlayerController_C_InpActEvt_PageDown_K2Node_InputKeyEvent_1::Key' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_PageUp_K2Node_InputKeyEvent_2
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_InpActEvt_PageUp_K2Node_InputKeyEvent_2 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_InpActEvt_PageUp_K2Node_InputKeyEvent_2) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_InpActEvt_PageUp_K2Node_InputKeyEvent_2");
static_assert(sizeof(BP_PalPlayerController_C_InpActEvt_PageUp_K2Node_InputKeyEvent_2) == 0x000018, "Wrong size on BP_PalPlayerController_C_InpActEvt_PageUp_K2Node_InputKeyEvent_2");
static_assert(offsetof(BP_PalPlayerController_C_InpActEvt_PageUp_K2Node_InputKeyEvent_2, Key) == 0x000000, "Member 'BP_PalPlayerController_C_InpActEvt_PageUp_K2Node_InputKeyEvent_2::Key' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_Right_K2Node_InputKeyEvent_3
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_InpActEvt_Right_K2Node_InputKeyEvent_3 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_InpActEvt_Right_K2Node_InputKeyEvent_3) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_InpActEvt_Right_K2Node_InputKeyEvent_3");
static_assert(sizeof(BP_PalPlayerController_C_InpActEvt_Right_K2Node_InputKeyEvent_3) == 0x000018, "Wrong size on BP_PalPlayerController_C_InpActEvt_Right_K2Node_InputKeyEvent_3");
static_assert(offsetof(BP_PalPlayerController_C_InpActEvt_Right_K2Node_InputKeyEvent_3, Key) == 0x000000, "Member 'BP_PalPlayerController_C_InpActEvt_Right_K2Node_InputKeyEvent_3::Key' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_9
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_9 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_9) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_9");
static_assert(sizeof(BP_PalPlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_9) == 0x000018, "Wrong size on BP_PalPlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_9");
static_assert(offsetof(BP_PalPlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_9, Key) == 0x000000, "Member 'BP_PalPlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_9::Key' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_RightShift_K2Node_InputKeyEvent_8
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_InpActEvt_RightShift_K2Node_InputKeyEvent_8 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_InpActEvt_RightShift_K2Node_InputKeyEvent_8) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_InpActEvt_RightShift_K2Node_InputKeyEvent_8");
static_assert(sizeof(BP_PalPlayerController_C_InpActEvt_RightShift_K2Node_InputKeyEvent_8) == 0x000018, "Wrong size on BP_PalPlayerController_C_InpActEvt_RightShift_K2Node_InputKeyEvent_8");
static_assert(offsetof(BP_PalPlayerController_C_InpActEvt_RightShift_K2Node_InputKeyEvent_8, Key) == 0x000000, "Member 'BP_PalPlayerController_C_InpActEvt_RightShift_K2Node_InputKeyEvent_8::Key' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.InpActEvt_Up_K2Node_InputKeyEvent_0
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_InpActEvt_Up_K2Node_InputKeyEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_InpActEvt_Up_K2Node_InputKeyEvent_0) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_InpActEvt_Up_K2Node_InputKeyEvent_0");
static_assert(sizeof(BP_PalPlayerController_C_InpActEvt_Up_K2Node_InputKeyEvent_0) == 0x000018, "Wrong size on BP_PalPlayerController_C_InpActEvt_Up_K2Node_InputKeyEvent_0");
static_assert(offsetof(BP_PalPlayerController_C_InpActEvt_Up_K2Node_InputKeyEvent_0, Key) == 0x000000, "Member 'BP_PalPlayerController_C_InpActEvt_Up_K2Node_InputKeyEvent_0::Key' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.LoadAndSpawnEffect
// 0x0090 (0x0090 - 0x0000)
struct BP_PalPlayerController_C_LoadAndSpawnEffect final
{
public:
	TSoftObjectPtr<class UNiagaraSystem>          EffectPath;                                        // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FTransform                             SpawnTransform;                                    // 0x0030(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_LoadAndSpawnEffect) == 0x000010, "Wrong alignment on BP_PalPlayerController_C_LoadAndSpawnEffect");
static_assert(sizeof(BP_PalPlayerController_C_LoadAndSpawnEffect) == 0x000090, "Wrong size on BP_PalPlayerController_C_LoadAndSpawnEffect");
static_assert(offsetof(BP_PalPlayerController_C_LoadAndSpawnEffect, EffectPath) == 0x000000, "Member 'BP_PalPlayerController_C_LoadAndSpawnEffect::EffectPath' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_LoadAndSpawnEffect, SpawnTransform) == 0x000030, "Member 'BP_PalPlayerController_C_LoadAndSpawnEffect::SpawnTransform' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.NotifyChangeTargetPlayerForClient
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient final
{
public:
	class FString                                 TargetPlayerName;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         MaxPlayer;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectPlayer;                                      // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient");
static_assert(sizeof(BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient) == 0x000018, "Wrong size on BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient");
static_assert(offsetof(BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient, TargetPlayerName) == 0x000000, "Member 'BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient::TargetPlayerName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient, MaxPlayer) == 0x000010, "Member 'BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient::MaxPlayer' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient, SelectPlayer) == 0x000014, "Member 'BP_PalPlayerController_C_NotifyChangeTargetPlayerForClient::SelectPlayer' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.OnCompleteSpawnSupportPal
// 0x0058 (0x0058 - 0x0000)
struct BP_PalPlayerController_C_OnCompleteSpawnSupportPal final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualHandle_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_OnCompleteSpawnSupportPal) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_OnCompleteSpawnSupportPal");
static_assert(sizeof(BP_PalPlayerController_C_OnCompleteSpawnSupportPal) == 0x000058, "Wrong size on BP_PalPlayerController_C_OnCompleteSpawnSupportPal");
static_assert(offsetof(BP_PalPlayerController_C_OnCompleteSpawnSupportPal, ID) == 0x000000, "Member 'BP_PalPlayerController_C_OnCompleteSpawnSupportPal::ID' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnCompleteSpawnSupportPal, CallFunc_K2_GetPawn_ReturnValue) == 0x000030, "Member 'BP_PalPlayerController_C_OnCompleteSpawnSupportPal::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnCompleteSpawnSupportPal, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000038, "Member 'BP_PalPlayerController_C_OnCompleteSpawnSupportPal::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnCompleteSpawnSupportPal, CallFunc_GetCharacterManager_ReturnValue) == 0x000040, "Member 'BP_PalPlayerController_C_OnCompleteSpawnSupportPal::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnCompleteSpawnSupportPal, CallFunc_GetIndividualHandle_ReturnValue) == 0x000048, "Member 'BP_PalPlayerController_C_OnCompleteSpawnSupportPal::CallFunc_GetIndividualHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnCompleteSpawnSupportPal, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_PalPlayerController_C_OnCompleteSpawnSupportPal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.OnDamagePlayerToPlayer
// 0x00C8 (0x00C8 - 0x0000)
struct BP_PalPlayerController_C_OnDamagePlayerToPlayer final
{
public:
	struct FPalDamageResult                       DamageResult;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetSpawnedOtomo_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBattleMode_ReturnValue;                // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterAIController_Otomo_C*        K2Node_DynamicCast_AsBP_Monster_AIController_Otomo; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue_1;           // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_OnDamagePlayerToPlayer) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_OnDamagePlayerToPlayer");
static_assert(sizeof(BP_PalPlayerController_C_OnDamagePlayerToPlayer) == 0x0000C8, "Wrong size on BP_PalPlayerController_C_OnDamagePlayerToPlayer");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, DamageResult) == 0x000000, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::DamageResult' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_K2_GetPawn_ReturnValue) == 0x000050, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, K2Node_DynamicCast_AsPal_Player_Character) == 0x000058, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_GetController_ReturnValue) == 0x000068, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_GetComponentByClass_ReturnValue) == 0x000078, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_TryGetSpawnedOtomo_ReturnValue) == 0x000080, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_TryGetSpawnedOtomo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_IsServer_ReturnValue) == 0x000088, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_IsValid_ReturnValue_1) == 0x000089, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_IsValid_ReturnValue_2) == 0x00008A, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_GetBattleMode_ReturnValue) == 0x00008B, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_GetBattleMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_GetController_ReturnValue_1) == 0x000090, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, K2Node_DynamicCast_AsBP_Monster_AIController_Otomo) == 0x000098, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::K2Node_DynamicCast_AsBP_Monster_AIController_Otomo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_K2_GetPawn_ReturnValue_1) == 0x0000A8, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_GetBattleManager_ReturnValue) == 0x0000B0, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_K2_GetPawn_ReturnValue_2) == 0x0000B8, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnDamagePlayerToPlayer, CallFunc_GetBattleManager_ReturnValue_1) == 0x0000C0, "Member 'BP_PalPlayerController_C_OnDamagePlayerToPlayer::CallFunc_GetBattleManager_ReturnValue_1' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.OnLoaded_A1A0202B475755BD73ED5998057E907E
// 0x0008 (0x0008 - 0x0000)
struct BP_PalPlayerController_C_OnLoaded_A1A0202B475755BD73ED5998057E907E final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_OnLoaded_A1A0202B475755BD73ED5998057E907E) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_OnLoaded_A1A0202B475755BD73ED5998057E907E");
static_assert(sizeof(BP_PalPlayerController_C_OnLoaded_A1A0202B475755BD73ED5998057E907E) == 0x000008, "Wrong size on BP_PalPlayerController_C_OnLoaded_A1A0202B475755BD73ED5998057E907E");
static_assert(offsetof(BP_PalPlayerController_C_OnLoaded_A1A0202B475755BD73ED5998057E907E, Loaded) == 0x000000, "Member 'BP_PalPlayerController_C_OnLoaded_A1A0202B475755BD73ED5998057E907E::Loaded' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.OnLoaded_A49E2184416F26810394CD8D2FEDE763
// 0x0008 (0x0008 - 0x0000)
struct BP_PalPlayerController_C_OnLoaded_A49E2184416F26810394CD8D2FEDE763 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_OnLoaded_A49E2184416F26810394CD8D2FEDE763) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_OnLoaded_A49E2184416F26810394CD8D2FEDE763");
static_assert(sizeof(BP_PalPlayerController_C_OnLoaded_A49E2184416F26810394CD8D2FEDE763) == 0x000008, "Wrong size on BP_PalPlayerController_C_OnLoaded_A49E2184416F26810394CD8D2FEDE763");
static_assert(offsetof(BP_PalPlayerController_C_OnLoaded_A49E2184416F26810394CD8D2FEDE763, Loaded) == 0x000000, "Member 'BP_PalPlayerController_C_OnLoaded_A49E2184416F26810394CD8D2FEDE763::Loaded' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.OnRep_SpectatorSpeedRate
// 0x0088 (0x0088 - 0x0000)
struct BP_PalPlayerController_C_OnRep_SpectatorSpeedRate final
{
public:
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0000(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0060(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_OnRep_SpectatorSpeedRate) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_OnRep_SpectatorSpeedRate");
static_assert(sizeof(BP_PalPlayerController_C_OnRep_SpectatorSpeedRate) == 0x000088, "Wrong size on BP_PalPlayerController_C_OnRep_SpectatorSpeedRate");
static_assert(offsetof(BP_PalPlayerController_C_OnRep_SpectatorSpeedRate, K2Node_MakeStruct_FormatArgumentData) == 0x000000, "Member 'BP_PalPlayerController_C_OnRep_SpectatorSpeedRate::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnRep_SpectatorSpeedRate, K2Node_MakeArray_Array) == 0x000050, "Member 'BP_PalPlayerController_C_OnRep_SpectatorSpeedRate::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnRep_SpectatorSpeedRate, CallFunc_Format_ReturnValue) == 0x000060, "Member 'BP_PalPlayerController_C_OnRep_SpectatorSpeedRate::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_OnRep_SpectatorSpeedRate, CallFunc_Conv_TextToString_ReturnValue) == 0x000078, "Member 'BP_PalPlayerController_C_OnRep_SpectatorSpeedRate::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.PlayStepAction
// 0x0180 (0x0180 - 0x0000)
struct BP_PalPlayerController_C_PlayStepAction final
{
public:
	EPalStepAxisType                              Axis;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Direction;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                StepActionType;                                    // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetLowBodyPalCharacter_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetLowBodyPalCharacter_ReturnValue_1;     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68[0x8];                                       // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0070(0x00E0)()
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UPalActionBase>             CallFunc_Map_Find_Value;                           // 0x0160(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_Vector2DFloat_B_ImplicitCast;    // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_PlayStepAction) == 0x000010, "Wrong alignment on BP_PalPlayerController_C_PlayStepAction");
static_assert(sizeof(BP_PalPlayerController_C_PlayStepAction) == 0x000180, "Wrong size on BP_PalPlayerController_C_PlayStepAction");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, Axis) == 0x000000, "Member 'BP_PalPlayerController_C_PlayStepAction::Axis' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, Direction) == 0x000008, "Member 'BP_PalPlayerController_C_PlayStepAction::Direction' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, StepActionType) == 0x000018, "Member 'BP_PalPlayerController_C_PlayStepAction::StepActionType' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, CallFunc_GetLowBodyPalCharacter_ReturnValue) == 0x000020, "Member 'BP_PalPlayerController_C_PlayStepAction::CallFunc_GetLowBodyPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'BP_PalPlayerController_C_PlayStepAction::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_PalPlayerController_C_PlayStepAction::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000038, "Member 'BP_PalPlayerController_C_PlayStepAction::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x000048, "Member 'BP_PalPlayerController_C_PlayStepAction::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, CallFunc_GetLowBodyPalCharacter_ReturnValue_1) == 0x000060, "Member 'BP_PalPlayerController_C_PlayStepAction::CallFunc_GetLowBodyPalCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, K2Node_MakeStruct_ActionDynamicParameter) == 0x000070, "Member 'BP_PalPlayerController_C_PlayStepAction::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000150, "Member 'BP_PalPlayerController_C_PlayStepAction::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, CallFunc_IsValid_ReturnValue) == 0x000158, "Member 'BP_PalPlayerController_C_PlayStepAction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, CallFunc_Map_Find_Value) == 0x000160, "Member 'BP_PalPlayerController_C_PlayStepAction::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, CallFunc_Map_Find_ReturnValue) == 0x000168, "Member 'BP_PalPlayerController_C_PlayStepAction::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, CallFunc_PlayActionParameter_ReturnValue) == 0x000170, "Member 'BP_PalPlayerController_C_PlayStepAction::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_PlayStepAction, CallFunc_Multiply_Vector2DFloat_B_ImplicitCast) == 0x000178, "Member 'BP_PalPlayerController_C_PlayStepAction::CallFunc_Multiply_Vector2DFloat_B_ImplicitCast' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PalPlayerController_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PalPlayerController_C_ReceiveEndPlay");
static_assert(sizeof(BP_PalPlayerController_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PalPlayerController_C_ReceiveEndPlay");
static_assert(offsetof(BP_PalPlayerController_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PalPlayerController_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_PalPlayerController_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_ReceivePossess");
static_assert(sizeof(BP_PalPlayerController_C_ReceivePossess) == 0x000008, "Wrong size on BP_PalPlayerController_C_ReceivePossess");
static_assert(offsetof(BP_PalPlayerController_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_PalPlayerController_C_ReceivePossess::PossessedPawn' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalPlayerController_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalPlayerController_C_ReceiveTick");
static_assert(sizeof(BP_PalPlayerController_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalPlayerController_C_ReceiveTick");
static_assert(offsetof(BP_PalPlayerController_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalPlayerController_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.RequestCaptureCagePal_ToServer
// 0x0008 (0x0008 - 0x0000)
struct BP_PalPlayerController_C_RequestCaptureCagePal_ToServer final
{
public:
	class ABP_PalCapturedCage_C*                  Cage;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_RequestCaptureCagePal_ToServer) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_RequestCaptureCagePal_ToServer");
static_assert(sizeof(BP_PalPlayerController_C_RequestCaptureCagePal_ToServer) == 0x000008, "Wrong size on BP_PalPlayerController_C_RequestCaptureCagePal_ToServer");
static_assert(offsetof(BP_PalPlayerController_C_RequestCaptureCagePal_ToServer, Cage) == 0x000000, "Member 'BP_PalPlayerController_C_RequestCaptureCagePal_ToServer::Cage' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.RideSupportPal
// 0x0230 (0x0230 - 0x0000)
struct BP_PalPlayerController_C_RideSupportPal final
{
public:
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RideTo_ReturnValue;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00C0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalShooterSpringArmComponent*          CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0140(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_RideSupportPal) == 0x000010, "Wrong alignment on BP_PalPlayerController_C_RideSupportPal");
static_assert(sizeof(BP_PalPlayerController_C_RideSupportPal) == 0x000230, "Wrong size on BP_PalPlayerController_C_RideSupportPal");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_K2_GetPawn_ReturnValue) == 0x000000, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000008, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_K2_GetPawn_ReturnValue_2) == 0x000088, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000090, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_IsValid_ReturnValue_1) == 0x000098, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000A0, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_RideTo_ReturnValue) == 0x0000B8, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_RideTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_MakeTransform_ReturnValue) == 0x0000C0, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000120, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000128, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_IsValid_ReturnValue_2) == 0x000130, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_AdjustActorToFloor_ReturnValue) == 0x000138, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000140, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000228, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_RideSupportPal, CallFunc_IsValid_ReturnValue_3) == 0x000229, "Member 'BP_PalPlayerController_C_RideSupportPal::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.SetOtomoSlot
// 0x0004 (0x0004 - 0x0000)
struct BP_PalPlayerController_C_SetOtomoSlot final
{
public:
	int32                                         SlotID;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_SetOtomoSlot) == 0x000004, "Wrong alignment on BP_PalPlayerController_C_SetOtomoSlot");
static_assert(sizeof(BP_PalPlayerController_C_SetOtomoSlot) == 0x000004, "Wrong size on BP_PalPlayerController_C_SetOtomoSlot");
static_assert(offsetof(BP_PalPlayerController_C_SetOtomoSlot, SlotID) == 0x000000, "Member 'BP_PalPlayerController_C_SetOtomoSlot::SlotID' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.SetSlotID_ToServer
// 0x0004 (0x0004 - 0x0000)
struct BP_PalPlayerController_C_SetSlotID_ToServer final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_SetSlotID_ToServer) == 0x000004, "Wrong alignment on BP_PalPlayerController_C_SetSlotID_ToServer");
static_assert(sizeof(BP_PalPlayerController_C_SetSlotID_ToServer) == 0x000004, "Wrong size on BP_PalPlayerController_C_SetSlotID_ToServer");
static_assert(offsetof(BP_PalPlayerController_C_SetSlotID_ToServer, ID) == 0x000000, "Member 'BP_PalPlayerController_C_SetSlotID_ToServer::ID' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.SetupDamageReaction
// 0x0008 (0x0008 - 0x0000)
struct BP_PalPlayerController_C_SetupDamageReaction final
{
public:
	class APawn*                                  Pawn_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_SetupDamageReaction) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_SetupDamageReaction");
static_assert(sizeof(BP_PalPlayerController_C_SetupDamageReaction) == 0x000008, "Wrong size on BP_PalPlayerController_C_SetupDamageReaction");
static_assert(offsetof(BP_PalPlayerController_C_SetupDamageReaction, Pawn_0) == 0x000000, "Member 'BP_PalPlayerController_C_SetupDamageReaction::Pawn_0' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.SetupSupportPal
// 0x0038 (0x0038 - 0x0000)
struct BP_PalPlayerController_C_SetupSupportPal final
{
public:
	class APawn*                                  PossessPawn;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_SetupSupportPal) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_SetupSupportPal");
static_assert(sizeof(BP_PalPlayerController_C_SetupSupportPal) == 0x000038, "Wrong size on BP_PalPlayerController_C_SetupSupportPal");
static_assert(offsetof(BP_PalPlayerController_C_SetupSupportPal, PossessPawn) == 0x000000, "Member 'BP_PalPlayerController_C_SetupSupportPal::PossessPawn' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_SetupSupportPal, K2Node_DynamicCast_AsPal_Character) == 0x000008, "Member 'BP_PalPlayerController_C_SetupSupportPal::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_SetupSupportPal, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PalPlayerController_C_SetupSupportPal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_SetupSupportPal, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_PalPlayerController_C_SetupSupportPal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_SetupSupportPal, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000018, "Member 'BP_PalPlayerController_C_SetupSupportPal::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_SetupSupportPal, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'BP_PalPlayerController_C_SetupSupportPal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_SetupSupportPal, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_PalPlayerController_C_SetupSupportPal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerController_C_SetupSupportPal, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'BP_PalPlayerController_C_SetupSupportPal::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_PalPlayerController.BP_PalPlayerController_C.Warp Spectator
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerController_C_Warp_Spectator final
{
public:
	struct FVector                                Move;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerController_C_Warp_Spectator) == 0x000008, "Wrong alignment on BP_PalPlayerController_C_Warp_Spectator");
static_assert(sizeof(BP_PalPlayerController_C_Warp_Spectator) == 0x000018, "Wrong size on BP_PalPlayerController_C_Warp_Spectator");
static_assert(offsetof(BP_PalPlayerController_C_Warp_Spectator, Move) == 0x000000, "Member 'BP_PalPlayerController_C_Warp_Spectator::Move' has a wrong offset!");

}

