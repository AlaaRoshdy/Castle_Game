#pragma once

#include "..\Defs.h"
#include "..\CMUgraphicsLib\CMUgraphics.h"

//Enemies colors for next phases
//You can choose whatever colors you like for your enemies
const color FIGHTER_CLR = DARKBLUE;
const color HEALER_CLR = ORANGERED;


// Enemy is the base class of each type of enemy
// Enemy should be an abstract class in next phases
class Enemy
{

protected:
	int ID;         //Each enemy has a unique ID (sequence number)
	color Clr;	    //Color of the enemy (will be set depending on the enemy type: Paver, ...etc.)
	REGION Region;  //Region of this enemy
	int Distance;	//Horizontal distance between enemy & the tower of its region
	                //Always positive (ranges from 2 to 60)
	double Health;	//Enemy health
	int ArrivalTime;// Arrival time of enemy
	double Power;	//Enemy power
	int RLD;		//reload period in unit steps
	//hatem60010
	ENEMY type; //new type defined at defs.h
	State state;//new type
	//TODO: Enemy Action Step -> dunno what to do 
	//
	// TODO: Add More Data Members As Needed
	//

public:
	Enemy(color r_c, REGION r_region, int ID, double Health, int ArrivalTime, double Power, int RLD, int d = MaxDistance);
	virtual ~Enemy();

	color GetColor() const;
	REGION GetRegion() const;

	void DecrementDist();
	void setType(ENEMY);
	void SetDistance(int d);
	int GetDistance() const;
	ENEMY getType();
	State getState();
	void setState(State s);
	void updateState();
	void hit();
	// Virtual Functions: ----------------

	//virtual void Move() = 0;	//All enemies can move
	//virtual void Act() = 0;	//Acting means fighting or healing

	//
	// TODO: Add More Member Functions As Needed
	//

};

