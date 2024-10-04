#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalGamemode.BP_PalGamemode_C
// 0x0018 (0x03A0 - 0x0388)
class ABP_PalGamemode_C final : public APalGameMode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                   DefaultPlayerStartTag;                             // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindFunction_InvaderManager(TDelegate<void(const struct FTransform& Transform)> Spawn_Dummy_Nav_Invoker_Delegate);
	class AActor* ChoosePlayerStart(class AController* Player);
	void ExecuteUbergraph_BP_PalGamemode(int32 EntryPoint);
	void InpActEvt_DebugWindow_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ReceiveBeginPlay();
	class AActor* SpawmDummyNavInvoker(const struct FTransform& Transform);
	void _________________________0(int32 SoundRadius, const struct FVector& EmitLocation, class AActor* Emitter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalGamemode_C">();
	}
	static class ABP_PalGamemode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalGamemode_C>();
	}
};
static_assert(alignof(ABP_PalGamemode_C) == 0x000008, "Wrong alignment on ABP_PalGamemode_C");
static_assert(sizeof(ABP_PalGamemode_C) == 0x0003A0, "Wrong size on ABP_PalGamemode_C");
static_assert(offsetof(ABP_PalGamemode_C, UberGraphFrame) == 0x000388, "Member 'ABP_PalGamemode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalGamemode_C, DefaultSceneRoot) == 0x000390, "Member 'ABP_PalGamemode_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PalGamemode_C, DefaultPlayerStartTag) == 0x000398, "Member 'ABP_PalGamemode_C::DefaultPlayerStartTag' has a wrong offset!");

}

