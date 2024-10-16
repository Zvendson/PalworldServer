#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Crime_Scene.WBP_Crime_Scene_C
// 0x0020 (0x0298 - 0x0278)
class UWBP_Crime_Scene_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Loop;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentEnable;                                     // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Crime_Scene(int32 EntryPoint);
	void Finished_4B4F0B354CEB0EB1043AE5B3C6D7077A();
	void Finished_F33B774D46BB4A7E03FF64B35586069D();
	void SetCrimeSceneEnable(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Crime_Scene_C">();
	}
	static class UWBP_Crime_Scene_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Crime_Scene_C>();
	}
};
static_assert(alignof(UWBP_Crime_Scene_C) == 0x000008, "Wrong alignment on UWBP_Crime_Scene_C");
static_assert(sizeof(UWBP_Crime_Scene_C) == 0x000298, "Wrong size on UWBP_Crime_Scene_C");
static_assert(offsetof(UWBP_Crime_Scene_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Crime_Scene_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_Scene_C, Anm_Open) == 0x000280, "Member 'UWBP_Crime_Scene_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_Scene_C, Anm_Loop) == 0x000288, "Member 'UWBP_Crime_Scene_C::Anm_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_Scene_C, CurrentEnable) == 0x000290, "Member 'UWBP_Crime_Scene_C::CurrentEnable' has a wrong offset!");

}

