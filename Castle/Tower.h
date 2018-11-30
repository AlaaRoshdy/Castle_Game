#pragma once
#include "..\Defs.h"
class Tower
{
	double Health;
	double Power;
	int NoOfAttacks;
	//
	// TODO: Add More Data Members As Needed
	//

public:

	Tower();
	void SetHealth(double h);
	double GetHealth() const;
	void SetNoOfAttacks(int);
	void SetPower(double);

	//
	// TODO: Add More Member Functions As Needed
	//

};

