#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "F_NPC_PathWalkArray_structs.hpp"


namespace PalSDK::Params
{

// Function BP_NPCAIController.BP_NPCAIController_C.ExecuteUbergraph_BP_NPCAIController
// 0x05C8 (0x05C8 - 0x0000)
struct BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalIncidentNotifyListener_NPCTalk_C* CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AController* HolderController, class APalCharacter* OtomoPal)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_MakeStruct_Guid;                            // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                         K2Node_CustomEvent_ID;                             // 0x0050(0x0030)(HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue_1;        // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualHandle_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddOtomoHandleToFreeSlot_ReturnValue;     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SynchronizedGroup_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x2];                                       // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_CustomEvent_HolderController;               // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_CustomEvent_OtomoPal;                       // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetInitializedCharacterSaveParemter_NPCOtomo_outParameter; // 0x00E8(0x02A8)()
	bool                                          CallFunc_GetInitializedCharacterSaveParemter_NPCOtomo_ReturnValue; // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MonsterBase_C*                      K2Node_DynamicCast_AsBP_Monster_Base;              // 0x0398(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B9[0x7];                                      // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalInstanceID                         CallFunc_GetIndividualID_ReturnValue;              // 0x03C0(0x0030)(HasGetValueTypeHash)
	class UPalSquad*                              CallFunc_GetSquad_ReturnValue;                     // 0x03F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9[0x3];                                      // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x03FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0400(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x0408(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_3;        // 0x0410(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_SpawnObject_ReturnValue_1;                // 0x0418(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_3;                 // 0x0420(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle;             // 0x0428(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEndInitialize_ReturnValue;              // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_431[0x7];                                      // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_4;                 // 0x0438(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0440(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_4;        // 0x0448(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_5;                 // 0x0450(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue_5;        // 0x0460(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalWeaponType                                CallFunc_GetWeaponType_ReturnValue;                // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0469(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46A[0x6];                                      // 0x046A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDeadInfo                           K2Node_CustomEvent_DeadInfo;                       // 0x0470(0x0050)(NoDestructor)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_6;                 // 0x04C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSquad*                              CallFunc_GetSquad_ReturnValue_1;                   // 0x04C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsSquadBehaviour_ReturnValue;          // 0x04D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x04D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x04D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsSquadBehaviour_ReturnValue_1;        // 0x04D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D5[0x3];                                      // 0x04D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSquad*                              CallFunc_GetSquad_ReturnValue_2;                   // 0x04D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* StartActor)>     K2Node_CreateDelegate_OutputDelegate_3;            // 0x04E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x04F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F2[0x6];                                      // 0x04F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetMyBB_PalBrackboard;                    // 0x04F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x0500(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_7;                 // 0x0508(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0510(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIncidentNotifyListener* Listener, EPalIncidentState IncidentState, struct FPalIncidentNotifyParameter& Parameter)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0520(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_CreateIndividual_ReturnValue;             // 0x0530(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentNotifyListener*             K2Node_CustomEvent_Listener;                       // 0x0538(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalIncidentState                             K2Node_CustomEvent_IncidentState;                  // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_541[0x7];                                      // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalIncidentNotifyParameter            K2Node_CustomEvent_Parameter;                      // 0x0548(0x0028)(ConstParm, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_571[0x7];                                      // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIncidentDynamicParameter*           CallFunc_GetDynamicParameter_ReturnValue;          // 0x0578(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_581[0x7];                                      // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_8;                 // 0x0588(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSquad*                              CallFunc_GetSquad_ReturnValue_3;                   // 0x0590(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSquad*                              CallFunc_GetSquad_ReturnValue_4;                   // 0x0598(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* StartActor, class AActor* TargetActor)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x05A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B1[0x7];                                      // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_Event_TalkPlayer_1;                         // 0x05B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_Event_TalkPlayer;                           // 0x05C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController) == 0x000008, "Wrong alignment on BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController");
