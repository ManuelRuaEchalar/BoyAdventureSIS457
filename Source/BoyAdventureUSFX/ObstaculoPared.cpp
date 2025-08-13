// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoPared.h"

AObstaculoPared::AObstaculoPared() : AObstaculo()
{
    // Constructor logic specific to AObstaculoPared can be added here
    Estilo = "Pared no definido";
    Material = "Material no definico";

    // Cargar el material
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_Beveled.M_Brick_Clay_Beveled'"));
    
    if (MaterialAsset.Succeeded())
    {
        MallaObstaculo->SetMaterial(0, MaterialAsset.Object); // El índice 0 es el primer slot de material
    }
}

void AObstaculoPared::BeginPlay()
{
}

void AObstaculoPared::Tick(float DeltaTime)
{
}


