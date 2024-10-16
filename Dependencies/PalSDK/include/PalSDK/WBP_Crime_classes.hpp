#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Crime.WBP_Crime_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_Crime_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Crime_Found_C*                     WBP_Crime_Found;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Crime_RankUp_C*                    WBP_Crime_RankUp;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Crime_Scene_C*                     WBP_Crime_Scene;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrimeList_C*                       WBP_CrimeList;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ClearCrimeList();
	void CrimeBeFound(const TArray<class FName>& CrimeIds);
	void ExecuteUbergraph_WBP_Crime(int32 EntryPoint);
	void SetCrime(bool Crime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Crime_C">();
	}
	static class UWBP_Crime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Crime_C>();
	}
};
static_assert(alignof(UWBP_Crime_C) == 0x000008, "Wrong alignment on UWBP_Crime_C");
static_assert(sizeof(UWBP_Crime_C) == 0x0002A0, "Wrong size on UWBP_Crime_C");
static_assert(offsetof(UWBP_Crime_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Crime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_C, WBP_Crime_Found) == 0x000280, "Member 'UWBP_Crime_C::WBP_Crime_Found' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_C, WBP_Crime_RankUp) == 0x000288, "Member 'UWBP_Crime_C::WBP_Crime_RankUp' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_C, WBP_Crime_Scene) == 0x000290, "Member 'UWBP_Crime_C::WBP_Crime_Scene' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_C, WBP_CrimeList) == 0x000298, "Member 'UWBP_Crime_C::WBP_CrimeList' has a wrong offset!");

}