static_assert(sizeof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController) == 0x0005C8, "Wrong size on BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, EntryPoint) == 0x000000, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_MakeStruct_Guid) == 0x000034, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_MakeStruct_Guid' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetCharacterManager_ReturnValue) == 0x000048, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CustomEvent_ID) == 0x000050, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CustomEvent_ID' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetCharacterManager_ReturnValue_1) == 0x000080, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetCharacterManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetIndividualHandle_ReturnValue) == 0x000088, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetIndividualHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_K2_GetPawn_ReturnValue) == 0x000090, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_AddOtomoHandleToFreeSlot_ReturnValue) == 0x000098, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_AddOtomoHandleToFreeSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetComponentByClass_ReturnValue) == 0x0000A0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_NotEqual_NameName_ReturnValue) == 0x0000A8, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_SynchronizedGroup_ReturnValue) == 0x0000A9, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_SynchronizedGroup_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000AC, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_K2_GetPawn_ReturnValue_1) == 0x0000C0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0000C8, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetLevel_ReturnValue) == 0x0000D0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CustomEvent_HolderController) == 0x0000D8, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CustomEvent_HolderController' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CustomEvent_OtomoPal) == 0x0000E0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CustomEvent_OtomoPal' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetInitializedCharacterSaveParemter_NPCOtomo_outParameter) == 0x0000E8, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetInitializedCharacterSaveParemter_NPCOtomo_outParameter' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetInitializedCharacterSaveParemter_NPCOtomo_ReturnValue) == 0x000390, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetInitializedCharacterSaveParemter_NPCOtomo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_DynamicCast_AsBP_Monster_Base) == 0x000398, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_DynamicCast_AsBP_Monster_Base' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_DynamicCast_bSuccess) == 0x0003A0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetComponentByClass_ReturnValue_2) == 0x0003A8, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_DynamicCast_AsPal_AIController) == 0x0003B0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_DynamicCast_bSuccess_1) == 0x0003B8, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetIndividualID_ReturnValue) == 0x0003C0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetIndividualID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetSquad_ReturnValue) == 0x0003F0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetSquad_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_HasAuthority_ReturnValue_1) == 0x0003F8, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_Event_DeltaSeconds) == 0x0003FC, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_Event_PossessedPawn) == 0x000400, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_K2_GetPawn_ReturnValue_2) == 0x000408, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetComponentByClass_ReturnValue_3) == 0x000410, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_SpawnObject_ReturnValue_1) == 0x000418, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_K2_GetPawn_ReturnValue_3) == 0x000420, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_K2_GetPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetWeaponHandle_WeaponHandle) == 0x000428, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetWeaponHandle_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_IsEndInitialize_ReturnValue) == 0x000430, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_IsEndInitialize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_K2_GetPawn_ReturnValue_4) == 0x000438, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_K2_GetPawn_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000440, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetComponentByClass_ReturnValue_4) == 0x000448, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_K2_GetPawn_ReturnValue_5) == 0x000450, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_K2_GetPawn_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetCharacterID_ReturnValue) == 0x000458, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetComponentByClass_ReturnValue_5) == 0x000460, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetComponentByClass_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetWeaponType_ReturnValue) == 0x000468, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetWeaponType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000469, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CustomEvent_DeadInfo) == 0x000470, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CustomEvent_DeadInfo' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_K2_GetPawn_ReturnValue_6) == 0x0004C0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_K2_GetPawn_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetSquad_ReturnValue_1) == 0x0004C8, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetSquad_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_IsValid_ReturnValue) == 0x0004D0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetIsSquadBehaviour_ReturnValue) == 0x0004D1, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetIsSquadBehaviour_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_Event_EndPlayReason) == 0x0004D2, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_BooleanAND_ReturnValue) == 0x0004D3, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetIsSquadBehaviour_ReturnValue_1) == 0x0004D4, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetIsSquadBehaviour_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetSquad_ReturnValue_2) == 0x0004D8, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetSquad_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CreateDelegate_OutputDelegate_3) == 0x0004E0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_IsValid_ReturnValue_1) == 0x0004F0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_BooleanAND_ReturnValue_1) == 0x0004F1, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetMyBB_PalBrackboard) == 0x0004F8, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetMyBB_PalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetBattleManager_ReturnValue) == 0x000500, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_K2_GetPawn_ReturnValue_7) == 0x000508, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_K2_GetPawn_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CreateDelegate_OutputDelegate_4) == 0x000510, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CreateDelegate_OutputDelegate_5) == 0x000520, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_CreateIndividual_ReturnValue) == 0x000530, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_CreateIndividual_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CustomEvent_Listener) == 0x000538, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CustomEvent_Listener' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CustomEvent_IncidentState) == 0x000540, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CustomEvent_IncidentState' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CustomEvent_Parameter) == 0x000548, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CustomEvent_Parameter' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_SwitchEnum_CmpSuccess) == 0x000570, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetDynamicParameter_ReturnValue) == 0x000578, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetDynamicParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_IsValid_ReturnValue_2) == 0x000580, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_K2_GetPawn_ReturnValue_8) == 0x000588, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_K2_GetPawn_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetSquad_ReturnValue_3) == 0x000590, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetSquad_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_GetSquad_ReturnValue_4) == 0x000598, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_GetSquad_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_CreateDelegate_OutputDelegate_6) == 0x0005A0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, CallFunc_IsDedicatedServer_ReturnValue) == 0x0005B0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_Event_TalkPlayer_1) == 0x0005B8, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_Event_TalkPlayer_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController, K2Node_Event_TalkPlayer) == 0x0005C0, "Member 'BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController::K2Node_Event_TalkPlayer' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.ForceBattleStartForOutside
// 0x0080 (0x0080 - 0x0000)
struct BP_NPCAIController_C_ForceBattleStartForOutside final
{
public:
	class AActor*                                 StartActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSleeping_IsSleep;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_CopyTargetFromOtherAI_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0020(0x0050)(NoDestructor)
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_ForceBattleStartForOutside) == 0x000008, "Wrong alignment on BP_NPCAIController_C_ForceBattleStartForOutside");
static_assert(sizeof(BP_NPCAIController_C_ForceBattleStartForOutside) == 0x000080, "Wrong size on BP_NPCAIController_C_ForceBattleStartForOutside");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartForOutside, StartActor) == 0x000000, "Member 'BP_NPCAIController_C_ForceBattleStartForOutside::StartActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartForOutside, CallFunc_IsSleeping_IsSleep) == 0x000008, "Member 'BP_NPCAIController_C_ForceBattleStartForOutside::CallFunc_IsSleeping_IsSleep' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartForOutside, CallFunc_CopyTargetFromOtherAI_ReturnValue) == 0x000010, "Member 'BP_NPCAIController_C_ForceBattleStartForOutside::CallFunc_CopyTargetFromOtherAI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartForOutside, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_NPCAIController_C_ForceBattleStartForOutside::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartForOutside, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000020, "Member 'BP_NPCAIController_C_ForceBattleStartForOutside::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartForOutside, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_NPCAIController_C_ForceBattleStartForOutside::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartForOutside, CallFunc_SetActionClassParameter_ReturnValue) == 0x000078, "Member 'BP_NPCAIController_C_ForceBattleStartForOutside::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.ForceBattleStartToTarget
// 0x0080 (0x0080 - 0x0000)
struct BP_NPCAIController_C_ForceBattleStartToTarget final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0008(0x0050)(NoDestructor)
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_ForceBattleStartToTarget) == 0x000008, "Wrong alignment on BP_NPCAIController_C_ForceBattleStartToTarget");
static_assert(sizeof(BP_NPCAIController_C_ForceBattleStartToTarget) == 0x000080, "Wrong size on BP_NPCAIController_C_ForceBattleStartToTarget");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartToTarget, TargetActor) == 0x000000, "Member 'BP_NPCAIController_C_ForceBattleStartToTarget::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartToTarget, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000008, "Member 'BP_NPCAIController_C_ForceBattleStartToTarget::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartToTarget, CallFunc_GetBattleManager_ReturnValue) == 0x000058, "Member 'BP_NPCAIController_C_ForceBattleStartToTarget::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartToTarget, CallFunc_GetComponentByClass_ReturnValue) == 0x000060, "Member 'BP_NPCAIController_C_ForceBattleStartToTarget::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartToTarget, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BP_NPCAIController_C_ForceBattleStartToTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartToTarget, CallFunc_SetActionClassParameter_ReturnValue) == 0x000070, "Member 'BP_NPCAIController_C_ForceBattleStartToTarget::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceBattleStartToTarget, CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue) == 0x000078, "Member 'BP_NPCAIController_C_ForceBattleStartToTarget::CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.ForceEscapeStartFortOutSide
// 0x0028 (0x0028 - 0x0000)
struct BP_NPCAIController_C_ForceEscapeStartFortOutSide final
{
public:
	class AActor*                                 StartActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSleeping_IsSleep;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_ForceEscapeStartFortOutSide) == 0x000008, "Wrong alignment on BP_NPCAIController_C_ForceEscapeStartFortOutSide");
