// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculo.generated.h"


UCLASS()
class BOYADVENTUREUSFX_API AObstaculo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstaculo();

public:
	FString color;
	FString textura;

	//void Mover();

private:
	//int Contrasena;
	float Peso;
	float TiempoExistencia;
	float Resistencia;
	float Dano;
	FVector PosicionObstaculo;
	FVector DimensionesObstaculo;
	FString NombreObstaculo;

protected:
	//float DimensionesCocina;
	FString TipoObstaculo;

public:
	void SetNombreObstaculo(FString _NombreObstaculo) { NombreObstaculo = _NombreObstaculo; }
	//FString GetNombreObstaculo() const { return NombreObstaculo; }

	void SetPosicionObstaculo(FVector _PosicionObstaculo) { PosicionObstaculo = _PosicionObstaculo; }
	FVector GetPosicionObstaculo() const { return PosicionObstaculo; }

	void SetDimensionesObstaculo(FVector _DimensionesObstaculo) { DimensionesObstaculo = _DimensionesObstaculo; }
	FVector GetDimensionesObstaculo() const { return DimensionesObstaculo; }

	void SetTipoObstaculo(FString _TipoObstaculo) { TipoObstaculo = _TipoObstaculo; }
	FString GetTipoObstaculo() const { return TipoObstaculo; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
