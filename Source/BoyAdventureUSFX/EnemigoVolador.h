// EnemigoVolador.h
#pragma once
#include "CoreMinimal.h"
#include "MiEnemigo.h"
#include "EnemigoVolador.generated.h"

UCLASS()
class BOYADVENTUREUSFX_API AEnemigoVolador : public AMiEnemigo
{
    GENERATED_BODY()

public:
    AEnemigoVolador();

    virtual void Moverse(float DeltaTime) override;

protected:
    virtual void BeginPlay() override;

private:
    float TiempoTranscurrido;
    float AmplitudVuelo = 100.0f;
    float FrecuenciaVuelo = 1.0f;
};