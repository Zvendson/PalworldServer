#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalStaticMeshImposterChunk.BP_PalStaticMeshImposterChunk_C
// 0x0018 (0x02B8 - 0x02A0)
class ABP_PalStaticMeshImposterChunk_C final : public APalStaticMeshImposterChunk
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void Dev_SetChunkVisible(const bool bVisible);
	void ExecuteUbergraph_BP_PalStaticMeshImposterChunk(int32 EntryPoint);
	void OnSetChunkGridSize(const int32 NewChunkGridSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalStaticMeshImposterChunk_C">();
	}
	static class ABP_PalStaticMeshImposterChunk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalStaticMeshImposterChunk_C>();
	}
};
static_assert(alignof(ABP_PalStaticMeshImposterChunk_C) == 0x000008, "Wrong alignment on ABP_PalStaticMeshImposterChunk_C");
static_assert(sizeof(ABP_PalStaticMeshImposterChunk_C) == 0x0002B8, "Wrong size on ABP_PalStaticMeshImposterChunk_C");
static_assert(offsetof(ABP_PalStaticMeshImposterChunk_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_PalStaticMeshImposterChunk_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalStaticMeshImposterChunk_C, Box) == 0x0002A8, "Member 'ABP_PalStaticMeshImposterChunk_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_PalStaticMeshImposterChunk_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_PalStaticMeshImposterChunk_C::DefaultSceneRoot' has a wrong offset!");

}

