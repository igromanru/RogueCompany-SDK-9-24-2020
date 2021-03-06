#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Minimap.Minimap_C
// 0x02E0 (0x0880 - 0x05A0)
class UMinimap_C : public UKSMinimapWidgetBase
{
public:
	class UTextBlock*                                  DirectionText;                                            // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      HeadingArrow;                                             // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  H e a d i n g T;                                          // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    IconOverlay;                                              // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    MinimapOverlay;                                           // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PlayerArrow;                                              // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      RadarSweepImage;                                          // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      StaticNoise;                                              // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  WorkingTexture;                                           // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKSMinimapRendererBase*                      MinimapRenderer;                                          // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BkgDynMat;                                                // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AKSNamedLocation*>                    NamedLocationList;                                        // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              GridWorldSize;                                            // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UUserWidget*>                         GridLines;                                                // 0x0610(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	int                                                DisplayAngle;                                             // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      RoyaleMode;                                               // 0x0624(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKSRoyaleSafeZone*                           RoyaleZone;                                               // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentSweepLocation;                                     // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentSweepSpeed;                                        // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ShouldBeVisible;                                          // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable;                                       // 0x0639(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x063C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	float                                              Temp_float_Variable;                                      // 0x064C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable_2;                                    // 0x0650(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   Temp_byte_Variable;                                       // 0x0654(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_Default;                                    // 0x0658(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   Temp_byte_Variable_2;                                     // 0x065C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FGeometry                                   K2Node_Event_MyGeometry;                                  // 0x0660(0x0058) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_InDeltaTime;                                 // 0x06B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_GetDynamicMaterial_ReturnValue;                  // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x06C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Minimap.Minimap_C.CallFunc_GetMinimapTextureForMap_ReturnValue
	unsigned char                                      Temp_bool_Variable_2;                                     // 0x06F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UTexture2D*                                  K2Node_DynamicCast_AsTexture_2D;                          // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess;                              // 0x0700(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AKSMinimapRendererBase*>              CallFunc_GetAllActorsOfClass_OutActors;                   // 0x0708(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AKSMinimapRendererBase*                      CallFunc_Array_Get_Item;                                  // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   Temp_byte_Variable_3;                                     // 0x0720(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   Temp_byte_Variable_4;                                     // 0x0721(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APUMG_HUD*                                   K2Node_Event_hud;                                         // 0x0728(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSGameState*                                K2Node_DynamicCast_AsKSGame_State;                        // 0x0730(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_2;                            // 0x0738(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class UKSHUDInterface>            K2Node_DynamicCast_AsKSHUDInterface;                      // 0x0740(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_3;                            // 0x0750(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_Scrambled;                                   // 0x0751(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   K2Node_Select_Default_2;                                  // 0x0752(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSGameState_RoyaleBase*                     K2Node_DynamicCast_AsKSGame_State_Royale_Base;            // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_4;                            // 0x0760(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_TimeUntilShrink;                       // 0x0764(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_3;                                     // 0x0768(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSGameState_RoyaleBase*                     K2Node_DynamicCast_AsKSGame_State_Royale_Base_2;          // 0x0770(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_5;                            // 0x0778(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   K2Node_Select_Default_3;                                  // 0x0779(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x077C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x0780(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x0784(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	ESlateVisibility                                   Temp_byte_Variable_5;                                     // 0x0794(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     Temp_object_Variable;                                     // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                   // 0x07A0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UTexture2D*                                  K2Node_DynamicCast_AsTexture_2D_2;                        // 0x07B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_6;                            // 0x07B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetTransformInfo_NormalizedX;                    // 0x07BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetTransformInfo_NormalizedY;                    // 0x07C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetTransformInfo_Rotation;                       // 0x07C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetTransformInfo_Scale;                          // 0x07C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   Temp_byte_Variable_6;                                     // 0x07CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_4;                                     // 0x07CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable_3;                                    // 0x07D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   K2Node_Select_Default_4;                                  // 0x07D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X_2;                               // 0x07D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y_2;                               // 0x07DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X_3;                               // 0x07E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y_3;                               // 0x07E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x07E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable_4;                                    // 0x07F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     K2Node_CustomEvent_Loaded;                                // 0x0800(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_5;                                     // 0x0808(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_Default_5;                                  // 0x080C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor_2;                          // 0x0810(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x0820(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x082C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x0838(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Roll;                               // 0x0844(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Pitch;                              // 0x0848(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Yaw;                                // 0x084C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x0850(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x0854(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0858(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X_2;                                 // 0x085C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y_2;                                 // 0x0860(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z_2;                                 // 0x0864(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor_3;                          // 0x0868(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0878(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Minimap.Minimap_C");
		return ptr;
	}


	void TickVisibility(float* bpp__DeltaTime__pf);
	void Tick(struct FGeometry* bpp__MyGeometry__pf, float* bpp__InDeltaTime__pf);
	void SetScrambleTexture();
	void SetRoyaleMode(bool* bpp__IsRoyaleMode__pf);
	void OnScrambleStateChanged(bool* bpp__Scrambled__pf);
	void OnLoaded_DB612B4F430AF7AB8BD23B968AE6C16E(class UObject** bpp__Loaded__pf);
	void Handle_Royale_Zone_Wait(float* bpp__TimeUntilShrink__pf);
	void GetTransformInfo(float* bpp__NormalizedX__pf, float* bpp__NormalizedY__pf, float* bpp__Rotation__pf, float* bpp__Scale__pf);
	void GetMapTexture();
	void FindMinimapRenderer();
	void ExecuteUbergraph_Minimap_2(int* bpp__EntryPoint__pf);
	void EvaluateRelativeHeight(struct FVector* bpp__SubjectxLocation__pfT, EMiniMapRelativeHeight* bpp__RelativeHeight__pf);
	void EvaluateIconPosition(struct FVector* bpp__SubjectLocation__pf, class UUserWidget** bpp__Icon__pf);
	class UKSMapIconWidgetBase* CreateNewIconWidget(class UClass** bpp__WidgetClass__pf, int* bpp__UniqueId__pf, class AKSPlayerState** bpp__CreatingPlayer__pf, EDisplayType* bpp__ParentMapDisplayType__pf, class AActor** bpp__AssociatedActor__pf, class UObject** bpp__AssociatedObject__pf, struct FVector* bpp__DefaultLocation__pf, float* bpp__Lifespan__pf);
	void Construct();
	void CanShowMinimap(bool* bpp__CanShow__pf);
	void OnRoyaleZoneWait__DelegateSignature(float* bpp__TimeUntilShrink__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
