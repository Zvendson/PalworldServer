#pragma once

#include "Basic.hpp"

#include "RiverSplineElement_structs.hpp"


namespace PalSDK
{

// UserDefinedStruct SplinesInEditor.SplinesInEditor
// 0x0080 (0x0080 - 0x0000)
struct FSplinesInEditor final
{
public:
	class FString                                 SplineName_2_4D622F14438C9A95770AEA9B90C95E14;     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FRiverSplineElement                    SplineProperties_6_D4A203BA4C527B07DC3A6E8BBBEB5970; // 0x0010(0x0070)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSplinesInEditor) == 0x000008, "Wrong alignment on FSplinesInEditor");
static_assert(sizeof(FSplinesInEditor) == 0x000080, "Wrong size on FSplinesInEditor");
static_assert(offsetof(FSplinesInEditor, SplineName_2_4D622F14438C9A95770AEA9B90C95E14) == 0x000000, "Member 'FSplinesInEditor::SplineName_2_4D622F14438C9A95770AEA9B90C95E14' has a wrong offset!");
static_assert(offsetof(FSplinesInEditor, SplineProperties_6_D4A203BA4C527B07DC3A6E8BBBEB5970) == 0x000010, "Member 'FSplinesInEditor::SplineProperties_6_D4A203BA4C527B07DC3A6E8BBBEB5970' has a wrong offset!");

}

