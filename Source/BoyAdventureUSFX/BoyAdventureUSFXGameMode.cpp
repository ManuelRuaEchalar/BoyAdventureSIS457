// BoyAdventureUSFXGameMode.cpp (Actualizado)
#include "BoyAdventureUSFXGameMode.h"
#include "BoyAdventureUSFXCharacter.h"
#include "ObstaculoPared.h"
#include "ParedMetal.h"
#include "EnemigoVolador.h"
#include "EnemigoTerrestre.h"
#include "EnemigoJefe.h"
#include "EnemigoPrueba.h"
#include "Obstaculo.h"
#include "ObstaculoMovil.h"
#include "ObstaculoRotatorio.h"
#include "UObject/ConstructorHelpers.h"

ABoyAdventureUSFXGameMode::ABoyAdventureUSFXGameMode()
{
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
}

void ABoyAdventureUSFXGameMode::BeginPlay()
{
    Super::BeginPlay();

    UWorld* Mundo = GetWorld();
    if (Mundo)
    {
        FActorSpawnParameters ParametrosSpawn;
        ParametrosSpawn.Owner = this;
        ParametrosSpawn.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

        // Spawn existentes (mantenidos)
        FVector Ubicacion(0.0f, 0.0f, 400.0f);
        FRotator Rotacion(0.0f, 0.0f, 0.0f);

        Obstaculo = Mundo->SpawnActor<AObstaculoPared>(AObstaculoPared::StaticClass(), Ubicacion, Rotacion, ParametrosSpawn);
        if (Obstaculo)
        {
            UE_LOG(LogTemp, Warning, TEXT("Obstáculo creado exitosamente"));
        }

        FVector Ubicacion01(200.0f, -300.0f, 400.0f);
        ParedMetal01 = Mundo->SpawnActor<AParedMetal>(AParedMetal::StaticClass(), Ubicacion01, Rotacion, ParametrosSpawn);

        // Enemigos existentes
        FVector UbicacionVolador(-1000.0f, 0.0f, 400.0f);
        EnemigoVolador = Mundo->SpawnActor<AEnemigoVolador>(AEnemigoVolador::StaticClass(), UbicacionVolador, Rotacion, ParametrosSpawn);

        FVector UbicacionTerrestre(-1000.0f, 300.0f, 400.0f);
        EnemigoTerrestre = Mundo->SpawnActor<AEnemigoTerrestre>(AEnemigoTerrestre::StaticClass(), UbicacionTerrestre, Rotacion, ParametrosSpawn);

        FVector UbicacionJefe(-1000.0f, 700.0f, 400.0f);
        EnemigoJefe = Mundo->SpawnActor<AEnemigoJefe>(AEnemigoJefe::StaticClass(), UbicacionJefe, Rotacion, ParametrosSpawn);
        if (EnemigoJefe)
        {
            EnemigoJefe->calcularVida();
        }

        FVector UbicacionPrueba(-770.0f, -100.0f, 240.0f);
        FRotator RotacionPrueba(0.0f, -90.0f, 0.0f);
        // Spawnear el actor
        EnemigoPrueba = Mundo->SpawnActor<AEnemigoPrueba>(AEnemigoPrueba::StaticClass(), UbicacionPrueba, RotacionPrueba, ParametrosSpawn);

        if (EnemigoPrueba)
        {
            // Cambiar la escala
            EnemigoPrueba->SetActorScale3D(FVector(300.0f, 300.0f, 300.0f));
        }
        // ========== NUEVOS OBSTÁCULOS CON POLIMORFISMO ==========

        // Obstáculo base (estático) usando PUNTERO
        FVector UbicacionBase(500.0f, 0.0f, 400.0f);
        ObstaculoBase = Mundo->SpawnActor<AObstaculo>(AObstaculo::StaticClass(), UbicacionBase, Rotacion, ParametrosSpawn);
        if (ObstaculoBase)
        {
            ListaObstaculos.Add(ObstaculoBase);
            UE_LOG(LogTemp, Warning, TEXT("ObstaculoBase creado con PUNTERO"));
        }

        // Obstáculo móvil usando PUNTERO
        FVector UbicacionMovil(800.0f, 0.0f, 400.0f);
        ObstaculoMovil01 = Mundo->SpawnActor<AObstaculoMovil>(AObstaculoMovil::StaticClass(), UbicacionMovil, Rotacion, ParametrosSpawn);
        if (ObstaculoMovil01)
        {
            ListaObstaculos.Add(ObstaculoMovil01);
            UE_LOG(LogTemp, Warning, TEXT("ObstaculoMovil creado con PUNTERO"));
        }

        // Obstáculo rotatorio usando PUNTERO
        FVector UbicacionRotatorio(1100.0f, 0.0f, 400.0f);
        ObstaculoRotatorio01 = Mundo->SpawnActor<AObstaculoRotatorio>(AObstaculoRotatorio::StaticClass(), UbicacionRotatorio, Rotacion, ParametrosSpawn);
        if (ObstaculoRotatorio01)
        {
            ListaObstaculos.Add(ObstaculoRotatorio01);
            UE_LOG(LogTemp, Warning, TEXT("ObstaculoRotatorio creado con PUNTERO"));
        }

        // Configurar timers
        GetWorld()->GetTimerManager().SetTimer(
            MovimientoTimer,
            this,
            &ABoyAdventureUSFXGameMode::MoverActorAleatoriamente,
            Intervalo,
            true
        );

        // NUEVO: Timer para activar obstáculos cada 2 segundos (demuestra polimorfismo)
        GetWorld()->GetTimerManager().SetTimer(
            ActivacionTimer,
            this,
            &ABoyAdventureUSFXGameMode::ActivarObstaculos,
            2.0f,
            true
        );
    }
}

void ABoyAdventureUSFXGameMode::MoverActorAleatoriamente()
{
    // Mover obstáculos existentes
    if (Obstaculo)
    {
        FVector PosicionActual = Obstaculo->GetActorLocation();
        float NuevoX = FMath::RandRange(-RangoMovimiento.X, RangoMovimiento.X);
        float NuevoY = FMath::RandRange(-RangoMovimiento.Y, RangoMovimiento.Y);
        FVector NuevaPosicion = FVector(NuevoX, NuevoY, PosicionActual.Z);
        Obstaculo->SetActorLocation(NuevaPosicion);
    }
}

// NUEVO MÉTODO: Demuestra polimorfismo
void ABoyAdventureUSFXGameMode::ActivarObstaculos()
{
    UE_LOG(LogTemp, Warning, TEXT("========== ACTIVANDO OBSTÁCULOS (POLIMORFISMO) =========="));

    // Recorrer el array de punteros base y llamar al método virtual Activar()
    // Cada clase ejecutará su propia implementación
    for (int32 i = 0; i < ListaObstaculos.Num(); i++)
    {
        FString tipoObs = ListaObstaculos[i]->GetClass()->GetName();
            AObstaculo* Obs = ListaObstaculos[i];
            if (Obs)
            {
                // POLIMORFISMO EN ACCIÓN: El mismo puntero base llama diferentes implementaciones
                Obs->Activar();

                FString TipoObstaculo = Obs->GetClass()->GetName();
                GEngine->AddOnScreenDebugMessage(
                    i,                     // Key único para cada obstáculo
                    10.0f,                 // Duración más larga
                    FColor::Green,         // Color
                    FString::Printf(TEXT("Activado: %s"), *TipoObstaculo)
                );
            }
        }
        
        
}