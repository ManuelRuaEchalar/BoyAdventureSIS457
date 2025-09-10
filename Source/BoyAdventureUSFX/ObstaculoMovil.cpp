// ObstaculoMovil.cpp
#include "ObstaculoMovil.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

AObstaculoMovil::AObstaculoMovil()
{
    PrimaryActorTick.bCanEverTick = true;

    // Configurar velocidad inicial
    VelocidadMovimiento = 200.0f;
    DireccionMovimiento = FVector(0.0f, 1.0f, 0.0f); // Movimiento en Y

    // Aplicar material de madera
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialWood(
        TEXT("Material'/Game/StarterContent/Materials/M_Wood_Floor_Walnut_Polished.M_Wood_Floor_Walnut_Polished'")
    );

    if (MaterialWood.Succeeded() && MallaObstaculo)
    {
        MallaObstaculo->SetMaterial(0, MaterialWood.Object);
    }
}

void AObstaculoMovil::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("ObstaculoMovil iniciado - Movimiento horizontal"));
}

void AObstaculoMovil::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Solo moverse si está activado
    if (bEstaActivado)
    {
        // Movimiento horizontal continuo
        FVector PosicionActual = GetActorLocation();
        FVector NuevaPosicion = PosicionActual + (DireccionMovimiento * VelocidadMovimiento * DeltaTime);

        // Cambiar dirección si alcanza ciertos límites (rebotar)
        if (FMath::Abs(NuevaPosicion.Y) > 800.0f)
        {
            DireccionMovimiento.Y *= -1.0f;
        }

        SetActorLocation(NuevaPosicion);
    }
}

void AObstaculoMovil::Activar()
{
    // Activar el movimiento
    bEstaActivado = true;
    UE_LOG(LogTemp, Log, TEXT("ObstaculoMovil: Movimiento horizontal ACTIVADO"));
}