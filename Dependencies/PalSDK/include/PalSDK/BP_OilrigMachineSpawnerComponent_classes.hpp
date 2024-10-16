#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C
// 0x0010 (0x00F8 - 0x00E8)
class UBP_OilrigMachineSpawnerComponent_C final : public UPalOilrigMachineSpawnerComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void Despawn_Delegate(const struct FPalInstanceID& ID);
	void DespawnMachine();
	void DespawnMecha();
	void Destroy_by_Dead();
	void ExecuteUbergraph_BP_OilrigMachineSpawnerComponent(int32 EntryPoint);
	void On_Dead(const struct FPalDeadInfo& DeadInfo);
	void Spawn_Delegate(const struct FPalInstanceID& ID);
	void SpawnMachine(const struct FVector& Location, const struct FRotator& Rotate);
	void SpawnMecha(const struct FVector& Location, const struct FRotator& Rotate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OilrigMachineSpawnerComponent_C">();
	}
	static class UBP_OilrigMachineSpawnerComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_OilrigMachineSpawnerComponent_C>();
	}
};
static_assert(alignof(UBP_OilrigMachineSpawnerComponent_C) == 0x000008, "Wrong alignment on UBP_OilrigMachineSpawnerComponent_C");
static_assert(sizeof(UBP_OilrigMachineSpawnerComponent_C) == 0x0000F8, "Wrong size on UBP_OilrigMachineSpawnerComponent_C");
static_assert(offsetof(UBP_OilrigMachineSpawnerComponent_C, UberGraphFrame) == 0x0000E8, "Member 'UBP_OilrigMachineSpawnerComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_OilrigMachineSpawnerComponent_C, Handle) == 0x0000F0, "Member 'UBP_OilrigMachineSpawnerComponent_C::Handle' has a wrong offset!");

}

