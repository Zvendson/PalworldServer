#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ExplosionAttackBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Explosion_Launcher_NPC.BP_Explosion_Launcher_NPC_C
// 0x0010 (0x02E0 - 0x02D0)
class ABP_Explosion_Launcher_NPC_C final : public ABP_ExplosionAttackBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Explosion_Launcher_NPC_C;        // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Explosive;                                         // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
	void ExecuteUbergraph_BP_Explosion_Launcher_NPC(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Explosion_Launcher_NPC_C">();
	}
	static class ABP_Explosion_Launcher_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Explosion_Launcher_NPC_C>();
	}
};
static_assert(alignof(ABP_Explosion_Launcher_NPC_C) == 0x000008, "Wrong alignment on ABP_Explosion_Launcher_NPC_C");
static_assert(sizeof(ABP_Explosion_Launcher_NPC_C) == 0x0002E0, "Wrong size on ABP_Explosion_Launcher_NPC_C");
static_assert(offsetof(ABP_Explosion_Launcher_NPC_C, UberGraphFrame_BP_Explosion_Launcher_NPC_C) == 0x0002D0, "Member 'ABP_Explosion_Launcher_NPC_C::UberGraphFrame_BP_Explosion_Launcher_NPC_C' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_Launcher_NPC_C, Explosive) == 0x0002D8, "Member 'ABP_Explosion_Launcher_NPC_C::Explosive' has a wrong offset!");

}

