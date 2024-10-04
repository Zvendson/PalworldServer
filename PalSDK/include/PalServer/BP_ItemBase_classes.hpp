#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ItemBase.BP_ItemBase_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_ItemBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ItemBase(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemBase_C">();
	}
	static class ABP_ItemBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ItemBase_C>();
	}
};
static_assert(alignof(ABP_ItemBase_C) == 0x000008, "Wrong alignment on ABP_ItemBase_C");
static_assert(sizeof(ABP_ItemBase_C) == 0x0002B0, "Wrong size on ABP_ItemBase_C");
static_assert(offsetof(ABP_ItemBase_C, UberGraphFrame) == 0x000290, "Member 'ABP_ItemBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ItemBase_C, Niagara) == 0x000298, "Member 'ABP_ItemBase_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_ItemBase_C, StaticMesh) == 0x0002A0, "Member 'ABP_ItemBase_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ItemBase_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_ItemBase_C::DefaultSceneRoot' has a wrong offset!");

}

