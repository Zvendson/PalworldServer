#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_PalBossTower.BP_PalBossTower_C.BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PalBossTower_C_BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PalBossTower_C_BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.ExecuteUbergraph_BP_PalBossTower
// 0x0688 (0x0688 - 0x0000)
struct BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBossBattleDifficulty                      Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0010(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult_1;     // 0x00F8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_6;  // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_6;           // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_6;            // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_6;       // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep_2;           // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FD[0x3];                                      // 0x01FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult_2;          // 0x0200(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_5;  // 0x02E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_5;           // 0x02F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_5;            // 0x02F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_5;       // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_304[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0308(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_1;       // 0x0318(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x7];                                      // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Other;                          // 0x0328(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            K2Node_CustomEvent_IndicatorType;                  // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_331[0x7];                                      // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0338(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_342[0x6];                                      // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_2;       // 0x0348(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEntered_ReturnValue;                    // 0x0351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_352[0x6];                                      // 0x0352(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_4;  // 0x0358(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_4;           // 0x0360(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_4;            // 0x0368(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_4;       // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_375[0x3];                                      // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_3;       // 0x0378(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue_1;       // 0x0388(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalBossBattleDifficulty                      Temp_byte_Variable_1;                              // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0391(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_392[0x6];                                      // 0x0392(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0398(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalBossBattleDifficulty                      K2Node_Select_Default;                             // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x03A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate;              // 0x03B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalBossBattleState                           K2Node_Event_NewState;                             // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x03C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C3[0x5];                                      // 0x03C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_2;                   // 0x03C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalBossBattleState                           CallFunc_GetBossBattleState_ReturnValue;           // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x03D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D3[0x5];                                      // 0x03D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_3;                   // 0x03D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBossBattleState                           CallFunc_GetBossBattleState_ReturnValue_1;         // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x03E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x03E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4[0x4];                                      // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPalInteractiveObjectIndicatorInterface> CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput; // 0x03E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_3;  // 0x03F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_3;           // 0x0400(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_3;            // 0x0408(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_3;       // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep_1;           // 0x0414(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_415[0x3];                                      // 0x0415(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult_1;          // 0x0418(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_501[0x7];                                      // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_2;  // 0x0508(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_2;           // 0x0510(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_2;            // 0x0518(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_2;       // 0x0520(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0524(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0525(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_526[0x2];                                      // 0x0526(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0528(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0530(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0538(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0540(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0544(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_545[0x3];                                      // 0x0545(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0548(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0630(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x0648(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0649(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64A[0x6];                                      // 0x064A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0650(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0658(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0660(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0668(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x066C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66D[0x3];                                      // 0x066D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0670(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower) == 0x000008, "Wrong alignment on BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower");
static_assert(sizeof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower) == 0x000688, "Wrong size on BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, EntryPoint) == 0x000000, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, Temp_byte_Variable) == 0x000004, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000010, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_K2_AddLocalRotation_SweepHitResult_1) == 0x0000F8, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_K2_AddLocalRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OverlappedComponent_6) == 0x0001E0, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OverlappedComponent_6' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherActor_6) == 0x0001E8, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherActor_6' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherComp_6) == 0x0001F0, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherComp_6' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherBodyIndex_6) == 0x0001F8, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherBodyIndex_6' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_bFromSweep_2) == 0x0001FC, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_bFromSweep_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_SweepResult_2) == 0x000200, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_SweepResult_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OverlappedComponent_5) == 0x0002E8, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OverlappedComponent_5' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherActor_5) == 0x0002F0, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherActor_5' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherComp_5) == 0x0002F8, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherComp_5' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherBodyIndex_5) == 0x000300, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherBodyIndex_5' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_DynamicCast_AsPal_Player_Character) == 0x000308, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_DynamicCast_bSuccess) == 0x000310, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_DynamicCast_AsPal_Player_Character_1) == 0x000318, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_DynamicCast_AsPal_Player_Character_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_DynamicCast_bSuccess_1) == 0x000320, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_CustomEvent_Other) == 0x000328, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_CustomEvent_Other' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_CustomEvent_IndicatorType) == 0x000330, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_CustomEvent_IndicatorType' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_GetBossBattleManager_ReturnValue) == 0x000338, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000340, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_IsValid_ReturnValue) == 0x000341, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_DynamicCast_AsPal_Player_Character_2) == 0x000348, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_DynamicCast_AsPal_Player_Character_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_DynamicCast_bSuccess_2) == 0x000350, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_IsEntered_ReturnValue) == 0x000351, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_IsEntered_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OverlappedComponent_4) == 0x000358, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OverlappedComponent_4' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherActor_4) == 0x000360, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherActor_4' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherComp_4) == 0x000368, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherComp_4' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherBodyIndex_4) == 0x000370, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherBodyIndex_4' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_IsServer_ReturnValue) == 0x000374, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_DynamicCast_AsPal_Player_Character_3) == 0x000378, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_DynamicCast_AsPal_Player_Character_3' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_DynamicCast_bSuccess_3) == 0x000380, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_GetBossBattleManager_ReturnValue_1) == 0x000388, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_GetBossBattleManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, Temp_byte_Variable_1) == 0x000390, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, Temp_bool_Variable) == 0x000391, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_GetPalmi_ReturnValue) == 0x000398, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_Select_Default) == 0x0003A0, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_GetPalmi_ReturnValue_1) == 0x0003A8, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_CreateDelegate_OutputDelegate) == 0x0003B0, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_Event_NewState) == 0x0003C0, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_Event_NewState' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_IsValid_ReturnValue_1) == 0x0003C1, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_Array_Contains_ReturnValue) == 0x0003C2, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_GetPalmi_ReturnValue_2) == 0x0003C8, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_GetPalmi_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_GetBossBattleState_ReturnValue) == 0x0003D0, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_GetBossBattleState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_IsValid_ReturnValue_2) == 0x0003D1, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0003D2, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_GetPalmi_ReturnValue_3) == 0x0003D8, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_GetPalmi_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_IsDedicatedServer_ReturnValue) == 0x0003E0, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_GetBossBattleState_ReturnValue_1) == 0x0003E1, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_GetBossBattleState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0003E2, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_IsValid_ReturnValue_3) == 0x0003E3, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput) == 0x0003E8, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OverlappedComponent_3) == 0x0003F8, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OverlappedComponent_3' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherActor_3) == 0x000400, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherActor_3' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherComp_3) == 0x000408, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherComp_3' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherBodyIndex_3) == 0x000410, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherBodyIndex_3' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_bFromSweep_1) == 0x000414, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_bFromSweep_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_SweepResult_1) == 0x000418, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_SweepResult_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000500, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OverlappedComponent_2) == 0x000508, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OverlappedComponent_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherActor_2) == 0x000510, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherActor_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherComp_2) == 0x000518, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherComp_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherBodyIndex_2) == 0x000520, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherBodyIndex_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_BooleanAND_ReturnValue) == 0x000524, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000525, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000528, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000530, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000538, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000540, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_bFromSweep) == 0x000544, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_SweepResult) == 0x000548, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000630, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x000648, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_BooleanAND_ReturnValue_1) == 0x000649, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000650, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherActor) == 0x000658, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherComp) == 0x000660, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000668, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_EqualEqual_ObjectObject_ReturnValue_3) == 0x00066C, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_EqualEqual_ObjectObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000670, "Member 'BP_PalBossTower_C_ExecuteUbergraph_BP_PalBossTower::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.Force Warp Player
// 0x0260 (0x0260 - 0x0000)
struct BP_PalBossTower_C_Force_Warp_Player final
{
public:
	TArray<class APalPlayerCharacter*>            WarpTargetPlayers;                                 // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0xC];                                       // 0x0034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetFrontWarpPoint_ReturnValue;            // 0x0040(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetPlayerSpawnTransformForMultiPlayer_ReturnValue; // 0x00F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0150(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x3];                                      // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APalPlayerCharacter*>            CallFunc_GetForceWarpTargets_ReturnValue;          // 0x0240(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_Force_Warp_Player) == 0x000010, "Wrong alignment on BP_PalBossTower_C_Force_Warp_Player");
static_assert(sizeof(BP_PalBossTower_C_Force_Warp_Player) == 0x000260, "Wrong size on BP_PalBossTower_C_Force_Warp_Player");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, WarpTargetPlayers) == 0x000000, "Member 'BP_PalBossTower_C_Force_Warp_Player::WarpTargetPlayers' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_PalBossTower_C_Force_Warp_Player::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_GetBossBattleManager_ReturnValue) == 0x000028, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_PalBossTower_C_Force_Warp_Player::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_GetFrontWarpPoint_ReturnValue) == 0x000040, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_GetFrontWarpPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_BreakTransform_Location) == 0x0000A0, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_BreakTransform_Rotation) == 0x0000B8, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_BreakTransform_Scale) == 0x0000D0, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_GetPlayerSpawnTransformForMultiPlayer_ReturnValue) == 0x0000F0, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_GetPlayerSpawnTransformForMultiPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000150, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000238, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_Add_IntInt_ReturnValue) == 0x00023C, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_GetForceWarpTargets_ReturnValue) == 0x000240, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_GetForceWarpTargets_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Force_Warp_Player, CallFunc_IsServer_ReturnValue) == 0x000250, "Member 'BP_PalBossTower_C_Force_Warp_Player::CallFunc_IsServer_ReturnValue' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.Interact
// 0x0010 (0x0010 - 0x0000)
struct BP_PalBossTower_C_Interact final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            IndicatorType;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_Interact) == 0x000008, "Wrong alignment on BP_PalBossTower_C_Interact");
static_assert(sizeof(BP_PalBossTower_C_Interact) == 0x000010, "Wrong size on BP_PalBossTower_C_Interact");
static_assert(offsetof(BP_PalBossTower_C_Interact, Other) == 0x000000, "Member 'BP_PalBossTower_C_Interact::Other' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_Interact, IndicatorType) == 0x000008, "Member 'BP_PalBossTower_C_Interact::IndicatorType' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.OnChangeBossBattleStateBP
// 0x0001 (0x0001 - 0x0000)
struct BP_PalBossTower_C_OnChangeBossBattleStateBP final
{
public:
	EPalBossBattleState                           NewState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_OnChangeBossBattleStateBP) == 0x000001, "Wrong alignment on BP_PalBossTower_C_OnChangeBossBattleStateBP");
