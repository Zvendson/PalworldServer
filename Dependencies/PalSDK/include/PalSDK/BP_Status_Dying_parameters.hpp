#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Status_Dying.BP_Status_Dying_C.ExecuteUbergraph_BP_Status_Dying
// 0x0230 (0x0230 - 0x0000)
struct BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAliveFriendPlayers_ReturnValue;        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDyingHPZero_ReturnValue;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnable;                       // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalInteractiveObjectSphereComponent*> CallFunc_GetComponentsByTag_ReturnValue;           // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	class AActor*                                 K2Node_CustomEvent_Other_1;                        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            K2Node_CustomEvent_IndicatorType_1;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalInteractiveObjectSphereComponent*   CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Other;                          // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            K2Node_CustomEvent_IndicatorType;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_1;        // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DownWidgetParameter_C*              CallFunc_CreateDispatchParameterForK2Node_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;                   // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriend_ReturnValue;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_5;                   // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0110(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0124(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_6;                   // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_3;        // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_7;                   // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue_4;        // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAction_ReturnValue;                   // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_162[0x6];                                      // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_5;        // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionBase*                         CallFunc_PlayActionByType_ReturnValue;             // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_8;                   // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_6;        // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_DyingFriendLoupe_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue;                         // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalInteractDelegates*                  K2Node_CustomEvent_InteractDelegates_1;            // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInteractDelegates*                  K2Node_CustomEvent_InteractDelegates;              // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalInteractDelegates* InteractDelegates)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x01D0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_9;                   // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_1;       // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x3];                                      // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalInteractDelegates* InteractDelegates)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x01F4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInArenaByCharacter_ReturnValue;         // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_205[0x3];                                      // 0x0205(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SubDyingHP_SubHP_ImplicitCast;            // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21C[0x4];                                      // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CallDelegate_DyingHP_ImplicitCast;          // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CallDelegate_MaxDyingHP_ImplicitCast;       // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying) == 0x000008, "Wrong alignment on BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying");
static_assert(sizeof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying) == 0x000230, "Wrong size on BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, EntryPoint) == 0x000000, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_Event_DeltaTime) == 0x000014, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetOwner_ReturnValue_1) == 0x000018, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_DynamicCast_AsPal_Player_Character) == 0x000020, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_HasAliveFriendPlayers_ReturnValue) == 0x000038, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_HasAliveFriendPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_IsDyingHPZero_ReturnValue) == 0x000039, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_IsDyingHPZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_IsValid_ReturnValue) == 0x00003A, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CustomEvent_IsEnable) == 0x00003B, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CustomEvent_IsEnable' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetOwner_ReturnValue_2) == 0x000040, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetComponentsByTag_ReturnValue) == 0x000048, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CustomEvent_Other_1) == 0x000058, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CustomEvent_Other_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CustomEvent_IndicatorType_1) == 0x000060, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CustomEvent_IndicatorType_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000070, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetOwner_ReturnValue_3) == 0x000078, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetGameSetting_ReturnValue) == 0x000080, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000088, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000098, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CustomEvent_Other) == 0x0000A0, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CustomEvent_Other' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CustomEvent_IndicatorType) == 0x0000A8, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CustomEvent_IndicatorType' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0000B0, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_IsValid_ReturnValue_2) == 0x0000B8, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_CreateDispatchParameterForK2Node_ReturnValue) == 0x0000C0, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_CreateDispatchParameterForK2Node_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetOwner_ReturnValue_4) == 0x0000C8, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetPalmi_ReturnValue) == 0x0000D0, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CreateDelegate_OutputDelegate) == 0x0000D8, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000E8, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000F0, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_IsFriend_ReturnValue) == 0x0000F8, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_IsFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetOwner_ReturnValue_5) == 0x000100, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetOwner_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000108, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CreateDelegate_OutputDelegate_1) == 0x000110, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_IsValid_ReturnValue_3) == 0x000120, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CreateDelegate_OutputDelegate_2) == 0x000124, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetOwner_ReturnValue_6) == 0x000138, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetOwner_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetComponentByClass_ReturnValue_3) == 0x000140, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_HasAuthority_ReturnValue_1) == 0x000148, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetOwner_ReturnValue_7) == 0x000150, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetOwner_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetComponentByClass_ReturnValue_4) == 0x000158, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_PlayAction_ReturnValue) == 0x000160, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_PlayAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_IsValid_ReturnValue_4) == 0x000161, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetComponentByClass_ReturnValue_5) == 0x000168, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetComponentByClass_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_IsValid_ReturnValue_5) == 0x000170, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_PlayActionByType_ReturnValue) == 0x000178, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_PlayActionByType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetOwner_ReturnValue_8) == 0x000180, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetOwner_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetComponentByClass_ReturnValue_6) == 0x000188, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetComponentByClass_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000190, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_SpawnObject_ReturnValue) == 0x000198, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_IsValid_ReturnValue_6) == 0x0001A0, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetHUDService_ReturnValue) == 0x0001A8, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_Push_ReturnValue) == 0x0001B0, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_Push_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CustomEvent_InteractDelegates_1) == 0x0001C0, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CustomEvent_InteractDelegates_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CustomEvent_InteractDelegates) == 0x0001C8, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CustomEvent_InteractDelegates' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001D0, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_GetOwner_ReturnValue_9) == 0x0001E0, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_GetOwner_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_DynamicCast_AsPal_Player_Character_1) == 0x0001E8, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_DynamicCast_AsPal_Player_Character_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_DynamicCast_bSuccess_1) == 0x0001F0, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001F4, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_IsInArenaByCharacter_ReturnValue) == 0x000204, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_IsInArenaByCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000208, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000210, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, CallFunc_SubDyingHP_SubHP_ImplicitCast) == 0x000218, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::CallFunc_SubDyingHP_SubHP_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CallDelegate_DyingHP_ImplicitCast) == 0x000220, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CallDelegate_DyingHP_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying, K2Node_CallDelegate_MaxDyingHP_ImplicitCast) == 0x000228, "Member 'BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying::K2Node_CallDelegate_MaxDyingHP_ImplicitCast' has a wrong offset!");

