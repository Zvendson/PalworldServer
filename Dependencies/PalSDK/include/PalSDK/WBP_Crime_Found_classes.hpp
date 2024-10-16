#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Crime_Found.WBP_Crime_Found_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_Crime_Found_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Displaying;                                        // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Crime_Ids;                                         // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ClearFoundList();
	void ExecuteUbergraph_WBP_Crime_Found(int32 EntryPoint);
	void Finished_DEA8290E42785E70DA2914B20F7C172E();
	void SetCrimesFound(const TArray<class FName>& CrimeIds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Crime_Found_C">();
	}
	static class UWBP_Crime_Found_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Crime_Found_C>();
	}
};
static_assert(alignof(UWBP_Crime_Found_C) == 0x000008, "Wrong alignment on UWBP_Crime_Found_C");
static_assert(sizeof(UWBP_Crime_Found_C) == 0x0002A8, "Wrong size on UWBP_Crime_Found_C");
static_assert(offsetof(UWBP_Crime_Found_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Crime_Found_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_Found_C, Anm_Open) == 0x000280, "Member 'UWBP_Crime_Found_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_Found_C, VerticalBox_0) == 0x000288, "Member 'UWBP_Crime_Found_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_Found_C, Displaying) == 0x000290, "Member 'UWBP_Crime_Found_C::Displaying' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_Found_C, Crime_Ids) == 0x000298, "Member 'UWBP_Crime_Found_C::Crime_Ids' has a wrong offset!");

}

