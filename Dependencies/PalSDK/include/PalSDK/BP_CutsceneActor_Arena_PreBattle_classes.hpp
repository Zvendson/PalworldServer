#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_CutsceneActorBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_CutsceneActor_Arena_PreBattle.BP_CutsceneActor_Arena_PreBattle_C
// 0x0010 (0x0328 - 0x0318)
class ABP_CutsceneActor_Arena_PreBattle_C final : public ABP_CutsceneActorBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalCutsceneArenaPreBattleBindParameter* PreBattleBindParameter;                            // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle(int32 EntryPoint);
	void OnPrePlayCutscene();
	void SetBindParameter(class UPalCutsceneBindParameter* BindParameter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CutsceneActor_Arena_PreBattle_C">();
	}
	static class ABP_CutsceneActor_Arena_PreBattle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CutsceneActor_Arena_PreBattle_C>();
	}
};
static_assert(alignof(ABP_CutsceneActor_Arena_PreBattle_C) == 0x000008, "Wrong alignment on ABP_CutsceneActor_Arena_PreBattle_C");
static_assert(sizeof(ABP_CutsceneActor_Arena_PreBattle_C) == 0x000328, "Wrong size on ABP_CutsceneActor_Arena_PreBattle_C");
static_assert(offsetof(ABP_CutsceneActor_Arena_PreBattle_C, UberGraphFrame) == 0x000318, "Member 'ABP_CutsceneActor_Arena_PreBattle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CutsceneActor_Arena_PreBattle_C, PreBattleBindParameter) == 0x000320, "Member 'ABP_CutsceneActor_Arena_PreBattle_C::PreBattleBindParameter' has a wrong offset!");

}

