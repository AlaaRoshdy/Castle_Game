#include "Castle.h"

#include "..\GUI\GUI.h"

Castle::Castle()
{
}

/*void Castle::SetTowerHealth(REGION TowerRegion, double h)
{
		Towers[TowerRegion].SetHealth(h);	
}*/
void Castle::InitializeTowers(REGION TowerRegion, double TH, int N, double TP)
{
	    
		Towers[TowerRegion].SetHealth(TH);
		Towers[TowerRegion].SetNoOfAttacks(N);
		Towers[TowerRegion].SetPower(TP);
}