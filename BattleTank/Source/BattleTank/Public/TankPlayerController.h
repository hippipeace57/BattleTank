// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"




UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	private:
		virtual void BeginPlay() override;
		virtual void Tick(float DeltaTime) override;

		ATank* GetControlledTank() const;

		//Start moving the tank barrel so it will shoot at the crosshair
		void AimTowardsCrosshair();

		//Return an out Parameter, true if hit landscape
		bool GetSightRayHitLocation(FVector& OutHitLocation) const;


		UPROPERTY(EditAnywhere)
		float CrosshairXLocation = .5f;

		UPROPERTY(EditAnywhere)
		float CrosshairYLocation = .33333f;
	
};