// Function BP_Status_Dying.BP_Status_Dying_C.FlagControll
// 0x0038 (0x0038 - 0x0000)
struct BP_Status_Dying_C_FlagControll final
{
public:
	bool                                          bIsDisable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Dying_C_FlagControll) == 0x000008, "Wrong alignment on BP_Status_Dying_C_FlagControll");
static_assert(sizeof(BP_Status_Dying_C_FlagControll) == 0x000038, "Wrong size on BP_Status_Dying_C_FlagControll");
static_assert(offsetof(BP_Status_Dying_C_FlagControll, bIsDisable) == 0x000000, "Member 'BP_Status_Dying_C_FlagControll::bIsDisable' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_FlagControll, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Status_Dying_C_FlagControll::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_FlagControll, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Status_Dying_C_FlagControll::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_FlagControll, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_Status_Dying_C_FlagControll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_FlagControll, CallFunc_GetOwner_ReturnValue_1) == 0x000020, "Member 'BP_Status_Dying_C_FlagControll::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_FlagControll, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000028, "Member 'BP_Status_Dying_C_FlagControll::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_FlagControll, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BP_Status_Dying_C_FlagControll::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_Status_Dying.BP_Status_Dying_C.OnDyingInterrupt__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_Status_Dying_C_OnDyingInterrupt__DelegateSignature final
{
public:
	bool                                          IsInterrupting;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Dying_C_OnDyingInterrupt__DelegateSignature) == 0x000001, "Wrong alignment on BP_Status_Dying_C_OnDyingInterrupt__DelegateSignature");
static_assert(sizeof(BP_Status_Dying_C_OnDyingInterrupt__DelegateSignature) == 0x000001, "Wrong size on BP_Status_Dying_C_OnDyingInterrupt__DelegateSignature");
static_assert(offsetof(BP_Status_Dying_C_OnDyingInterrupt__DelegateSignature, IsInterrupting) == 0x000000, "Member 'BP_Status_Dying_C_OnDyingInterrupt__DelegateSignature::IsInterrupting' has a wrong offset!");

// Function BP_Status_Dying.BP_Status_Dying_C.OnEndRescue
// 0x0010 (0x0010 - 0x0000)
struct BP_Status_Dying_C_OnEndRescue final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            IndicatorType;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Dying_C_OnEndRescue) == 0x000008, "Wrong alignment on BP_Status_Dying_C_OnEndRescue");
static_assert(sizeof(BP_Status_Dying_C_OnEndRescue) == 0x000010, "Wrong size on BP_Status_Dying_C_OnEndRescue");
static_assert(offsetof(BP_Status_Dying_C_OnEndRescue, Other) == 0x000000, "Member 'BP_Status_Dying_C_OnEndRescue::Other' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_OnEndRescue, IndicatorType) == 0x000008, "Member 'BP_Status_Dying_C_OnEndRescue::IndicatorType' has a wrong offset!");

// Function BP_Status_Dying.BP_Status_Dying_C.OnStartRescue
// 0x0010 (0x0010 - 0x0000)
struct BP_Status_Dying_C_OnStartRescue final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            IndicatorType;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Dying_C_OnStartRescue) == 0x000008, "Wrong alignment on BP_Status_Dying_C_OnStartRescue");
static_assert(sizeof(BP_Status_Dying_C_OnStartRescue) == 0x000010, "Wrong size on BP_Status_Dying_C_OnStartRescue");
static_assert(offsetof(BP_Status_Dying_C_OnStartRescue, Other) == 0x000000, "Member 'BP_Status_Dying_C_OnStartRescue::Other' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_OnStartRescue, IndicatorType) == 0x000008, "Member 'BP_Status_Dying_C_OnStartRescue::IndicatorType' has a wrong offset!");

// Function BP_Status_Dying.BP_Status_Dying_C.OnUpdateDying__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_Status_Dying_C_OnUpdateDying__DelegateSignature final
{
public:
	double                                        DyingHP;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDyingHP;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Dying_C_OnUpdateDying__DelegateSignature) == 0x000008, "Wrong alignment on BP_Status_Dying_C_OnUpdateDying__DelegateSignature");
