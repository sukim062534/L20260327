#include "Player.h"
#include <iostream>
#include "Engine.h"

APlayer::APlayer(int InX, int InY, char InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
}

APlayer::~APlayer()
{
}

void APlayer::BeginPlay()
{
	__super::BeginPlay();
}

void APlayer::Tick()
{
	__super::Tick();
	
	if (UEngine::KeyCode == 'w')
	{
		Y--;
	}
	if (UEngine::KeyCode == 's')
	{
		Y++;
	}
	if (UEngine::KeyCode == 'a')
	{
		X--;
	}
	if (UEngine::KeyCode == 'd')
	{
		X++;
	}
}

void APlayer::Render()
{
	__super::Render();
}
