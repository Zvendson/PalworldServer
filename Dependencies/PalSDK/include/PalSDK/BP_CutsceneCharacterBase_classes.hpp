#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_CutsceneCharacterBase.BP_CutsceneCharacterBase_C
// 0x0018 (0x02A8 - 0x0290)
class ABP_CutsceneCharacterBase_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CutsceneCharacterBase(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CutsceneCharacterBase_C">();
	}
	static class ABP_CutsceneCharacterBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CutsceneCharacterBase_C>();
	}
};
static_assert(alignof(ABP_CutsceneCharacterBase_C) == 0x000008, "Wrong alignment on ABP_CutsceneCharacterBase_C");
static_assert(sizeof(ABP_CutsceneCharacterBase_C) == 0x0002A8, "Wrong size on ABP_CutsceneCharacterBase_C");
static_assert(offsetof(ABP_CutsceneCharacterBase_C, UberGraphFrame) == 0x000290, "Member 'ABP_CutsceneCharacterBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CutsceneCharacterBase_C, Cube) == 0x000298, "Member 'ABP_CutsceneCharacterBase_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_CutsceneCharacterBase_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_CutsceneCharacterBase_C::DefaultSceneRoot' has a wrong offset!");

}

