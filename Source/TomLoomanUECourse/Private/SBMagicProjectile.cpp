// Fill out your copyright notice in the Description page of Project Settings.


#include "SBMagicProjectile.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ASBMagicProjectile::ASBMagicProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	SphereComp->SetCollisionProfileName("Projectile");
	RootComponent = SphereComp;

	TestHeyComp = CreateDefaultSubobject<UNiagaraComponent>("EffectComp");
	TestHeyComp->SetupAttachment(SphereComp);
	
	ProjectileMovementComp = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComp");
	ProjectileMovementComp->InitialSpeed = 1000.0f;
	ProjectileMovementComp->bRotationFollowsVelocity = true;
	ProjectileMovementComp->bInitialVelocityInLocalSpace = true;
	
}

// Called when the game starts or when spawned
void ASBMagicProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASBMagicProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

