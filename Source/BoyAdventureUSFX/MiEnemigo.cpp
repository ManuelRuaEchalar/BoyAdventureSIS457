// MiEnemigo.cpp
#include "MiEnemigo.h"

AMiEnemigo::AMiEnemigo()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear el componente de mesh
    MeshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEnemigo"));
    RootComponent = MeshEnemigo;
}

void AMiEnemigo::BeginPlay()
{
    Super::BeginPlay();
}

void AMiEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    // Llamar al método Moverse en cada frame
    Moverse(DeltaTime);
}