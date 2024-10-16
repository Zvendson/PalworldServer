#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint
// 0x0468 (0x0468 - 0x0000)
struct BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalLevelObjectUnlockableFastTravelPoint* Self)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOptionSubsystem*                    CallFunc_GetOptionSubsystem_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FPalOptionWorldSettings& PrevSettings, struct FPalOptionWorldSettings& NewSettings)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalOptionWorldSettings                K2Node_CustomEvent_PrevSettings;                   // 0x0048(0x0160)(ConstParm)
	struct FPalOptionWorldSettings                K2Node_CustomEvent_NewSettings;                    // 0x01A8(0x0160)(ConstParm)
	struct FPalOptionWorldSettings                CallFunc_GetOptionWorldSettings_ReturnValue;       // 0x0308(0x0160)(ConstParm)
};
static_assert(alignof(BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint) == 0x000008, "Wrong alignment on BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint");
static_assert(sizeof(BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint) == 0x000468, "Wrong size on BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint, EntryPoint) == 0x000000, "Member 'BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint, CallFunc_GetOptionSubsystem_ReturnValue) == 0x000028, "Member 'BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint::CallFunc_GetOptionSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint, K2Node_CustomEvent_PrevSettings) == 0x000048, "Member 'BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint::K2Node_CustomEvent_PrevSettings' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint, K2Node_CustomEvent_NewSettings) == 0x0001A8, "Member 'BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint::K2Node_CustomEvent_NewSettings' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint, CallFunc_GetOptionWorldSettings_ReturnValue) == 0x000308, "Member 'BP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint::CallFunc_GetOptionWorldSettings_ReturnValue' has a wrong offset!");

// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.GetUnlockAkAudioEvent
// 0x0008 (0x0008 - 0x0000)
struct BP_LevelObject_TowerFastTravelPoint_C_GetUnlockAkAudioEvent final
{
public:
	class UAkAudioEvent*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelObject_TowerFastTravelPoint_C_GetUnlockAkAudioEvent) == 0x000008, "Wrong alignment on BP_LevelObject_TowerFastTravelPoint_C_GetUnlockAkAudioEvent");
static_assert(sizeof(BP_LevelObject_TowerFastTravelPoint_C_GetUnlockAkAudioEvent) == 0x000008, "Wrong size on BP_LevelObject_TowerFastTravelPoint_C_GetUnlockAkAudioEvent");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_GetUnlockAkAudioEvent, ReturnValue) == 0x000000, "Member 'BP_LevelObject_TowerFastTravelPoint_C_GetUnlockAkAudioEvent::ReturnValue' has a wrong offset!");

// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnChangeWorldSettings
// 0x02C0 (0x02C0 - 0x0000)
struct BP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings final
{
public:
	struct FPalOptionWorldSettings                PrevSettings;                                      // 0x0000(0x0160)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPalOptionWorldSettings                NewSettings;                                       // 0x0160(0x0160)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings) == 0x000008, "Wrong alignment on BP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings");
static_assert(sizeof(BP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings) == 0x0002C0, "Wrong size on BP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings, PrevSettings) == 0x000000, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings::PrevSettings' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings, NewSettings) == 0x000160, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings::NewSettings' has a wrong offset!");

// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnGetAkComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_LevelObject_TowerFastTravelPoint_C_OnGetAkComponent final
{
public:
	class USceneComponent*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelObject_TowerFastTravelPoint_C_OnGetAkComponent) == 0x000008, "Wrong alignment on BP_LevelObject_TowerFastTravelPoint_C_OnGetAkComponent");
static_assert(sizeof(BP_LevelObject_TowerFastTravelPoint_C_OnGetAkComponent) == 0x000008, "Wrong size on BP_LevelObject_TowerFastTravelPoint_C_OnGetAkComponent");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnGetAkComponent, ReturnValue) == 0x000000, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnGetAkComponent::ReturnValue' has a wrong offset!");

// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnUpdateUnlockState
// 0x0010 (0x0010 - 0x0000)
struct BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState final
{
public:
	class APalLevelObjectUnlockableFastTravelPoint* Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnlocked_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState) == 0x000008, "Wrong alignment on BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState");
static_assert(sizeof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState) == 0x000010, "Wrong size on BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState, Object) == 0x000000, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState::Object' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState, CallFunc_IsUnlocked_ReturnValue) == 0x000008, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState::CallFunc_IsUnlocked_ReturnValue' has a wrong offset!");

// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnUpdateUnlockState_Internal
// 0x0040 (0x0040 - 0x0000)
struct BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal final
{
public:
	bool                                          IsUnlocked_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSpawnUnlockefFlashEffect;                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_1;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal) == 0x000008, "Wrong alignment on BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal");
static_assert(sizeof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal) == 0x000040, "Wrong size on BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal, IsUnlocked_0) == 0x000000, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal::IsUnlocked_0' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal, IsSpawnUnlockefFlashEffect) == 0x000001, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal::IsSpawnUnlockefFlashEffect' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000008, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal, CallFunc_GetMaterial_ReturnValue) == 0x000010, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal, CallFunc_GetMaterial_ReturnValue_1) == 0x000020, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal::CallFunc_GetMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000030, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000038, "Member 'BP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

}

