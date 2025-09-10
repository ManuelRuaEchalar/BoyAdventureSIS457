// EnemigoVolador.cpp
#include "EnemigoVolador.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoVolador::AEnemigoVolador()
{
    // Asignar el mesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
    if (MeshAsset.Object)
    {
        MeshEnemigo->SetStaticMesh(MeshAsset.Object);
    }
    Velocidad = 150.0f;
    TiempoTranscurrido = 0.0f;
}

void AEnemigoVolador::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoVolador::Moverse(float DeltaTime)
{
    // Movimiento sinusoidal en el eje Z para simular vuelo
    FVector NuevaPosicion = GetActorLocation();
    TiempoTranscurrido += DeltaTime;
    NuevaPosicion.Z += FMath::Sin(TiempoTranscurrido * FrecuenciaVuelo) * AmplitudVuelo * DeltaTime;
    NuevaPosicion.X += Velocidad * DeltaTime;
    SetActorLocation(NuevaPosicion);
}