// BoyAdventureUSFXGameMode.h (Actualizado)
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
    void MoverActorAleatoriamente();

protected:
    virtual void BeginPlay() override;

private:
    // Existentes
    AObstaculoPared* Obstaculo;
    AParedMetal* ParedMetal01;
    AEnemigoVolador* EnemigoVolador;
    AEnemigoTerrestre* EnemigoTerrestre;
    AEnemigoJefe* EnemigoJefe;
    AEnemigoPrueba* EnemigoPrueba;

    // NUEVOS OBSTÁCULOS CON PUNTEROS
    AObstaculo* ObstaculoBase;
    AObstaculoMovil* ObstaculoMovil01;
    AObstaculoRotatorio* ObstaculoRotatorio01;

    // Array de punteros para demostrar polimorfismo
    UPROPERTY()
        TArray<AObstaculo*> ListaObstaculos;

    FTimerHandle MovimientoTimer;
    FTimerHandle ActivacionTimer; // NUEVO: Timer para activar obstáculos

    UPROPERTY(EditAnywhere, Category = "Movimiento")
        float Intervalo = 4.0f;

    UPROPERTY(EditAnywhere, Category = "Movimiento")
        FVector RangoMovimiento = FVector(500.0f, 500.0f, 0.0f);

    // NUEVO: Método para activar todos los obstáculos (polimorfismo)
    void ActivarObstaculos();
};