#pragma once

#include "..\Defs.h"
#include "..\CMUgraphicsLib\CMUgraphics.h"
#include "..\GUI\GUI.h"
#include "..\Containers\LinkedList.h"
#include "Tower.h"
class Castle
{
	Tower Towers[NoOfRegions];

	//
	// TODO: Add More Data Members As Needed
	//
	
public:

	Castle();
	void SetTowerHealth(REGION TowerRegion, double h);
	void  InitializeTowers(double, int, double);
	void AllAtack( LinkedList& ActiveList);
	int num_attacks();
	//
	// TODO: Add More Member Functions As Needed
	//
};
