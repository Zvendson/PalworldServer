#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalPlayerState.BP_PalPlayerState_C
// 0x0010 (0x08A0 - 0x0890)
class ABP_PalPlayerState_C final : public APalPlayerState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0890(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalPlayerState(int32 EntryPoint);
	void LoadTitleLevel(bool bIsSaveSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalPlayerState_C">();
	}
	static class ABP_PalPlayerState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalPlayerState_C>();
	}
};
static_assert(alignof(ABP_PalPlayerState_C) == 0x000010, "Wrong alignment on ABP_PalPlayerState_C");
static_assert(sizeof(ABP_PalPlayerState_C) == 0x0008A0, "Wrong size on ABP_PalPlayerState_C");
static_assert(offsetof(ABP_PalPlayerState_C, UberGraphFrame) == 0x000890, "Member 'ABP_PalPlayerState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerState_C, DefaultSceneRoot) == 0x000898, "Member 'ABP_PalPlayerState_C::DefaultSceneRoot' has a wrong offset!");

}

