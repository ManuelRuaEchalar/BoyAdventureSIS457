// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/Engine.h"
#include "Bomba.generated.h"

UCLASS()
class BOYADVENTUREUSFX_API ABomba : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABomba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Componente mesh de la bomba */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UStaticMeshComponent* BombMesh;

	/** Timer para la explosión */
	FTimerHandle ExplosionTimerHandle;

	/** Timer para el crecimiento */
	FTimerHandle GrowthTimerHandle;

	/** Escala inicial */
	FVector InitialScale;

	/** Contador para el crecimiento */
	float GrowthCounter;

	/** Referencia al personaje owner */
	UPROPERTY()
		class ABoyAdventureUSFXCharacter* OwnerCharacter;

	/** Función para hacer crecer la bomba */
	UFUNCTION()
		void GrowBomb();

	/** Función para explotar la bomba */
	UFUNCTION()
		void ExplodeBomb();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Función para establecer el personaje owner */
	void SetOwnerCharacter(class ABoyAdventureUSFXCharacter* Character);
};