static_assert(sizeof(BP_PalBossTower_C_OnChangeBossBattleStateBP) == 0x000001, "Wrong size on BP_PalBossTower_C_OnChangeBossBattleStateBP");
static_assert(offsetof(BP_PalBossTower_C_OnChangeBossBattleStateBP, NewState) == 0x000000, "Member 'BP_PalBossTower_C_OnChangeBossBattleStateBP::NewState' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.OnCloseStartBattleCheckDialog
// 0x0001 (0x0001 - 0x0000)
struct BP_PalBossTower_C_OnCloseStartBattleCheckDialog final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_OnCloseStartBattleCheckDialog) == 0x000001, "Wrong alignment on BP_PalBossTower_C_OnCloseStartBattleCheckDialog");
static_assert(sizeof(BP_PalBossTower_C_OnCloseStartBattleCheckDialog) == 0x000001, "Wrong size on BP_PalBossTower_C_OnCloseStartBattleCheckDialog");
static_assert(offsetof(BP_PalBossTower_C_OnCloseStartBattleCheckDialog, bResult) == 0x000000, "Member 'BP_PalBossTower_C_OnCloseStartBattleCheckDialog::bResult' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.OpenStartBattleCheckDialog
// 0x00E8 (0x00E8 - 0x0000)
struct BP_PalBossTower_C_OpenStartBattleCheckDialog final
{
public:
	class FString                                 DialogTextString;                                  // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	struct FGuid                                  CallFunc_Dialog_ReturnValue;                       // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0058(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A6[0x2];                                       // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualCharacterParameterByActor_ReturnValue; // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNickName_outName;                      // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_OpenStartBattleCheckDialog) == 0x000008, "Wrong alignment on BP_PalBossTower_C_OpenStartBattleCheckDialog");
static_assert(sizeof(BP_PalBossTower_C_OpenStartBattleCheckDialog) == 0x0000E8, "Wrong size on BP_PalBossTower_C_OpenStartBattleCheckDialog");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, DialogTextString) == 0x000000, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::DialogTextString' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_Dialog_ReturnValue) == 0x000040, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_Dialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000058, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_Conv_TextToString_ReturnValue) == 0x000078, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_Concat_StrStr_ReturnValue) == 0x000088, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_Array_Get_Item) == 0x000098, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_IsValid_ReturnValue_1) == 0x0000A4, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_Less_IntInt_ReturnValue) == 0x0000A5, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_GetIndividualCharacterParameterByActor_ReturnValue) == 0x0000A8, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_GetIndividualCharacterParameterByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_GetNickName_outName) == 0x0000B0, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_IsValid_ReturnValue_2) == 0x0000C0, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C8, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_OpenStartBattleCheckDialog, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000D8, "Member 'BP_PalBossTower_C_OpenStartBattleCheckDialog::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalBossTower_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalBossTower_C_ReceiveTick");
static_assert(sizeof(BP_PalBossTower_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalBossTower_C_ReceiveTick");
static_assert(offsetof(BP_PalBossTower_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalBossTower_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.SwitchTrigger
// 0x0008 (0x0008 - 0x0000)
struct BP_PalBossTower_C_SwitchTrigger final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             K2Node_Select_Default_1;                           // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_SwitchTrigger) == 0x000001, "Wrong alignment on BP_PalBossTower_C_SwitchTrigger");
static_assert(sizeof(BP_PalBossTower_C_SwitchTrigger) == 0x000008, "Wrong size on BP_PalBossTower_C_SwitchTrigger");
static_assert(offsetof(BP_PalBossTower_C_SwitchTrigger, Temp_bool_Variable) == 0x000000, "Member 'BP_PalBossTower_C_SwitchTrigger::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_SwitchTrigger, Temp_byte_Variable) == 0x000001, "Member 'BP_PalBossTower_C_SwitchTrigger::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_SwitchTrigger, Temp_byte_Variable_1) == 0x000002, "Member 'BP_PalBossTower_C_SwitchTrigger::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_SwitchTrigger, Temp_bool_Variable_1) == 0x000003, "Member 'BP_PalBossTower_C_SwitchTrigger::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_SwitchTrigger, Temp_byte_Variable_2) == 0x000004, "Member 'BP_PalBossTower_C_SwitchTrigger::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_SwitchTrigger, Temp_byte_Variable_3) == 0x000005, "Member 'BP_PalBossTower_C_SwitchTrigger::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_SwitchTrigger, K2Node_Select_Default) == 0x000006, "Member 'BP_PalBossTower_C_SwitchTrigger::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_SwitchTrigger, K2Node_Select_Default_1) == 0x000007, "Member 'BP_PalBossTower_C_SwitchTrigger::K2Node_Select_Default_1' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.UpdateBossBattleState
// 0x0018 (0x0018 - 0x0000)
struct BP_PalBossTower_C_UpdateBossBattleState final
{
public:
	EPalBossBattleState                           NewBossBattleState;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpenOld;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_Guid_ReturnValue;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_UpdateBossBattleState) == 0x000008, "Wrong alignment on BP_PalBossTower_C_UpdateBossBattleState");
static_assert(sizeof(BP_PalBossTower_C_UpdateBossBattleState) == 0x000018, "Wrong size on BP_PalBossTower_C_UpdateBossBattleState");
static_assert(offsetof(BP_PalBossTower_C_UpdateBossBattleState, NewBossBattleState) == 0x000000, "Member 'BP_PalBossTower_C_UpdateBossBattleState::NewBossBattleState' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_UpdateBossBattleState, IsOpenOld) == 0x000001, "Member 'BP_PalBossTower_C_UpdateBossBattleState::IsOpenOld' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_UpdateBossBattleState, CallFunc_GetHUDService_ReturnValue) == 0x000008, "Member 'BP_PalBossTower_C_UpdateBossBattleState::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_UpdateBossBattleState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'BP_PalBossTower_C_UpdateBossBattleState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_UpdateBossBattleState, CallFunc_IsValid_Guid_ReturnValue) == 0x000011, "Member 'BP_PalBossTower_C_UpdateBossBattleState::CallFunc_IsValid_Guid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_UpdateBossBattleState, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000012, "Member 'BP_PalBossTower_C_UpdateBossBattleState::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_UpdateBossBattleState, K2Node_SwitchEnum_CmpSuccess) == 0x000013, "Member 'BP_PalBossTower_C_UpdateBossBattleState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.GetDeadItemDropPoint
// 0x00C0 (0x00C0 - 0x0000)
struct BP_PalBossTower_C_GetDeadItemDropPoint final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_GetDeadItemDropPoint) == 0x000010, "Wrong alignment on BP_PalBossTower_C_GetDeadItemDropPoint");
static_assert(sizeof(BP_PalBossTower_C_GetDeadItemDropPoint) == 0x0000C0, "Wrong size on BP_PalBossTower_C_GetDeadItemDropPoint");
static_assert(offsetof(BP_PalBossTower_C_GetDeadItemDropPoint, ReturnValue) == 0x000000, "Member 'BP_PalBossTower_C_GetDeadItemDropPoint::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_GetDeadItemDropPoint, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000060, "Member 'BP_PalBossTower_C_GetDeadItemDropPoint::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.GetFrontWarpPoint
// 0x00C0 (0x00C0 - 0x0000)
struct BP_PalBossTower_C_GetFrontWarpPoint final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_GetFrontWarpPoint) == 0x000010, "Wrong alignment on BP_PalBossTower_C_GetFrontWarpPoint");
static_assert(sizeof(BP_PalBossTower_C_GetFrontWarpPoint) == 0x0000C0, "Wrong size on BP_PalBossTower_C_GetFrontWarpPoint");
static_assert(offsetof(BP_PalBossTower_C_GetFrontWarpPoint, ReturnValue) == 0x000000, "Member 'BP_PalBossTower_C_GetFrontWarpPoint::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_GetFrontWarpPoint, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000060, "Member 'BP_PalBossTower_C_GetFrontWarpPoint::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

// Function BP_PalBossTower.BP_PalBossTower_C.GetTopWarpPoint
// 0x00C0 (0x00C0 - 0x0000)
struct BP_PalBossTower_C_GetTopWarpPoint final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBossTower_C_GetTopWarpPoint) == 0x000010, "Wrong alignment on BP_PalBossTower_C_GetTopWarpPoint");
static_assert(sizeof(BP_PalBossTower_C_GetTopWarpPoint) == 0x0000C0, "Wrong size on BP_PalBossTower_C_GetTopWarpPoint");
static_assert(offsetof(BP_PalBossTower_C_GetTopWarpPoint, ReturnValue) == 0x000000, "Member 'BP_PalBossTower_C_GetTopWarpPoint::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBossTower_C_GetTopWarpPoint, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000060, "Member 'BP_PalBossTower_C_GetTopWarpPoint::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

}

