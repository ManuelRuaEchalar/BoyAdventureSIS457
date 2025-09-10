// EnemigoTerrestre.cpp
#include "EnemigoTerrestre.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoTerrestre::AEnemigoTerrestre()
{
    // Asignar el mesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (MeshAsset.Object)
    {
        MeshEnemigo->SetStaticMesh(MeshAsset.Object);
    }
    Velocidad = 100.0f;
}

void AEnemigoTerrestre::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoTerrestre::Moverse(float DeltaTime)
{
    // Movimiento simple en el eje X
    FVector NuevaPosicion = GetActorLocation();
    NuevaPosicion.X += Velocidad * DeltaTime;
    SetActorLocation(NuevaPosicion);
}