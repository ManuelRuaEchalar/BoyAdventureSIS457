// EnemigoTerrestre.h
#pragma once
#include "CoreMinimal.h"
#include "MiEnemigo.h"
#include "EnemigoTerrestre.generated.h"

UCLASS()
class BOYADVENTUREUSFX_API AEnemigoTerrestre : public AMiEnemigo
{
    GENERATED_BODY()

public:
    AEnemigoTerrestre();

    virtual void Moverse(float DeltaTime) override;

protected:
    virtual void BeginPlay() override;
};