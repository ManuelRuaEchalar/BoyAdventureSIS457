#pragma once

#include "CoreMinimal.h"
#include "MiEnemigo.h"
#include "EnemigoPrueba.generated.h"

class USkeletalMeshComponent;
class UAnimSequence;
class UAnimationAsset;

UCLASS()
class BOYADVENTUREUSFX_API AEnemigoPrueba : public AMiEnemigo
{
    GENERATED_BODY()

public:
    AEnemigoPrueba();

    virtual void Tick(float DeltaTime) override;
    virtual void Moverse(float DeltaTime) override;

protected:
    virtual void BeginPlay() override;

private:
    // Componente esquelético propio (no tocar MeshEnemigo de la base)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
        USkeletalMeshComponent* WolfMesh;

    // Animaciones (las cargamos en constructor por simplicidad)
    UPROPERTY()
        UAnimSequence* IdleAnim;

    UPROPERTY()
        UAnimSequence* WalkAnim;

    UPROPERTY()
        UAnimSequence* RunAnim;

    // Puntero al asset de animación actualmente reproducido (para no reiniciarlo cada Tick)
    UPROPERTY(Transient)
        UAnimationAsset* CurrentAnim;

    // helper para cambiar animacion sin reiniciarla constantemente
    void PlayIfNotPlaying(UAnimationAsset* NewAnim, bool bLoop = true);
};
