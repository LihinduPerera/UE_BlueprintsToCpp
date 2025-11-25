#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

// Forward declaration to avoid circular dependency
class ACppDoor;

#include "Components/SphereComponent.h"
#include "CppPressurePlate.generated.h"

UCLASS()
class UE_BLUEPRINTSTOCPP_API ACppPressurePlate : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACppPressurePlate();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* PlateMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USphereComponent* SphereCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Materials")
	UMaterialInterface* DefaultPlateMaterial;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Materials")
	UMaterialInterface* PressedPlateMaterial;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Forward-declared reference to ACppDoor
	UPROPERTY(EditAnywhere, Category = "Config")
	ACppDoor* DoorRef;
};