static_assert(sizeof(BP_NPCAIController_C_ForceEscapeStartFortOutSide) == 0x000028, "Wrong size on BP_NPCAIController_C_ForceEscapeStartFortOutSide");
static_assert(offsetof(BP_NPCAIController_C_ForceEscapeStartFortOutSide, StartActor) == 0x000000, "Member 'BP_NPCAIController_C_ForceEscapeStartFortOutSide::StartActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceEscapeStartFortOutSide, TargetActor) == 0x000008, "Member 'BP_NPCAIController_C_ForceEscapeStartFortOutSide::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceEscapeStartFortOutSide, CallFunc_IsSleeping_IsSleep) == 0x000010, "Member 'BP_NPCAIController_C_ForceEscapeStartFortOutSide::CallFunc_IsSleeping_IsSleep' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceEscapeStartFortOutSide, CallFunc_K2_GetPawn_ReturnValue) == 0x000018, "Member 'BP_NPCAIController_C_ForceEscapeStartFortOutSide::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ForceEscapeStartFortOutSide, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'BP_NPCAIController_C_ForceEscapeStartFortOutSide::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.GetLeaderBB
// 0x0020 (0x0020 - 0x0000)
struct BP_NPCAIController_C_GetLeaderBB final
{
public:
	class UBP_PalAIBlackboard_Common_C*           LeaderPalBrackboard;                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                   CallFunc_GetLeaderPalBlackboard_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_GetLeaderBB) == 0x000008, "Wrong alignment on BP_NPCAIController_C_GetLeaderBB");
