#include "Castle.h"

#include "..\GUI\GUI.h"

Castle::Castle()
{
}

void Castle::SetTowerHealth(REGION TowerRegion, double h)
{
		Towers[TowerRegion].SetHealth(h);	
}
void Castle::InitializeTowers(double TH, int N, double TP)
{
	for (int i = 0; i < NoOfRegions; i++)
	{
		Towers[i].SetHealth(TH);
		Towers[i].SetNoOfAttacks(N);
		Towers[i].SetPower(TP);
	}
		
}

void Castle::AllAtack()
{
	for (int i = 0; i < NoOfRegions; i++)
	{
		Towers[i].Attack();
	}
}
