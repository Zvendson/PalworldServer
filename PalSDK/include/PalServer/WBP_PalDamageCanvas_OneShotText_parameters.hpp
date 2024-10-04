#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.AddDamageTextEvent
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_PalDamageCanvas_OneShotText_C_AddDamageTextEvent final
{
public:
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0000(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor*                                 Defender;                                          // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalDamageCanvas_OneShotText_C_AddDamageTextEvent) == 0x000008, "Wrong alignment on WBP_PalDamageCanvas_OneShotText_C_AddDamageTextEvent");
static_assert(sizeof(WBP_PalDamageCanvas_OneShotText_C_AddDamageTextEvent) == 0x0000D8, "Wrong size on WBP_PalDamageCanvas_OneShotText_C_AddDamageTextEvent");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddDamageTextEvent, DamageInfo) == 0x000000, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddDamageTextEvent::DamageInfo' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddDamageTextEvent, Defender) == 0x0000D0, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddDamageTextEvent::Defender' has a wrong offset!");

// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.AddNewDamageText
// 0x0160 (0x0160 - 0x0000)
struct WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText final
{
public:
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                 Defender;                                          // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcDisplayDamage_outSpecialDamageRate;   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcDisplayDamage_weakCount;              // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcDisplayDamage_ReturnValue;            // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_CalcTargetLocation_location;              // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalDamageTextType                            CallFunc_CalcDamageTextType_textType;              // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_102[0x6];                                      // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_CalcLengthToPlayer_length;                // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUIDamageTextBase*                   CallFunc_CreateDamageWidget_createdWdiget;         // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalDamageText_C*                   K2Node_DynamicCast_AsWBP_Pal_Damage_Text;          // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_CalcDamageTextType_damageRate_ImplicitCast; // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_StartDisplay_inDisplayTime_ImplicitCast;  // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText) == 0x000008, "Wrong alignment on WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText");
static_assert(sizeof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText) == 0x000160, "Wrong size on WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, DamageInfo) == 0x000000, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::DamageInfo' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, Defender) == 0x0000D0, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::Defender' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_CalcDisplayDamage_outSpecialDamageRate) == 0x0000D8, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_CalcDisplayDamage_outSpecialDamageRate' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_CalcDisplayDamage_weakCount) == 0x0000DC, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_CalcDisplayDamage_weakCount' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_CalcDisplayDamage_ReturnValue) == 0x0000E0, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_CalcDisplayDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_CalcTargetLocation_location) == 0x0000E8, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_CalcTargetLocation_location' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_Less_IntInt_ReturnValue) == 0x000100, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_CalcDamageTextType_textType) == 0x000101, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_CalcDamageTextType_textType' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_CalcLengthToPlayer_length) == 0x000108, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_CalcLengthToPlayer_length' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_MakeVector2D_ReturnValue) == 0x000110, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000120, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_CreateDamageWidget_createdWdiget) == 0x000128, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_CreateDamageWidget_createdWdiget' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, K2Node_DynamicCast_AsWBP_Pal_Damage_Text) == 0x000130, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::K2Node_DynamicCast_AsWBP_Pal_Damage_Text' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, K2Node_DynamicCast_bSuccess) == 0x000138, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000140, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_Less_DoubleDouble_B_ImplicitCast) == 0x000148, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_Less_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_CalcDamageTextType_damageRate_ImplicitCast) == 0x000150, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_CalcDamageTextType_damageRate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText, CallFunc_StartDisplay_inDisplayTime_ImplicitCast) == 0x000158, "Member 'WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText::CallFunc_StartDisplay_inDisplayTime_ImplicitCast' has a wrong offset!");

// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CalcDamageTextType
// 0x0100 (0x0100 - 0x0000)
struct WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType final
{
public:
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                 Defender;                                          // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        DamageRate;                                        // 0x00D8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WeakCount;                                         // 0x00E0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalDamageTextType                            TextType;                                          // 0x00E4(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipAttacker_IsEquip;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x2];                                       // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetWeakCount_ForUI_ReturnValue;           // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType) == 0x000008, "Wrong alignment on WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType");
static_assert(sizeof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType) == 0x000100, "Wrong size on WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, DamageInfo) == 0x000000, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::DamageInfo' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, Defender) == 0x0000D0, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::Defender' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, DamageRate) == 0x0000D8, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::DamageRate' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, WeakCount) == 0x0000E0, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::WeakCount' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, TextType) == 0x0000E4, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::TextType' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, K2Node_SwitchInteger_CmpSuccess) == 0x0000E5, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E6, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000E7, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, CallFunc_GetComponentByClass_ReturnValue) == 0x0000E8, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, CallFunc_IsEquipAttacker_IsEquip) == 0x0000F0, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::CallFunc_IsEquipAttacker_IsEquip' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, CallFunc_IsValid_ReturnValue) == 0x0000F1, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, CallFunc_GetWeakCount_ForUI_ReturnValue) == 0x0000F4, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::CallFunc_GetWeakCount_ForUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType, K2Node_SwitchInteger_CmpSuccess_1) == 0x0000F8, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");

// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CalcLengthToPlayer
// 0x0060 (0x0060 - 0x0000)
struct WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer final
{
public:
	struct FVector                                HitLocation;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Length;                                            // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer) == 0x000008, "Wrong alignment on WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer");
static_assert(sizeof(WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer) == 0x000060, "Wrong size on WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer, HitLocation) == 0x000000, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer::HitLocation' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer, Length) == 0x000018, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer::Length' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer, CallFunc_GetPalmi_ReturnValue) == 0x000020, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000040, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer, CallFunc_VSize_ReturnValue) == 0x000058, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer::CallFunc_VSize_ReturnValue' has a wrong offset!");

// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CalcTargetLocation
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation final
{
public:
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                 Defender;                                          // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x00D8(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation) == 0x000008, "Wrong alignment on WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation");
static_assert(sizeof(WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation) == 0x0000F0, "Wrong size on WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation, DamageInfo) == 0x000000, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation::DamageInfo' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation, Defender) == 0x0000D0, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation::Defender' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation, Location) == 0x0000D8, "Member 'WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation::Location' has a wrong offset!");

// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CreateDamageWidget
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget final
{
public:
	class UPalUIDamageTextBase*                   CreatedWdiget;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalDamageText_C*                   CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget) == 0x000008, "Wrong alignment on WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget");
static_assert(sizeof(WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget) == 0x000030, "Wrong size on WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget, CreatedWdiget) == 0x000000, "Member 'WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget::CreatedWdiget' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000014, "Member 'WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000018, "Member 'WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget, CallFunc_Create_ReturnValue) == 0x000020, "Member 'WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget, CallFunc_AddChildToCanvas_ReturnValue) == 0x000028, "Member 'WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText
// 0x0178 (0x0178 - 0x0000)
struct WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDamagePopUpManager*                 CallFunc_GetDamagePopUpManager_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamagePopUpManager*                 CallFunc_GetDamagePopUpManager_ReturnValue_1;      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDamageInfo                         K2Node_CustomEvent_DamageInfo;                     // 0x0020(0x00D0)(ConstParm)
	class AActor*                                 K2Node_CustomEvent_defender;                       // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0103(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOptionSubsystem*                    CallFunc_GetOptionSubsystem_ReturnValue;           // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalOptionUISettings                   CallFunc_GetUISettings_ReturnValue;                // 0x011C(0x001C)(ConstParm, NoDestructor)
	TDelegate<void(struct FPalOptionUISettings& PrevSettings, struct FPalOptionUISettings& NewSettings)> K2Node_CreateDelegate_OutputDelegate;              // 0x0138(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPalDamageInfo& DamageInfo, class AActor* Defender)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0148(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOptionSubsystem*                    CallFunc_GetOptionSubsystem_ReturnValue_1;         // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x3];                                      // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FPalOptionUISettings& PrevSettings, struct FPalOptionUISettings& NewSettings)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0164(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText) == 0x000008, "Wrong alignment on WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText");
static_assert(sizeof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText) == 0x000178, "Wrong size on WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, EntryPoint) == 0x000000, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_GetDamagePopUpManager_ReturnValue) == 0x000008, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_GetDamagePopUpManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_GetDamagePopUpManager_ReturnValue_1) == 0x000010, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_GetDamagePopUpManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, K2Node_CustomEvent_DamageInfo) == 0x000020, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::K2Node_CustomEvent_DamageInfo' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, K2Node_CustomEvent_defender) == 0x0000F0, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::K2Node_CustomEvent_defender' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, K2Node_DynamicCast_AsPal_Character) == 0x0000F8, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_GetActiveActorFlag_ReturnValue) == 0x000101, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_IsDead_ReturnValue) == 0x000102, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_Not_PreBool_ReturnValue) == 0x000103, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_BooleanOR_ReturnValue) == 0x000104, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_GetGameSetting_ReturnValue) == 0x000108, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_GetOptionSubsystem_ReturnValue) == 0x000110, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_GetOptionSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_IsValid_ReturnValue_1) == 0x000118, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_GetUISettings_ReturnValue) == 0x00011C, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_GetUISettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, K2Node_CreateDelegate_OutputDelegate) == 0x000138, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, K2Node_CreateDelegate_OutputDelegate_1) == 0x000148, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_GetOptionSubsystem_ReturnValue_1) == 0x000158, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_GetOptionSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_IsValid_ReturnValue_2) == 0x000160, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, K2Node_CreateDelegate_OutputDelegate_2) == 0x000164, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000174, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText, CallFunc_BooleanOR_ReturnValue_1) == 0x000175, "Member 'WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.IsEquipAttacker
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker final
{
public:
	class AActor*                                 Attacker;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEquip;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalWeaponBase*                         CallFunc_GetHasWeapon_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker) == 0x000008, "Wrong alignment on WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker");
static_assert(sizeof(WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker) == 0x000030, "Wrong size on WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker, Attacker) == 0x000000, "Member 'WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker::Attacker' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker, IsEquip) == 0x000008, "Member 'WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker::IsEquip' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker, CallFunc_GetHasWeapon_ReturnValue) == 0x000020, "Member 'WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker::CallFunc_GetHasWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.OnChangedUISettings
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings final
{
public:
	struct FPalOptionUISettings                   PrevSettings;                                      // 0x0000(0x001C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FPalOptionUISettings                   NewSettings;                                       // 0x001C(0x001C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	double                                        K2Node_VariableSet_DamageTextScale_ImplicitCast;   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings) == 0x000008, "Wrong alignment on WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings");
static_assert(sizeof(WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings) == 0x000040, "Wrong size on WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings, PrevSettings) == 0x000000, "Member 'WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings::PrevSettings' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings, NewSettings) == 0x00001C, "Member 'WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings::NewSettings' has a wrong offset!");
static_assert(offsetof(WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings, K2Node_VariableSet_DamageTextScale_ImplicitCast) == 0x000038, "Member 'WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings::K2Node_VariableSet_DamageTextScale_ImplicitCast' has a wrong offset!");

}

