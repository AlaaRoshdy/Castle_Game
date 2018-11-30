#include "Enemy.h"


Enemy::Enemy(color r_c, REGION r_region, int S, double H, int AT, double P, int RL, int distance)
{
	Clr = r_c;
	Region = r_region;
	ID = S;
	Health = H;
	ArrivalTime = AT;
	Power = P;
	RLD = RL;
	SetDistance(d);
}

Enemy::~Enemy()
{
}

color Enemy::GetColor() const
{
	return Clr;
}

REGION Enemy::GetRegion() const
{
	return Region;
}

void Enemy::DecrementDist()
{
	if (Distance > MinDistance)
		Distance--;
}

void Enemy::SetDistance(int d)
{
	if (d >= MinDistance && d <= MaxDistance)
		Distance = d;
	else
		Distance = MaxDistance;
}

int Enemy::GetDistance() const
{
	return Distance;
}

/*ENEMY Enemy::getType()
{
	return type;
}*/

/*void Enemy::setType(ENEMY T)
{
	type = T;
}*/

void Enemy::setState(State s)
{
	state = s;
}

State Enemy::getState()
{
	return state;	
}

void Enemy::updateState()
{
		if(Health<=0)
		{
			state = killed;
		}
}

int Enemy::getATime() const
{
	return ArrivalTime;
}

/*void Enemy::hit()
{
	int k;
	if (Health >= 0.5) k = 1;
	else k = 0.5;
	Health = Health * k / Distance;
}*/
void Enemy::Move()
{
	int delay = 0; //Since a weak enemy moves 1m in 2 time steps, this variable will alternate between 1 and 0 after each consecutive step.
					//1 denotes that the enemy will move this time step, 0 denotes the enemy wont move this time step
	//if an active enemy is frozen, it wont move, else all move
	//if enemy has half the health, it moves 1 m in 2 steps
	//enemy stops moving at 2 m max
	if (state != frozen) //if the enemy is not frozen (I dont need to add a condition if the enemy is not killed because a killed enemy will be deleted)
	{
		if (Health < 0.5)
		{
			if (delay == 1) //the enemy will move 1m
			{
				DecrementDist();
				delay = 0;	//next time the enemy won't move
			}
			else //if the enemy didn't move this time step, it will move the next time step.
				delay = 1;
		}
		else
			DecrementDist();
}