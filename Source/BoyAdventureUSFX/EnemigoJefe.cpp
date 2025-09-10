// EnemigoJefe.cpp
#include "EnemigoJefe.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoJefe::AEnemigoJefe()
{
    // Asignar el mesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Goomba/Goomba.Goomba'"));
    if (MeshAsset.Object)
    {
        MeshEnemigo->SetStaticMesh(MeshAsset.Object);
    }
    Velocidad = 200.0f; // Más rápido
    bEstaVolando = false;
    TiempoCaminando = 0.0f;
    TiempoTranscurrido = 0.0f;
}

void AEnemigoJefe::BeginPlay()
{
    Super::BeginPlay();
    this->calcularVida();
}

void AEnemigoJefe::Moverse(float DeltaTime)
{
    FVector NuevaPosicion = GetActorLocation();
    TiempoCaminando += DeltaTime;
    TiempoTranscurrido += DeltaTime;

    // Cambiar a modo volador después de TiempoAntesVolar
    if (TiempoCaminando >= TiempoAntesVolar)
    {
        bEstaVolando = true;
    }

    if (bEstaVolando)
    {
        // Movimiento volador (similar a EnemigoVolador pero más rápido)
        NuevaPosicion.Z += FMath::Sin(TiempoTranscurrido * FrecuenciaVuelo) * AmplitudVuelo * DeltaTime;
        NuevaPosicion.X += Velocidad * DeltaTime;
    }
    else
    {
        // Movimiento terrestre
        NuevaPosicion.X += Velocidad * DeltaTime;
    }

    SetActorLocation(NuevaPosicion);
}

void AEnemigoJefe::calcularVida() {
    // Imprimir "hola" en la pantalla usando GEngine
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("CALCULANDO VIDA"));
    }
}