// Fill out your copyright notice in the Description page of Project Settings.


#include "ParedMetal.h"

AParedMetal::AParedMetal():AObstaculoPared()
{
    // Cargar el material
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialParedAsset(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));

    if (MaterialParedAsset.Succeeded())
    {
        MallaObstaculo->SetMaterial(0, MaterialParedAsset.Object); // El índice 0 es el primer slot de material
    }
}
