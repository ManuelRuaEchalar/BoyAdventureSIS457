// Enemigo.cpp
#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AEnemigo::AEnemigo()
{
    // Set this character to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Initialize properties
    MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
    // Attach MallaEnemigo to the default RootComponent (CapsuleComponent from ACharacter)
    MallaEnemigo->SetupAttachment(RootComponent);

    // Load the static mesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaEnemigo(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (ObjetoMallaEnemigo.Succeeded())
    {
        MallaEnemigo->SetStaticMesh(ObjetoMallaEnemigo.Object);
    }
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AEnemigo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}