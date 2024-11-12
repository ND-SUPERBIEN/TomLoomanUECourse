// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "SBMagicProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class ASBMagicProjectile : public AActor
{
	GENERATED_BODY()
	
public:

	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	UNiagaraComponent* TestHeyComp;
	
	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* ProjectileMovementComp;
	
	// Sets default values for this actor's properties
	ASBMagicProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
