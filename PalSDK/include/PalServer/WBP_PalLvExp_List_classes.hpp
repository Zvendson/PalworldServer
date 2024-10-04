#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalLvExp_List.WBP_PalLvExp_List_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_PalLvExp_List_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLvExp_C*                        WBP_PalLvExp_0;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLvExp_C*                        WBP_PalLvExp_1;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLvExp_C*                        WBP_PalLvExp_2;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLvExp_C*                        WBP_PalLvExp_3;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLvExp_C*                        WBP_PalLvExp_4;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_PalLvExp_C*>                ChildList;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void Anm_Open(int32 Index_0);
	void Anm_Open_All();
	void ExecuteUbergraph_WBP_PalLvExp_List(int32 EntryPoint);
	void OnInitialized();
	void Setup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalLvExp_List_C">();
	}
	static class UWBP_PalLvExp_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalLvExp_List_C>();
	}
};
static_assert(alignof(UWBP_PalLvExp_List_C) == 0x000008, "Wrong alignment on UWBP_PalLvExp_List_C");
static_assert(sizeof(UWBP_PalLvExp_List_C) == 0x0002C0, "Wrong size on UWBP_PalLvExp_List_C");
static_assert(offsetof(UWBP_PalLvExp_List_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PalLvExp_List_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_List_C, InvalidationBox_0) == 0x000280, "Member 'UWBP_PalLvExp_List_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_List_C, WBP_PalLvExp_0) == 0x000288, "Member 'UWBP_PalLvExp_List_C::WBP_PalLvExp_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_List_C, WBP_PalLvExp_1) == 0x000290, "Member 'UWBP_PalLvExp_List_C::WBP_PalLvExp_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_List_C, WBP_PalLvExp_2) == 0x000298, "Member 'UWBP_PalLvExp_List_C::WBP_PalLvExp_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_List_C, WBP_PalLvExp_3) == 0x0002A0, "Member 'UWBP_PalLvExp_List_C::WBP_PalLvExp_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_List_C, WBP_PalLvExp_4) == 0x0002A8, "Member 'UWBP_PalLvExp_List_C::WBP_PalLvExp_4' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_List_C, ChildList) == 0x0002B0, "Member 'UWBP_PalLvExp_List_C::ChildList' has a wrong offset!");

}

