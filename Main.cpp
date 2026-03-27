#include <iostream>
#include "Engine.h"
#include "World.h"

#include "Actor.h"
#include "Player.h"

#include <fstream>

using namespace std;

int main()
{	
	UEngine* MyEnging = new UEngine;

	MyEnging->GetWorld()->Load("level01.umap");
	
	MyEnging->Run();

	delete MyEnging;

	return 0;
}