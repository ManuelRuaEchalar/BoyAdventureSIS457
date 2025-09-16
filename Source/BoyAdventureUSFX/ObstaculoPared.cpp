#include "ObstaculoPared.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AObstaculoPared::AObstaculoPared() : AObstaculo()
{
    // Constructor logic specific to AObstaculoPared can be added here
    Estilo = "Pared no definido";
    Material = "Material no definico";

    // Usar la malla de pared con puerta especificada
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshWallDoor(
        TEXT("StaticMesh'/Game/StarterContent/Architecture/Wall_Door_400x400.Wall_Door_400x400'")
    );

    if (MeshWallDoor.Succeeded() && MallaObstaculo)
    {
        MallaObstaculo->SetStaticMesh(MeshWallDoor.Object);
    }

    // Cargar el material
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(
        TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_Beveled.M_Brick_Clay_Beveled'")
    );

    if (MaterialAsset.Succeeded() && MallaObstaculo)
    {
        MallaObstaculo->SetMaterial(0, MaterialAsset.Object); // El índice 0 es el primer slot de material
    }
}

void AObstaculoPared::BeginPlay()
{
}

void AObstaculoPared::Tick(float DeltaTime)
{
}