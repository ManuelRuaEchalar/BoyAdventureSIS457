// ObstaculoRotatorio.cpp
#include "ObstaculoRotatorio.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

AObstaculoRotatorio::AObstaculoRotatorio()
{
    PrimaryActorTick.bCanEverTick = true;

    // Configurar parámetros de rotación y movimiento circular
    VelocidadRotacion = 90.0f; // grados por segundo
    RadioMovimiento = 300.0f;
    AnguloActual = 0.0f;

    // Aplicar material de ladrillo para diferenciarlo
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialBrick(
        TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'")
    );

    if (MaterialBrick.Succeeded() && MallaObstaculo)
    {
        MallaObstaculo->SetMaterial(0, MaterialBrick.Object);
    }
}

void AObstaculoRotatorio::BeginPlay()
{
    Super::BeginPlay();

    // Guardar la posición inicial como punto central
    PuntoCentral = GetActorLocation();

    UE_LOG(LogTemp, Warning, TEXT("ObstaculoRotatorio iniciado - Movimiento circular y rotación"));
}

void AObstaculoRotatorio::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Solo moverse si está activado
    if (bEstaActivado)
    {
        // Rotación sobre su propio eje
        FRotator RotacionActual = GetActorRotation();
        FRotator NuevaRotacion = RotacionActual + FRotator(0.0f, VelocidadRotacion * DeltaTime, 0.0f);
        SetActorRotation(NuevaRotacion);

        // Movimiento circular alrededor del punto central
        AnguloActual += VelocidadRotacion * DeltaTime;
        if (AnguloActual >= 360.0f)
        {
            AnguloActual -= 360.0f;
        }

        float RadiansAngle = FMath::DegreesToRadians(AnguloActual);
        FVector NuevaPosicion = PuntoCentral + FVector(
            FMath::Cos(RadiansAngle) * RadioMovimiento,
            FMath::Sin(RadiansAngle) * RadioMovimiento,
            0.0f
        );

        SetActorLocation(NuevaPosicion);
    }
}

void AObstaculoRotatorio::Activar()
{
    // Activar el movimiento rotatorio y circular
    bEstaActivado = true;
    UE_LOG(LogTemp, Log, TEXT("ObstaculoRotatorio: Rotación y movimiento circular ACTIVADO"));
}