// Obstaculo.cpp (Actualizado)
#include "Obstaculo.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AObstaculo::AObstaculo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize properties
	MallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaObstaculo"));
	RootComponent = MallaObstaculo;

	// Inicializar estado
	bEstaActivado = false;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaObstaculo(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMallaObstaculo.Succeeded())
	{
		MallaObstaculo->SetStaticMesh(ObjetoMallaObstaculo.Object);
	}
}

// Called when the game starts or when spawned
void AObstaculo::BeginPlay()
{
	Super::BeginPlay();
	int* vida = new int(10);
	FString* nombre = new FString("Manuel");
	UE_LOG(LogTemp, Warning, TEXT("Obstaculo base iniciado - Sin movimiento"));
}

// Called every frame
void AObstaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Implementación base del método Activar - AGREGADO
void AObstaculo::Activar()
{
	// Comportamiento base: el obstáculo se activa pero permanece estático
	bEstaActivado = true;
	UE_LOG(LogTemp, Log, TEXT("Obstaculo base: Activar() - Estado activado pero permanece estático"));
}