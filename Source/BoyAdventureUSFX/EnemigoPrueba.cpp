#include "EnemigoPrueba.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Animation/AnimSequence.h"
#include "Animation/AnimationAsset.h"

AEnemigoPrueba::AEnemigoPrueba()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear el componente esquelético (nombre único)
    WolfMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WolfMesh"));
    // Si la clase base ya tiene RootComponent, lo usamos como padre; sino, lo ponemos como Root
    if (RootComponent)
    {
        WolfMesh->SetupAttachment(RootComponent);
    }
    else
    {
        RootComponent = WolfMesh;
    }

    // Cargar el SkeletalMesh (ajusta la ruta si difiere)
    static ConstructorHelpers::FObjectFinder<USkeletalMesh> WolfMeshAsset(TEXT("SkeletalMesh'/Game/otros/Wolf_with_Animations.Wolf_with_Animations'"));
    if (WolfMeshAsset.Succeeded())
    {
        WolfMesh->SetSkeletalMesh(WolfMeshAsset.Object);
    }

    // Cargar Animaciones (ajusta las rutas si tu asset tiene nombres distintos)
    static ConstructorHelpers::FObjectFinder<UAnimSequence> IdleAsset(TEXT("AnimSequence'/Game/otros/Wolf_with_Animations_Anim_04_Idle.Wolf_with_Animations_Anim_04_Idle'"));
    if (IdleAsset.Succeeded()) IdleAnim = IdleAsset.Object;

    static ConstructorHelpers::FObjectFinder<UAnimSequence> WalkAsset(TEXT("AnimSequence'/Game/otros/Wolf_with_Animations_Anim_02_walk.Wolf_with_Animations_Anim_02_walk'"));
    if (WalkAsset.Succeeded()) WalkAnim = WalkAsset.Object;

    static ConstructorHelpers::FObjectFinder<UAnimSequence> RunAsset(TEXT("AnimSequence'/Game/otros/Wolf_with_Animations_Anim_01_Run.Wolf_with_Animations_Anim_01_Run'"));
    if (RunAsset.Succeeded()) RunAnim = RunAsset.Object;

    CurrentAnim = nullptr;

    // Iniciar con Idle por defecto si existe
    if (IdleAnim)
    {
        WolfMesh->SetAnimationMode(EAnimationMode::AnimationSingleNode);
        WolfMesh->PlayAnimation(IdleAnim, true);
        CurrentAnim = IdleAnim;
    }

    // Si tu clase base ya tiene Velocidad, úsala; sino, inicializa localmente.
    // Velocidad = 150.0f; // si la variable viene de AMiEnemigo, no la declares aquí.
}

void AEnemigoPrueba::BeginPlay()
{
    Super::BeginPlay();
    // (opcional) configuraciones runtime
}

void AEnemigoPrueba::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Ejemplo: cambia la animación según la velocidad (si Velocidad es parte de la base)
    float SpeedValue = 0.0f;
    // Si tu AMiEnemigo ya define Velocidad (float), úsala; si no, reemplaza con la lógica que uses.
#ifdef VELOCITY_FROM_BASE
    SpeedValue = Velocidad;
#else
    SpeedValue = 150.0f; // ejemplo estático
#endif

    if (SpeedValue > 200.0f && RunAnim)
    {
        PlayIfNotPlaying(RunAnim, true);
    }
    else if (SpeedValue > 50.0f && WalkAnim)
    {
        PlayIfNotPlaying(WalkAnim, true);
    }
    else if (IdleAnim)
    {
        PlayIfNotPlaying(IdleAnim, true);
    }
}

void AEnemigoPrueba::Moverse(float DeltaTime)
{
    // Movimiento simple en X (igual que antes)
    FVector NuevaPos = GetActorLocation();
    // Asumo que la variable Velocidad viene de la base AMiEnemigo; si no la tienes, usa un valor propio.
    float Vel = 150.0f;
#ifdef VELOCITY_FROM_BASE
    Vel = Velocidad;
#endif
    NuevaPos.X += Vel * DeltaTime;
    SetActorLocation(NuevaPos);
}

void AEnemigoPrueba::PlayIfNotPlaying(UAnimationAsset* NewAnim, bool bLoop)
{
    if (!WolfMesh || !NewAnim) return;
    if (CurrentAnim == NewAnim) return; // ya está reproduciendo
    WolfMesh->PlayAnimation(NewAnim, bLoop);
    CurrentAnim = NewAnim;
}
