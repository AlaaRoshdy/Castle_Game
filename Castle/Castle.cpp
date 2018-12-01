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

void Castle::AllAtack( LinkedList& ActiveList)
{
	//Initialize 4 different linked lists, each will contain a list of enemies of its own region.
	LinkedList RegionA;
	LinkedList RegionB;
	LinkedList RegionC;
	LinkedList RegionD;

	//Divide function will take from each node in the active list its data and copy it in one of the linked lists
	//sent as arguments. This division will be based on the region of the enemy.
	ActiveList.Divide(RegionA, RegionB, RegionC, RegionD);
	//All towers will attack their own regions.
			Towers[0].Attack(RegionA, ActiveList);
			Towers[1].Attack(RegionB, ActiveList);
			Towers[2].Attack(RegionC, ActiveList);
			Towers[3].Attack(RegionD, ActiveList);
}

string Castle::updateMsg()
{
	string s;
	for (int i = 0; i < 4; i++)
	{
		s+="For Tower " + to_str(i) + Towers[i].update_msg  + "\n" ;
	}
	return s;
}




