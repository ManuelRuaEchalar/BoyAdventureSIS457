// MiEnemigo.h
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "MiEnemigo.generated.h"

UCLASS()
class BOYADVENTUREUSFX_API AMiEnemigo : public AActor
{
    GENERATED_BODY()

public:
    AMiEnemigo();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Método virtual puro para el polimorfismo
    UFUNCTION(BlueprintCallable, Category = "Enemigo")
        virtual void Moverse(float DeltaTime) PURE_VIRTUAL(AMiEnemigo::Moverse, );

    // Componente de mesh
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
        UStaticMeshComponent* MeshEnemigo;

    // Velocidad base del enemigo
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
        float Velocidad = 100.0f;
private:
    virtual void calcularVida() PURE_VIRTUAL(AMiEnemigo::calcularVida, );
};