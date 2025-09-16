// Fill out your copyright notice in the Description page of Project Settings.

#include "Bomba.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/Material.h"
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BoyAdventureUSFXCharacter.h"

// Sets default values
ABomba::ABomba()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear el componente mesh
	BombMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BombMesh"));
	RootComponent = BombMesh;

	// Cargar la malla de la bomba
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BombMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Bomba/Bomb_low_bomb_low.Bomb_low_bomb_low'"));
	if (BombMeshAsset.Succeeded())
	{
		BombMesh->SetStaticMesh(BombMeshAsset.Object);
	}

	// Cargar el material de la bomba
	static ConstructorHelpers::FObjectFinder<UMaterial> BombMaterial(TEXT("Material'/Game/StarterContent/Bomba/Bomb_low_bomb_BaseColor_Mat.Bomb_low_bomb_BaseColor_Mat'"));
	if (BombMaterial.Succeeded())
	{
		BombMesh->SetMaterial(0, BombMaterial.Object);
	}

	// Establecer escala inicial (40 en todos los ejes)
	InitialScale = FVector(40.0f, 40.0f, 40.0f);
	SetActorScale3D(InitialScale);

	// Inicializar variables
	GrowthCounter = 0.0f;
	OwnerCharacter = nullptr;
}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();

	// Iniciar el timer de explosión (5 segundos)
	GetWorldTimerManager().SetTimer(ExplosionTimerHandle, this, &ABomba::ExplodeBomb, 5.0f, false);

	// Iniciar el timer de crecimiento (cada 1 segundo)
	GetWorldTimerManager().SetTimer(GrowthTimerHandle, this, &ABomba::GrowBomb, 1.0f, true);
}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABomba::GrowBomb()
{
	GrowthCounter += 1.0f;

	// Aumentar el tamaño en 5 unidades cada segundo
	FVector NewScale = InitialScale + FVector(5.0f * GrowthCounter, 5.0f * GrowthCounter, 5.0f * GrowthCounter);
	SetActorScale3D(NewScale);
}

void ABomba::ExplodeBomb()
{
	// Limpiar los timers
	GetWorldTimerManager().ClearTimer(ExplosionTimerHandle);
	GetWorldTimerManager().ClearTimer(GrowthTimerHandle);

	// Crear el efecto de partículas de explosión
	if (UWorld* World = GetWorld())
	{
		FVector ExplosionLocation = GetActorLocation();

		// Cargar y reproducir el sistema de partículas
		UParticleSystem* ExplosionParticles = LoadObject<UParticleSystem>(nullptr, TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
		if (ExplosionParticles)
		{
			UGameplayStatics::SpawnEmitterAtLocation(World, ExplosionParticles, ExplosionLocation);
		}
	}

	// Notificar al personaje que la bomba explotó
	if (OwnerCharacter)
	{
		OwnerCharacter->OnBombExploded();
	}

	// Destruir el actor
	Destroy();
}

void ABomba::SetOwnerCharacter(ABoyAdventureUSFXCharacter* Character)
{
	OwnerCharacter = Character;
}