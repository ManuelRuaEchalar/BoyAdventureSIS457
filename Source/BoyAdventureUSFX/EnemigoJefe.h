// EnemigoJefe.h
#pragma once
#include "CoreMinimal.h"
#include "MiEnemigo.h"
#include "EnemigoJefe.generated.h"

UCLASS()
class BOYADVENTUREUSFX_API AEnemigoJefe : public AMiEnemigo
{
    GENERATED_BODY()

public:
    AEnemigoJefe();

    virtual void Moverse(float DeltaTime) override;
    virtual void calcularVida() override;

protected:
    virtual void BeginPlay() override;

private:
    bool bEstaVolando;
    float TiempoCaminando;
    float TiempoTranscurrido;

        float TiempoAntesVolar = 5.0f;

        float AmplitudVuelo = 150.0f;
 
        float FrecuenciaVuelo = 1.5f;
};