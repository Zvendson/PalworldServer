#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalBiomeEffectController.BP_PalBiomeEffectController_C
// 0x0018 (0x00B8 - 0x00A0)
class UBP_PalBiomeEffectController_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EPalBiomeType                                 Current_Biome_Type;                                // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      Current_Particle_System;                           // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalBiomeEffectController(int32 EntryPoint);
	void On_Biome_Enter(EPalBiomeType Biome_Type);
	void On_Biome_Exit();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBiomeEffectController_C">();
	}
	static class UBP_PalBiomeEffectController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalBiomeEffectController_C>();
	}
};
static_assert(alignof(UBP_PalBiomeEffectController_C) == 0x000008, "Wrong alignment on UBP_PalBiomeEffectController_C");
static_assert(sizeof(UBP_PalBiomeEffectController_C) == 0x0000B8, "Wrong size on UBP_PalBiomeEffectController_C");
static_assert(offsetof(UBP_PalBiomeEffectController_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_PalBiomeEffectController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalBiomeEffectController_C, Current_Biome_Type) == 0x0000A8, "Member 'UBP_PalBiomeEffectController_C::Current_Biome_Type' has a wrong offset!");
static_assert(offsetof(UBP_PalBiomeEffectController_C, Current_Particle_System) == 0x0000B0, "Member 'UBP_PalBiomeEffectController_C::Current_Particle_System' has a wrong offset!");

}

