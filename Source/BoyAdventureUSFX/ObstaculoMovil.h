// ObstaculoMovil.h
#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoMovil.generated.h"

UCLASS()
class BOYADVENTUREUSFX_API AObstaculoMovil : public AObstaculo
{
    GENERATED_BODY()

public:
    AObstaculoMovil();

protected:
    virtual void BeginPlay() override;

    // Velocidad de movimiento
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
        float VelocidadMovimiento;

    // Dirección actual del movimiento
    FVector DireccionMovimiento;

public:
    virtual void Tick(float DeltaTime) override;

    // Método virtual para activar (implementación específica)
    virtual void Activar();
};