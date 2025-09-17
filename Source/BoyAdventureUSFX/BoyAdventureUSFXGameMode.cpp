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

        FRotator Rotacion(0.0f, 0.0f, 0.0f);

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

        // Generar obstáculos iniciales
        SpawnObstacles();

        // Configurar timer para reemplazar obstáculos cada 5 segundos
        GetWorld()->GetTimerManager().SetTimer(
            ReplacementTimer,
            this,
            &ABoyAdventureUSFXGameMode::SpawnObstacles,
            5.0f,
            true
        );
    }
}

void ABoyAdventureUSFXGameMode::SpawnObstacles()
{
    UE_LOG(LogTemp, Warning, TEXT("========== REEMPLAZANDO OBSTÁCULOS =========="));

    // Destruir obstáculos actuales
    for (AObstaculo* Obs : ListaObstaculos)
    {
        if (Obs)
        {
            Obs->Destroy();
        }
    }
    ListaObstaculos.Empty();

    UWorld* Mundo = GetWorld();
    if (!Mundo) return;

    FActorSpawnParameters ParametrosSpawn;
    ParametrosSpawn.Owner = this;
    ParametrosSpawn.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    FRotator Rotacion(0.0f, 0.0f, 0.0f);

    // Centro de la pista
    const FVector Center(-470.0f, -100.0f, 100.0f);

    // Posiciones Y: izquierda y derecha
    const float LeftY = Center.Y - 700.0f;
    const float RightY = Center.Y + 700.0f;

    // Clases de obstáculos disponibles (todas derivadas de AObstaculo)
    TArray<UClass*> ObstacleClasses;
    ObstacleClasses.Add(AObstaculo::StaticClass());
    ObstacleClasses.Add(AObstaculoMovil::StaticClass());
    ObstacleClasses.Add(AObstaculoRotatorio::StaticClass());
    ObstacleClasses.Add(AObstaculoPared::StaticClass());
    ObstacleClasses.Add(AParedMetal::StaticClass());

    // Patrón: 5 obstáculos a lo largo de X, alternando izquierda/derecha, tipos aleatorios
    const int NumObstacles = 5;
    float StartX = Center.X - 1000.0f;
    const float Spacing = 400.0f;

    for (int32 i = 0; i < NumObstacles; i++)
    {
        // Alternar lado
        float Y = (i % 2 == 0) ? LeftY : RightY;

        FVector Ubicacion(StartX + (i * Spacing), Y, Center.Z);

        // Seleccionar tipo aleatorio (para que sean distintos cada vez)
        UClass* SelectedClass = ObstacleClasses[FMath::RandHelper(ObstacleClasses.Num())];

        // Spawn polimórfico
        AObstaculo* NewObs = Mundo->SpawnActor<AObstaculo>(SelectedClass, Ubicacion, Rotacion, ParametrosSpawn);
        if (NewObs)
        {
            ListaObstaculos.Add(NewObs);

            // Activar (polimorfismo)
            NewObs->Activar();

            // Mensaje en pantalla
            FString TipoObstaculo = NewObs->GetClass()->GetName();
            GEngine->AddOnScreenDebugMessage(
                i,                     // Key único
                10.0f,                 // Duración
                FColor::Green,         // Color
                FString::Printf(TEXT("Activado MI RAMA: %s en posición (%f, %f, %f)"), *TipoObstaculo, Ubicacion.X, Ubicacion.Y, Ubicacion.Z)
            );

            UE_LOG(LogTemp, Warning, TEXT("Obstáculo %s creado en (%f, %f, %f)"), *TipoObstaculo, Ubicacion.X, Ubicacion.Y, Ubicacion.Z);
        }
    }
}