static_assert(sizeof(BP_NPCAIController_C_GetLeaderBB) == 0x000020, "Wrong size on BP_NPCAIController_C_GetLeaderBB");
static_assert(offsetof(BP_NPCAIController_C_GetLeaderBB, LeaderPalBrackboard) == 0x000000, "Member 'BP_NPCAIController_C_GetLeaderBB::LeaderPalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_GetLeaderBB, CallFunc_GetLeaderPalBlackboard_ReturnValue) == 0x000008, "Member 'BP_NPCAIController_C_GetLeaderBB::CallFunc_GetLeaderPalBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_GetLeaderBB, K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common) == 0x000010, "Member 'BP_NPCAIController_C_GetLeaderBB::K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_GetLeaderBB, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_NPCAIController_C_GetLeaderBB::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.GetMyBB
// 0x0020 (0x0020 - 0x0000)
struct BP_NPCAIController_C_GetMyBB final
{
public:
	class UBP_PalAIBlackboard_Common_C*           PalBrackboard;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                   CallFunc_GetMyPalBlackboard_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_GetMyBB) == 0x000008, "Wrong alignment on BP_NPCAIController_C_GetMyBB");
static_assert(sizeof(BP_NPCAIController_C_GetMyBB) == 0x000020, "Wrong size on BP_NPCAIController_C_GetMyBB");
static_assert(offsetof(BP_NPCAIController_C_GetMyBB, PalBrackboard) == 0x000000, "Member 'BP_NPCAIController_C_GetMyBB::PalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_GetMyBB, CallFunc_GetMyPalBlackboard_ReturnValue) == 0x000008, "Member 'BP_NPCAIController_C_GetMyBB::CallFunc_GetMyPalBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_GetMyBB, K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common) == 0x000010, "Member 'BP_NPCAIController_C_GetMyBB::K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_GetMyBB, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_NPCAIController_C_GetMyBB::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.GetWeaponHandle
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAIController_C_GetWeaponHandle final
{
public:
	class UPalNPCAIWeaponHandle*                  WeaponHandle_0;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_GetWeaponHandle) == 0x000008, "Wrong alignment on BP_NPCAIController_C_GetWeaponHandle");
static_assert(sizeof(BP_NPCAIController_C_GetWeaponHandle) == 0x000008, "Wrong size on BP_NPCAIController_C_GetWeaponHandle");
static_assert(offsetof(BP_NPCAIController_C_GetWeaponHandle, WeaponHandle_0) == 0x000000, "Member 'BP_NPCAIController_C_GetWeaponHandle::WeaponHandle_0' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.IsSleeping
// 0x0020 (0x0020 - 0x0000)
struct BP_NPCAIController_C_IsSleeping final
{
public:
	bool                                          IsSleep;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_IsSleeping) == 0x000008, "Wrong alignment on BP_NPCAIController_C_IsSleeping");
static_assert(sizeof(BP_NPCAIController_C_IsSleeping) == 0x000020, "Wrong size on BP_NPCAIController_C_IsSleeping");
static_assert(offsetof(BP_NPCAIController_C_IsSleeping, IsSleep) == 0x000000, "Member 'BP_NPCAIController_C_IsSleeping::IsSleep' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_IsSleeping, CallFunc_K2_GetPawn_ReturnValue) == 0x000008, "Member 'BP_NPCAIController_C_IsSleeping::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_IsSleeping, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_NPCAIController_C_IsSleeping::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_IsSleeping, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_NPCAIController_C_IsSleeping::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_IsSleeping, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'BP_NPCAIController_C_IsSleeping::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.NotifyTalkEnd
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAIController_C_NotifyTalkEnd final
{
public:
	class APalPlayerCharacter*                    TalkPlayer;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_NotifyTalkEnd) == 0x000008, "Wrong alignment on BP_NPCAIController_C_NotifyTalkEnd");
