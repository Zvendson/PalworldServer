#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PalIncidentRandomActionBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalIncidentRandomActionMerchantwithPAL.BP_PalIncidentRandomActionMerchantwithPAL_C
// 0x0030 (0x0080 - 0x0050)
class UBP_PalIncidentRandomActionMerchantwithPAL_C final : public UBP_PalIncidentRandomActionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PalIncidentRandomActionMerchantwithPAL_C; // 0x0050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class APalNPC*>                        SpawnNPCList;                                      // 0x0058(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APalMonsterCharacter*>           SpawnMonsterList;                                  // 0x0068(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          IsBinding;                                         // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindOnDamage();
	void CollectSpawnCharacter();
	void ExecuteUbergraph_BP_PalIncidentRandomActionMerchantwithPAL(int32 EntryPoint);
	void OnAllNpcSpawned();
	void OnDamage(const struct FPalDamageResult& DamageResult);
	void OnTerminate();
	void UnbindOnDamage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalIncidentRandomActionMerchantwithPAL_C">();
	}
	static class UBP_PalIncidentRandomActionMerchantwithPAL_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalIncidentRandomActionMerchantwithPAL_C>();
	}
};
static_assert(alignof(UBP_PalIncidentRandomActionMerchantwithPAL_C) == 0x000008, "Wrong alignment on UBP_PalIncidentRandomActionMerchantwithPAL_C");
static_assert(sizeof(UBP_PalIncidentRandomActionMerchantwithPAL_C) == 0x000080, "Wrong size on UBP_PalIncidentRandomActionMerchantwithPAL_C");
static_assert(offsetof(UBP_PalIncidentRandomActionMerchantwithPAL_C, UberGraphFrame_BP_PalIncidentRandomActionMerchantwithPAL_C) == 0x000050, "Member 'UBP_PalIncidentRandomActionMerchantwithPAL_C::UberGraphFrame_BP_PalIncidentRandomActionMerchantwithPAL_C' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandomActionMerchantwithPAL_C, SpawnNPCList) == 0x000058, "Member 'UBP_PalIncidentRandomActionMerchantwithPAL_C::SpawnNPCList' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandomActionMerchantwithPAL_C, SpawnMonsterList) == 0x000068, "Member 'UBP_PalIncidentRandomActionMerchantwithPAL_C::SpawnMonsterList' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandomActionMerchantwithPAL_C, IsBinding) == 0x000078, "Member 'UBP_PalIncidentRandomActionMerchantwithPAL_C::IsBinding' has a wrong offset!");

}

