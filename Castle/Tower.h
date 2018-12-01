#pragma once
#include "..\Defs.h"
#include "..\Containers\LinkedList.h"
#include "..\Containers\Heap.h"
class Tower
{
	double Health;
	double Power;
	int NoOfAttacks;
	//
	// TODO: Add More Data Members As Needed
	//
	//Heap PriorityForAttack;
	//We need to add a heap to order the enemies based on the priority.(random in Phase1).

public:

	Tower();
	void SetHealth(double h);
	double GetHealth() const;
	void SetNoOfAttacks(int);
	void SetPower(double);
	void Attack(LinkedList& EnemyRegion);//this should take as an arguement the enemy list.

	void MakeHeap(const LinkedList& EnemyRegion, Heap& EnemyPriority);//Add a function that takes the list of enemies and fills the heap for the attack function.

	//
	// TODO: Add More Member Functions As Needed
	//

};