static_assert(sizeof(BP_NPCAIController_C_NotifyTalkEnd) == 0x000008, "Wrong size on BP_NPCAIController_C_NotifyTalkEnd");
static_assert(offsetof(BP_NPCAIController_C_NotifyTalkEnd, TalkPlayer) == 0x000000, "Member 'BP_NPCAIController_C_NotifyTalkEnd::TalkPlayer' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.NotifyTalkStart
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAIController_C_NotifyTalkStart final
{
public:
	class APalPlayerCharacter*                    TalkPlayer;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_NotifyTalkStart) == 0x000008, "Wrong alignment on BP_NPCAIController_C_NotifyTalkStart");
static_assert(sizeof(BP_NPCAIController_C_NotifyTalkStart) == 0x000008, "Wrong size on BP_NPCAIController_C_NotifyTalkStart");
static_assert(offsetof(BP_NPCAIController_C_NotifyTalkStart, TalkPlayer) == 0x000000, "Member 'BP_NPCAIController_C_NotifyTalkStart::TalkPlayer' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.OnNpcTalkIncidentNotify
// 0x0038 (0x0038 - 0x0000)
struct BP_NPCAIController_C_OnNpcTalkIncidentNotify final
{
public:
	class UPalIncidentNotifyListener*             Listener;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalIncidentState                             IncidentState;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalIncidentNotifyParameter            Parameter;                                         // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BP_NPCAIController_C_OnNpcTalkIncidentNotify) == 0x000008, "Wrong alignment on BP_NPCAIController_C_OnNpcTalkIncidentNotify");
static_assert(sizeof(BP_NPCAIController_C_OnNpcTalkIncidentNotify) == 0x000038, "Wrong size on BP_NPCAIController_C_OnNpcTalkIncidentNotify");
static_assert(offsetof(BP_NPCAIController_C_OnNpcTalkIncidentNotify, Listener) == 0x000000, "Member 'BP_NPCAIController_C_OnNpcTalkIncidentNotify::Listener' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_OnNpcTalkIncidentNotify, IncidentState) == 0x000008, "Member 'BP_NPCAIController_C_OnNpcTalkIncidentNotify::IncidentState' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_OnNpcTalkIncidentNotify, Parameter) == 0x000010, "Member 'BP_NPCAIController_C_OnNpcTalkIncidentNotify::Parameter' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.OverrideDefaultAction
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAIController_C_OverrideDefaultAction final
{
public:
	class UClass*                                 DefaultAction;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_OverrideDefaultAction) == 0x000008, "Wrong alignment on BP_NPCAIController_C_OverrideDefaultAction");
static_assert(sizeof(BP_NPCAIController_C_OverrideDefaultAction) == 0x000008, "Wrong size on BP_NPCAIController_C_OverrideDefaultAction");
static_assert(offsetof(BP_NPCAIController_C_OverrideDefaultAction, DefaultAction) == 0x000000, "Member 'BP_NPCAIController_C_OverrideDefaultAction::DefaultAction' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_NPCAIController_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_NPCAIController_C_ReceiveEndPlay");
static_assert(sizeof(BP_NPCAIController_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_NPCAIController_C_ReceiveEndPlay");
static_assert(offsetof(BP_NPCAIController_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_NPCAIController_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAIController_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_NPCAIController_C_ReceivePossess");
static_assert(sizeof(BP_NPCAIController_C_ReceivePossess) == 0x000008, "Wrong size on BP_NPCAIController_C_ReceivePossess");
static_assert(offsetof(BP_NPCAIController_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_NPCAIController_C_ReceivePossess::PossessedPawn' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_NPCAIController_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_NPCAIController_C_ReceiveTick");
static_assert(sizeof(BP_NPCAIController_C_ReceiveTick) == 0x000004, "Wrong size on BP_NPCAIController_C_ReceiveTick");
static_assert(offsetof(BP_NPCAIController_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_NPCAIController_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.ReturnToTerritory
// 0x0010 (0x0010 - 0x0000)
struct BP_NPCAIController_C_ReturnToTerritory final
{
public:
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_ReturnToTerritory) == 0x000008, "Wrong alignment on BP_NPCAIController_C_ReturnToTerritory");
static_assert(sizeof(BP_NPCAIController_C_ReturnToTerritory) == 0x000010, "Wrong size on BP_NPCAIController_C_ReturnToTerritory");
static_assert(offsetof(BP_NPCAIController_C_ReturnToTerritory, CallFunc_GetComponentByClass_ReturnValue) == 0x000000, "Member 'BP_NPCAIController_C_ReturnToTerritory::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_ReturnToTerritory, CallFunc_SetActionClassParameter_ReturnValue) == 0x000008, "Member 'BP_NPCAIController_C_ReturnToTerritory::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.SetAutoDefaultAIAction
// 0x0001 (0x0001 - 0x0000)
struct BP_NPCAIController_C_SetAutoDefaultAIAction final
{
public:
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_SetAutoDefaultAIAction) == 0x000001, "Wrong alignment on BP_NPCAIController_C_SetAutoDefaultAIAction");
static_assert(sizeof(BP_NPCAIController_C_SetAutoDefaultAIAction) == 0x000001, "Wrong size on BP_NPCAIController_C_SetAutoDefaultAIAction");
static_assert(offsetof(BP_NPCAIController_C_SetAutoDefaultAIAction, CallFunc_IsValidClass_ReturnValue) == 0x000000, "Member 'BP_NPCAIController_C_SetAutoDefaultAIAction::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.SetSpawnedInfo
// 0x0040 (0x0040 - 0x0000)
struct BP_NPCAIController_C_SetSpawnedInfo final
{
public:
	struct FVector                                SpawnerLoc;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ReturnRadius;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkArray                   PathWalk_0;                                        // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FName                                   Otomo;                                             // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetMyBB_PalBrackboard;                    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_SetSpawnedInfo) == 0x000008, "Wrong alignment on BP_NPCAIController_C_SetSpawnedInfo");
static_assert(sizeof(BP_NPCAIController_C_SetSpawnedInfo) == 0x000040, "Wrong size on BP_NPCAIController_C_SetSpawnedInfo");
static_assert(offsetof(BP_NPCAIController_C_SetSpawnedInfo, SpawnerLoc) == 0x000000, "Member 'BP_NPCAIController_C_SetSpawnedInfo::SpawnerLoc' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_SetSpawnedInfo, ReturnRadius) == 0x000018, "Member 'BP_NPCAIController_C_SetSpawnedInfo::ReturnRadius' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_SetSpawnedInfo, PathWalk_0) == 0x000020, "Member 'BP_NPCAIController_C_SetSpawnedInfo::PathWalk_0' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_SetSpawnedInfo, Otomo) == 0x000030, "Member 'BP_NPCAIController_C_SetSpawnedInfo::Otomo' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_SetSpawnedInfo, CallFunc_GetMyBB_PalBrackboard) == 0x000038, "Member 'BP_NPCAIController_C_SetSpawnedInfo::CallFunc_GetMyBB_PalBrackboard' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.SetupWeaponHandle
// 0x0018 (0x0018 - 0x0000)
struct BP_NPCAIController_C_SetupWeaponHandle final
{
public:
	class APalWeaponBase*                         Weapon;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_SetupWeaponHandle) == 0x000008, "Wrong alignment on BP_NPCAIController_C_SetupWeaponHandle");
static_assert(sizeof(BP_NPCAIController_C_SetupWeaponHandle) == 0x000018, "Wrong size on BP_NPCAIController_C_SetupWeaponHandle");
static_assert(offsetof(BP_NPCAIController_C_SetupWeaponHandle, Weapon) == 0x000000, "Member 'BP_NPCAIController_C_SetupWeaponHandle::Weapon' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_SetupWeaponHandle, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_NPCAIController_C_SetupWeaponHandle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.StartCombatMode
// 0x0030 (0x0030 - 0x0000)
struct BP_NPCAIController_C_StartCombatMode final
{
public:
	class AActor*                                 TempEscapeTarget;                                  // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UPalAIActionBase>           CallFunc_GetCombatClass_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_StartCombatMode) == 0x000008, "Wrong alignment on BP_NPCAIController_C_StartCombatMode");
static_assert(sizeof(BP_NPCAIController_C_StartCombatMode) == 0x000030, "Wrong size on BP_NPCAIController_C_StartCombatMode");
static_assert(offsetof(BP_NPCAIController_C_StartCombatMode, TempEscapeTarget) == 0x000000, "Member 'BP_NPCAIController_C_StartCombatMode::TempEscapeTarget' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartCombatMode, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_NPCAIController_C_StartCombatMode::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartCombatMode, CallFunc_GetWeaponHandle_WeaponHandle) == 0x000010, "Member 'BP_NPCAIController_C_StartCombatMode::CallFunc_GetWeaponHandle_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartCombatMode, CallFunc_GetCombatClass_ReturnValue) == 0x000018, "Member 'BP_NPCAIController_C_StartCombatMode::CallFunc_GetCombatClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartCombatMode, CallFunc_IsValidClass_ReturnValue) == 0x000020, "Member 'BP_NPCAIController_C_StartCombatMode::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartCombatMode, CallFunc_SetActionClassParameter_ReturnValue) == 0x000028, "Member 'BP_NPCAIController_C_StartCombatMode::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.StartDefaultAIAction
// 0x0028 (0x0028 - 0x0000)
struct BP_NPCAIController_C_StartDefaultAIAction final
{
public:
	class UPalAIActionBase*                       CallFunc_SpawnObject_ReturnValue;                  // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AIAction_NPC_Relax_PathWalk_C*      K2Node_DynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_StartDefaultAIAction) == 0x000008, "Wrong alignment on BP_NPCAIController_C_StartDefaultAIAction");
static_assert(sizeof(BP_NPCAIController_C_StartDefaultAIAction) == 0x000028, "Wrong size on BP_NPCAIController_C_StartDefaultAIAction");
static_assert(offsetof(BP_NPCAIController_C_StartDefaultAIAction, CallFunc_SpawnObject_ReturnValue) == 0x000000, "Member 'BP_NPCAIController_C_StartDefaultAIAction::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartDefaultAIAction, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000008, "Member 'BP_NPCAIController_C_StartDefaultAIAction::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartDefaultAIAction, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_NPCAIController_C_StartDefaultAIAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartDefaultAIAction, K2Node_DynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk) == 0x000018, "Member 'BP_NPCAIController_C_StartDefaultAIAction::K2Node_DynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartDefaultAIAction, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'BP_NPCAIController_C_StartDefaultAIAction::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.StartEscapeMode
// 0x0070 (0x0070 - 0x0000)
struct BP_NPCAIController_C_StartEscapeMode final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ByOutSide;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0018(0x0050)(NoDestructor)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_StartEscapeMode) == 0x000008, "Wrong alignment on BP_NPCAIController_C_StartEscapeMode");
static_assert(sizeof(BP_NPCAIController_C_StartEscapeMode) == 0x000070, "Wrong size on BP_NPCAIController_C_StartEscapeMode");
static_assert(offsetof(BP_NPCAIController_C_StartEscapeMode, TargetActor) == 0x000000, "Member 'BP_NPCAIController_C_StartEscapeMode::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartEscapeMode, ByOutSide) == 0x000008, "Member 'BP_NPCAIController_C_StartEscapeMode::ByOutSide' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartEscapeMode, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_NPCAIController_C_StartEscapeMode::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartEscapeMode, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000018, "Member 'BP_NPCAIController_C_StartEscapeMode::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_StartEscapeMode, CallFunc_SetActionClassParameter_ReturnValue) == 0x000068, "Member 'BP_NPCAIController_C_StartEscapeMode::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.TalkEnd_Func
// 0x0038 (0x0038 - 0x0000)
struct BP_NPCAIController_C_TalkEnd_Func final
{
public:
	class AActor*                                 SelfActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnAction*                            CallFunc_GetCurrentAction_BP_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_Talking_C*             K2Node_DynamicCast_AsBP_AIAction_NPC_Talking;      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_TalkEnd_Func) == 0x000008, "Wrong alignment on BP_NPCAIController_C_TalkEnd_Func");
static_assert(sizeof(BP_NPCAIController_C_TalkEnd_Func) == 0x000038, "Wrong size on BP_NPCAIController_C_TalkEnd_Func");
static_assert(offsetof(BP_NPCAIController_C_TalkEnd_Func, SelfActor) == 0x000000, "Member 'BP_NPCAIController_C_TalkEnd_Func::SelfActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkEnd_Func, TargetActor) == 0x000008, "Member 'BP_NPCAIController_C_TalkEnd_Func::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkEnd_Func, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000010, "Member 'BP_NPCAIController_C_TalkEnd_Func::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkEnd_Func, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_NPCAIController_C_TalkEnd_Func::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkEnd_Func, CallFunc_GetCurrentAction_BP_ReturnValue) == 0x000020, "Member 'BP_NPCAIController_C_TalkEnd_Func::CallFunc_GetCurrentAction_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkEnd_Func, K2Node_DynamicCast_AsBP_AIAction_NPC_Talking) == 0x000028, "Member 'BP_NPCAIController_C_TalkEnd_Func::K2Node_DynamicCast_AsBP_AIAction_NPC_Talking' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkEnd_Func, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_NPCAIController_C_TalkEnd_Func::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.TalkStart_Func
// 0x0090 (0x0090 - 0x0000)
struct BP_NPCAIController_C_TalkStart_Func final
{
public:
	class AActor*                                 SelfActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0010(0x0050)(NoDestructor)
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawnAction*                            CallFunc_GetCurrentAction_BP_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_Talking_C*             K2Node_DynamicCast_AsBP_AIAction_NPC_Talking;      // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsTalking_IsTalking;                   // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C_TalkStart_Func) == 0x000008, "Wrong alignment on BP_NPCAIController_C_TalkStart_Func");
static_assert(sizeof(BP_NPCAIController_C_TalkStart_Func) == 0x000090, "Wrong size on BP_NPCAIController_C_TalkStart_Func");
static_assert(offsetof(BP_NPCAIController_C_TalkStart_Func, SelfActor) == 0x000000, "Member 'BP_NPCAIController_C_TalkStart_Func::SelfActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkStart_Func, TargetActor) == 0x000008, "Member 'BP_NPCAIController_C_TalkStart_Func::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkStart_Func, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000010, "Member 'BP_NPCAIController_C_TalkStart_Func::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkStart_Func, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000060, "Member 'BP_NPCAIController_C_TalkStart_Func::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkStart_Func, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_NPCAIController_C_TalkStart_Func::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkStart_Func, CallFunc_SetActionClassParameter_ReturnValue) == 0x000070, "Member 'BP_NPCAIController_C_TalkStart_Func::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkStart_Func, CallFunc_GetCurrentAction_BP_ReturnValue) == 0x000078, "Member 'BP_NPCAIController_C_TalkStart_Func::CallFunc_GetCurrentAction_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkStart_Func, K2Node_DynamicCast_AsBP_AIAction_NPC_Talking) == 0x000080, "Member 'BP_NPCAIController_C_TalkStart_Func::K2Node_DynamicCast_AsBP_AIAction_NPC_Talking' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkStart_Func, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'BP_NPCAIController_C_TalkStart_Func::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C_TalkStart_Func, CallFunc_GetIsTalking_IsTalking) == 0x000089, "Member 'BP_NPCAIController_C_TalkStart_Func::CallFunc_GetIsTalking_IsTalking' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.カスタムイベント_0
// 0x0030 (0x0030 - 0x0000)
struct BP_NPCAIController_C__________________________0 final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C__________________________0) == 0x000008, "Wrong alignment on BP_NPCAIController_C__________________________0");
static_assert(sizeof(BP_NPCAIController_C__________________________0) == 0x000030, "Wrong size on BP_NPCAIController_C__________________________0");
static_assert(offsetof(BP_NPCAIController_C__________________________0, ID) == 0x000000, "Member 'BP_NPCAIController_C__________________________0::ID' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.カスタムイベント_2
// 0x0050 (0x0050 - 0x0000)
struct BP_NPCAIController_C__________________________2 final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_NPCAIController_C__________________________2) == 0x000008, "Wrong alignment on BP_NPCAIController_C__________________________2");
static_assert(sizeof(BP_NPCAIController_C__________________________2) == 0x000050, "Wrong size on BP_NPCAIController_C__________________________2");
static_assert(offsetof(BP_NPCAIController_C__________________________2, DeadInfo) == 0x000000, "Member 'BP_NPCAIController_C__________________________2::DeadInfo' has a wrong offset!");

// Function BP_NPCAIController.BP_NPCAIController_C.カスタムイベント_4
// 0x0010 (0x0010 - 0x0000)
struct BP_NPCAIController_C__________________________4 final
{
public:
	class AController*                            HolderController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          OtomoPal;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_C__________________________4) == 0x000008, "Wrong alignment on BP_NPCAIController_C__________________________4");
static_assert(sizeof(BP_NPCAIController_C__________________________4) == 0x000010, "Wrong size on BP_NPCAIController_C__________________________4");
static_assert(offsetof(BP_NPCAIController_C__________________________4, HolderController) == 0x000000, "Member 'BP_NPCAIController_C__________________________4::HolderController' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_C__________________________4, OtomoPal) == 0x000008, "Member 'BP_NPCAIController_C__________________________4::OtomoPal' has a wrong offset!");

}

