// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS() // relflection : 컴파일러가 읽을 수 있는 주석 // 원래 C++에 없는 기능. 언리얼 자체에서 추가한 매크로.
class PRACTICEUNREALENGINE_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(VisibleAnywhere)
	//class UStaticMeshComponent* Mesh;
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category=Stat)
	int32 Hp;

	UPROPERTY(EditAnywhere, Category = Stat)
	int32 Mp;

	UPROPERTY(EditAnywhere, Category = Stat)
	float RotateSpeed = 30.0f;
};
