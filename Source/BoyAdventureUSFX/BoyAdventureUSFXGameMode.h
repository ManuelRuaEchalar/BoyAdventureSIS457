#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BoyAdventureUSFXGameMode.generated.h"

// Forward declarations
class AObstaculoPared;
class AParedMetal;
class AEnemigoVolador;
class AEnemigoTerrestre;
class AEnemigoJefe;
class AEnemigoPrueba;
class AObstaculo;
class AObstaculoMovil;
class AObstaculoRotatorio;

UCLASS(minimalapi)
class ABoyAdventureUSFXGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ABoyAdventureUSFXGameMode();

protected:
    virtual void BeginPlay() override;

private:
    // Existentes (solo enemigos)
    AEnemigoVolador* EnemigoVolador;
    AEnemigoTerrestre* EnemigoTerrestre;
    AEnemigoJefe* EnemigoJefe;
    AEnemigoPrueba* EnemigoPrueba;

    // Array de punteros para demostrar polimorfismo
    UPROPERTY()
        TArray<AObstaculo*> ListaObstaculos;

    FTimerHandle ReplacementTimer;

    // NUEVO: Método para generar obstáculos en patrón
    void SpawnObstacles();
};