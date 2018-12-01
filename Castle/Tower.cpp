#include "Tower.h"


Tower::Tower()
{
	//SetHealth(TowerInitHealth);
}

string Tower::update_msg()
{
	string s = "";
	s += "Health is: " + to_str(Health) + ", Power is: " + to_str(Power) + ", and Total killed is: " + to_str(NoOfAttacks);

	return s;
}


void Tower::SetHealth(double h)
{
	if(h > 0)
		Health = h;
	else
		Health = 0; // killed
}

double Tower::GetHealth() const
{
	return Health;
}
void Tower::SetNoOfAttacks(int N)
{
	NoOfAttacks = N;
}
void Tower::SetPower(double P)
{
	Power = P;
}

void Tower::MakeHeap(LinkedList EnemyRegion)
{
	Heap EnemyPriority;
	EnemyRegion.ToHeap(EnemyPriority);
}

void Tower::Attack(LinkedList EnemyRegion)
{
	MakeHeap(EnemyRegion);

}
