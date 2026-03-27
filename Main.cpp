#include <iostream>
#include "Engine.h"
#include "World.h"

#include "Actor.h"
#include "Player.h"

#include <fstream>

using namespace std;

int main()
{	

	AEngin->GetWorld()->Load("level01.umap");
	
	AEngin->Run();

	AEngin->Term();

	delete AEngin;

	return 0;
}