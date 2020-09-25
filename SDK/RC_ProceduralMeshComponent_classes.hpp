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

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.KismetProceduralMeshLibrary");
		return ptr;
	}


	void STATIC_SliceProceduralMesh(class UProceduralMeshComponent** InProcMesh, struct FVector* PlanePosition, struct FVector* PlaneNormal, bool* bCreateOtherHalf, EProcMeshSliceCapOption* CapOption, class UMaterialInterface** CapMaterial, class UProceduralMeshComponent** OutOtherHalfProcMesh);
	void STATIC_GetSectionFromStaticMesh(class UStaticMesh** InMesh, int* LODIndex, int* SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	void STATIC_GetSectionFromProceduralMesh(class UProceduralMeshComponent** InProcMesh, int* SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	void STATIC_GenerateBoxMesh(struct FVector* BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	void STATIC_CreateGridMeshWelded(int* NumX, int* NumY, float* GridSpacing, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs);
	void STATIC_CreateGridMeshTriangles(int* NumX, int* NumY, bool* bWinding, TArray<int>* Triangles);
	void STATIC_CreateGridMeshSplit(int* NumX, int* NumY, float* GridSpacing, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s);
	void STATIC_CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent** StaticMeshComponent, int* LODIndex, class UProceduralMeshComponent** ProcMeshComponent, bool* bCreateCollision);
	void STATIC_ConvertQuadToTriangles(int* Vert0, int* Vert1, int* Vert2, int* Vert3, TArray<int>* Triangles);
	void STATIC_CalculateTangentsForMesh(TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector2D>* UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents);
};


// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0070 (0x04A0 - 0x0430)
class UProceduralMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	unsigned char                                      bUseComplexAsSimpleCollision;                             // 0x0438(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAsyncCooking;                                         // 0x0439(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  ProcMeshBodySetup;                                        // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FProcMeshSection>                    ProcMeshSections;                                         // 0x0448(0x0010) (ZeroConstructor)
	TArray<struct FKConvexElem>                        CollisionConvexElems;                                     // 0x0458(0x0010) (ZeroConstructor)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0468(0x001C) (ZeroConstructor, IsPlainOldData)
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                      // 0x0488(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0498(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.ProceduralMeshComponent");
		return ptr;
	}


	void UpdateMeshSection_LinearColor(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FVector2D>* UV1, TArray<struct FVector2D>* UV2, TArray<struct FVector2D>* UV3, TArray<struct FLinearColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents);
	void UpdateMeshSection(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents);
	void SetMeshSectionVisible(int* SectionIndex, bool* bNewVisibility);
	bool IsMeshSectionVisible(int* SectionIndex);
	int GetNumSections();
	void CreateMeshSection_LinearColor(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FVector2D>* UV1, TArray<struct FVector2D>* UV2, TArray<struct FVector2D>* UV3, TArray<struct FLinearColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents, bool* bCreateCollision);
	void CreateMeshSection(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents, bool* bCreateCollision);
	void ClearMeshSection(int* SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(TArray<struct FVector>* ConvexVerts);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
