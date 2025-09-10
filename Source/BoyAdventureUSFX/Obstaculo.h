// Obstaculo.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculo.generated.h"

class UStaticMeshComponent;

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

private:
    float* Peso;
    float TiempoExistencia;
    float Resistencia;
    float Dano;
    FVector PosicionObstaculo;
    FVector DimensionesObstaculo;
    FString NombreObstaculo;

protected:
    FString TipoObstaculo;
    UStaticMeshComponent* MallaObstaculo;
    bool bEstaActivado;

public:
    // Getters y Setters
    void SetNombreObstaculo(FString NewNombreObstaculo) { NombreObstaculo = NewNombreObstaculo; }
    void SetPosicionObstaculo(FVector NewPosicionObstaculo) { PosicionObstaculo = NewPosicionObstaculo; }
    FVector GetPosicionObstaculo() const { return PosicionObstaculo; }
    void SetDimensionesObstaculo(FVector NewDimensionesObstaculo) { DimensionesObstaculo = NewDimensionesObstaculo; }
    FVector GetDimensionesObstaculo() const { return DimensionesObstaculo; }
    void SetTipoObstaculo(FString NewTipoObstaculo) { TipoObstaculo = NewTipoObstaculo; }
    FString GetTipoObstaculo() const { return TipoObstaculo; }

    // Método virtual para polimorfismo
    virtual void Activar();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};