static_assert(sizeof(BP_Status_Dying_C_OnUpdateDying__DelegateSignature) == 0x000010, "Wrong size on BP_Status_Dying_C_OnUpdateDying__DelegateSignature");
static_assert(offsetof(BP_Status_Dying_C_OnUpdateDying__DelegateSignature, DyingHP) == 0x000000, "Member 'BP_Status_Dying_C_OnUpdateDying__DelegateSignature::DyingHP' has a wrong offset!");
static_assert(offsetof(BP_Status_Dying_C_OnUpdateDying__DelegateSignature, MaxDyingHP) == 0x000008, "Member 'BP_Status_Dying_C_OnUpdateDying__DelegateSignature::MaxDyingHP' has a wrong offset!");

// Function BP_Status_Dying.BP_Status_Dying_C.SetupInteractTrigger
// 0x0001 (0x0001 - 0x0000)
struct BP_Status_Dying_C_SetupInteractTrigger final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Dying_C_SetupInteractTrigger) == 0x000001, "Wrong alignment on BP_Status_Dying_C_SetupInteractTrigger");
static_assert(sizeof(BP_Status_Dying_C_SetupInteractTrigger) == 0x000001, "Wrong size on BP_Status_Dying_C_SetupInteractTrigger");
static_assert(offsetof(BP_Status_Dying_C_SetupInteractTrigger, IsEnable) == 0x000000, "Member 'BP_Status_Dying_C_SetupInteractTrigger::IsEnable' has a wrong offset!");

// Function BP_Status_Dying.BP_Status_Dying_C.StartBindInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_Status_Dying_C_StartBindInteract final
{
public:
	class UPalInteractDelegates*                  InteractDelegates;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Dying_C_StartBindInteract) == 0x000008, "Wrong alignment on BP_Status_Dying_C_StartBindInteract");
static_assert(sizeof(BP_Status_Dying_C_StartBindInteract) == 0x000008, "Wrong size on BP_Status_Dying_C_StartBindInteract");
static_assert(offsetof(BP_Status_Dying_C_StartBindInteract, InteractDelegates) == 0x000000, "Member 'BP_Status_Dying_C_StartBindInteract::InteractDelegates' has a wrong offset!");

// Function BP_Status_Dying.BP_Status_Dying_C.StartUnBindInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_Status_Dying_C_StartUnBindInteract final
{
public:
	class UPalInteractDelegates*                  InteractDelegates;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Dying_C_StartUnBindInteract) == 0x000008, "Wrong alignment on BP_Status_Dying_C_StartUnBindInteract");
static_assert(sizeof(BP_Status_Dying_C_StartUnBindInteract) == 0x000008, "Wrong size on BP_Status_Dying_C_StartUnBindInteract");
static_assert(offsetof(BP_Status_Dying_C_StartUnBindInteract, InteractDelegates) == 0x000000, "Member 'BP_Status_Dying_C_StartUnBindInteract::InteractDelegates' has a wrong offset!");

// Function BP_Status_Dying.BP_Status_Dying_C.TickStatus
// 0x0004 (0x0004 - 0x0000)
struct BP_Status_Dying_C_TickStatus final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Dying_C_TickStatus) == 0x000004, "Wrong alignment on BP_Status_Dying_C_TickStatus");
static_assert(sizeof(BP_Status_Dying_C_TickStatus) == 0x000004, "Wrong size on BP_Status_Dying_C_TickStatus");
static_assert(offsetof(BP_Status_Dying_C_TickStatus, DeltaTime) == 0x000000, "Member 'BP_Status_Dying_C_TickStatus::DeltaTime' has a wrong offset!");

}

