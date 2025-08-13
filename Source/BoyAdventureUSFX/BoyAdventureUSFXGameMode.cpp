// Copyright Epic Games, Inc. All Rights Reserved.

#include "BoyAdventureUSFXGameMode.h"
#include "BoyAdventureUSFXCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "ObstaculoPared.h"
#include "ParedMetal.h"

ABoyAdventureUSFXGameMode::ABoyAdventureUSFXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABoyAdventureUSFXGameMode::BeginPlay()
{

    // Verifica que el mundo esté disponible
    UWorld* Mundo = GetWorld();
    if (Mundo)
    {
        // Define la ubicación y rotación del obstáculo
        FVector Ubicacion(0.0f, 0.0f, 400.0f); // Ajusta según tu escena
        FRotator Rotacion(0.0f, 0.0f, 0.0f);

        // Spawnea el actor
        FActorSpawnParameters ParametrosSpawn;
        ParametrosSpawn.Owner = this;
        ParametrosSpawn.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

        Obstaculo = Mundo->SpawnActor<AObstaculoPared>(AObstaculoPared::StaticClass(), Ubicacion, Rotacion, ParametrosSpawn);

        if (Obstaculo)
        {
         
            UE_LOG(LogTemp, Warning, TEXT("Obstáculo creado exitosamente"));
        }

        // Define la ubicación y rotación del obstáculo
        FVector Ubicacion01(200.0f, -300.0f, 400.0f); // Ajusta según tu escena
        FRotator Rotacion02(0.0f, 0.0f, 0.0f);

        ParedMetal01 = Mundo->SpawnActor<AParedMetal>(AParedMetal::StaticClass(), Ubicacion, Rotacion);
    }

    GetWorld()->GetTimerManager().SetTimer(
    MovimientoTimer,
    this,
    &ABoyAdventureUSFXGameMode::MoverActorAleatoriamente,
    Intervalo,
    true
    );
}

void ABoyAdventureUSFXGameMode::MoverActorAleatoriamente()  
{  
    FVector PosicionActual = Obstaculo->GetActorLocation();

    float NuevoX = FMath::RandRange(-RangoMovimiento.X, RangoMovimiento.X);
    float NuevoY = FMath::RandRange(-RangoMovimiento.Y, RangoMovimiento.Y);

    FVector NuevaPosicion = FVector(NuevoX, NuevoY, PosicionActual.Z);

    Obstaculo->SetActorLocation(NuevaPosicion);

   // Obtén el actor principal del mundo  
   /*AActor* OwnerActor = Cast<AActor>(GetOwner());  
   if (OwnerActor)  
   {  
       FVector PosicionActual = OwnerActor->GetActorLocation();  

       float NuevoX = FMath::RandRange(-RangoMovimiento.X, RangoMovimiento.X);  
       float NuevoY = FMath::RandRange(-RangoMovimiento.Y, RangoMovimiento.Y);  

       FVector NuevaPosicion = FVector(NuevoX, NuevoY, PosicionActual.Z);  

       OwnerActor->SetActorLocation(NuevaPosicion);  
   }  */
}

