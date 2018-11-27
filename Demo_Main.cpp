#include "Battle.h"
#include "GUI\GUI.h"

int main()
{
	Battle* pGameBattle = new Battle;
	pGameBattle->RunSimulation();
	//This is alaa's first commit 
	delete pGameBattle;
	
	return 0;
}
