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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
	UMaterialInterface* DefaultPlateMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
	UMaterialInterface* PressedPlateMaterial;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnPressurePlatePressed(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void OnPressurePlateReleased(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Forward-declared reference to ACppDoor
	UPROPERTY(EditAnywhere, Category = "Config")
	ACppDoor* DoorRef;
};
