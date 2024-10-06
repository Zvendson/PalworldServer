#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_NPCSpawnPointComponent.BP_NPCSpawnPointComponent_C
// 0x0030 (0x0620 - 0x05F0)
class UBP_NPCSpawnPointComponent_C final : public UStaticMeshComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FPalDataTableRowName_PalHumanData      NPCName;                                           // 0x05F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 OverrideDefaultAction;                             // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         OverrideLevel;                                     // 0x0608(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60C[0x4];                                      // 0x060C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_NPCPathWalkPointComponent_1_C*> WalkPointRefarence;                                // 0x0610(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_BP_NPCSpawnPointComponent(int32 EntryPoint);
	void GetOneSpawnInfo(struct FF_NPCOnePointSpawnInfo* Info);
	void ReceiveBeginPlay();
	void Setup_Walk_Point_Ref();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCSpawnPointComponent_C">();
	}
	static class UBP_NPCSpawnPointComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NPCSpawnPointComponent_C>();
	}
};
static_assert(alignof(UBP_NPCSpawnPointComponent_C) == 0x000010, "Wrong alignment on UBP_NPCSpawnPointComponent_C");
static_assert(sizeof(UBP_NPCSpawnPointComponent_C) == 0x000620, "Wrong size on UBP_NPCSpawnPointComponent_C");
static_assert(offsetof(UBP_NPCSpawnPointComponent_C, UberGraphFrame) == 0x0005F0, "Member 'UBP_NPCSpawnPointComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_NPCSpawnPointComponent_C, NPCName) == 0x0005F8, "Member 'UBP_NPCSpawnPointComponent_C::NPCName' has a wrong offset!");
static_assert(offsetof(UBP_NPCSpawnPointComponent_C, OverrideDefaultAction) == 0x000600, "Member 'UBP_NPCSpawnPointComponent_C::OverrideDefaultAction' has a wrong offset!");
static_assert(offsetof(UBP_NPCSpawnPointComponent_C, OverrideLevel) == 0x000608, "Member 'UBP_NPCSpawnPointComponent_C::OverrideLevel' has a wrong offset!");
static_assert(offsetof(UBP_NPCSpawnPointComponent_C, WalkPointRefarence) == 0x000610, "Member 'UBP_NPCSpawnPointComponent_C::WalkPointRefarence' has a wrong offset!");

}

