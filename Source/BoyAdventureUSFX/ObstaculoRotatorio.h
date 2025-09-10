// ObstaculoRotatorio.h
#pragma once

#include "CoreMinimal.h"
#include "ObstaculoMovil.h"
#include "ObstaculoRotatorio.generated.h"

UCLASS()
class BOYADVENTUREUSFX_API AObstaculoRotatorio : public AObstaculoMovil
{
    GENERATED_BODY()

public:
    AObstaculoRotatorio();

protected:
    virtual void BeginPlay() override;

    // Velocidad de rotación
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotacion")
        float VelocidadRotacion;

    // Radio de movimiento circular
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
        float RadioMovimiento;

    // Punto central para el movimiento circular
    FVector PuntoCentral;

    // Ángulo actual para el movimiento circular
    float AnguloActual;

public:
    virtual void Tick(float DeltaTime) override;

    // Sobrescribir el método Activar para comportamiento rotatorio
    virtual void Activar() override;
};