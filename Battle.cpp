#include "Battle.h"

#include <iostream>


Battle::Battle()
{
	EnemyCount = 0;
}

void Battle::AddEnemy(Enemy* Ptr)
{
	if (EnemyCount < MaxEnemyCount) 
		BEnemiesForDraw[EnemyCount++] = Ptr;

	// Note that this function doesn't allocate any enemy objects
	// It only makes the first free pointer in the array
	// points to the same enemy pointed to by "Ptr"
}


Castle * Battle::GetCastle()
{
	return &BCastle;
}

void Battle::RunSimulation()
{
	//Just_A_Demo();
	LoadInput();
	GUI * pGUI = new GUI;
	pGUI->PrintMessage("This is phase 1. Click to move to next step");
	// Drawing the battle

	pGUI->DrawBattle(BEnemiesForDraw, EnemyCount);

	Point p;
	pGUI->GetPointClicked(p);
	for (int TimeStep = 1; TimeStep <= 30; TimeStep++)
	{
		//move the old 
		ActiveList.MoveAll();
		//check the top of the inactive Queue if it's time dequeue and add to the enemies container.
		Enemy * TestEnemy; 
		Enemy * NewEnemy;
		while (InactiveList.peekFront(TestEnemy)  && TestEnemy->getATime()<=TimeStep)
		{
			InactiveList.dequeue(NewEnemy);//deQ the enemy
			ActiveList.InsertBeg(NewEnemy);
			EnemyCount++;
			//add to the cointaner array/linkedList
			//peekFront again 
		}
		BCastle.AllAtack(ActiveList);
		DisplayStats();
		//fill the BEnemiesForDraw from the ActiveList LL.
		ActiveList.ArrayOfPtrs(BEnemiesForDraw, EnemyCount);

		// Redraw the enemies
		pGUI->DrawBattle(BEnemiesForDraw, EnemyCount);

		pGUI->GetPointClicked(p);
	}
	pGUI->PrintMessage(BCastle.updateMsg());
	delete pGUI;

}

void Battle::LoadInput()
{
	ifstream LoadFile;
	LoadFile.open("Finalinput.txt");
	double TH; LoadFile >> TH; int N; LoadFile >> N; double TP; LoadFile >> TP;
	// InitializeTowers()
	Enemy * NewEnemy;
	BCastle.InitializeTowers(TH, N, TP);
	while (1) {
		int SeqNum;  LoadFile >> SeqNum;
		if (SeqNum == -1)
			break;
		int TYPin; LoadFile >> TYPin;  ENEMY TYP = ENEMY(TYPin-1); // 1 2 3 to 0 1 2 
		int ArrivalTime; LoadFile >> ArrivalTime;
		double EnemyHealth; LoadFile >> EnemyHealth;
		double EnemyPower;  LoadFile >> EnemyPower;
		int RLD;  LoadFile >> RLD;
		char REGin;  LoadFile >> REGin;
		REGION REG;
		switch (REGin) 
		{
		case 'A':
			REG = A_REG;
			break;
		case 'B':
			REG = B_REG;
			break;
		case 'C':
			REG = C_REG;
			break;
		case 'D':
			REG = D_REG;
			break;
		}
		switch (TYP) {
		case fighter:
			NewEnemy = new Fighter(REG, SeqNum, EnemyHealth, ArrivalTime, EnemyPower,RLD);
			break;
		case healer:
			 NewEnemy= new Healer(REG, SeqNum, EnemyHealth, ArrivalTime, EnemyPower, RLD);
			break;
		case freezer:
			 NewEnemy= new Freezer(REG, SeqNum, EnemyHealth, ArrivalTime, EnemyPower, RLD);
			break;
		}
		InactiveList.enqueue(NewEnemy);
	}
	NewEnemy = NULL;
	delete NewEnemy;
	return;
}

void Battle::DisplayStats()
{
	
}


//This is just a demo function for project introductory phase
//It should be removed in phases 1&2
/*void Battle::Just_A_Demo()
{
	
	std::cout<<"\nWelcome to Castle Battle:\n";
	std::cout<<"\nIn phase2, you will be asked to select game mode\n";
	std::cout<<"\nFor now just press ENTER key to continue...";
	
	char tmp[10];
	std::cin.getline(tmp,10);
	//
	// THIS IS JUST A DEMO
	// IT SHOULD BE REMOVED IN PHASE 1 AND PHASE 2
	//
	
	GUI * pGUI = new GUI;

	pGUI->PrintMessage("This is Just a Demo. It should be changed ib phase1 & phase2. Click to move to next step");

	
	 
	// Declare some enemies and fill their data
	// In the game, enemies should be loaded from an input file
	// and should be dynamically allocated
	
	Enemy e1(DARKBLUE, A_REG, 6);
	Enemy e2(DARKBLUE, D_REG, 60);
	Enemy e3(DARKOLIVEGREEN, B_REG, 60); 
	Enemy e4(DARKOLIVEGREEN, A_REG, 4);
	Enemy e5(ORANGERED, C_REG, 19); 
	Enemy e6(ORANGERED, C_REG, 30); 
	Enemy e7(ORANGERED, A_REG, 2);
	Enemy e8(DARKOLIVEGREEN, C_REG, 7); 
	Enemy e9(ORANGERED, A_REG, 30); 
	Enemy e10(DARKBLUE, C_REG, 4);
	Enemy e11(GREEN, A_REG, 20);
	

	// Adding the enemies to the battle
	AddEnemy(&e1);
	AddEnemy(&e2);
	AddEnemy(&e3);
	AddEnemy(&e4);
	AddEnemy(&e5);
	AddEnemy(&e6);
	AddEnemy(&e7);
	AddEnemy(&e8);
	AddEnemy(&e9);
	AddEnemy(&e10);
	AddEnemy(&e11);

	// Drawing the battle
	pGUI->DrawBattle(BEnemiesForDraw, EnemyCount);

	Point p;
	pGUI->GetPointClicked(p);

	// Now a demo to move enemies some time steps
	// TimeStep is a normal integer that is incremented each time by 1
	for(int TimeStep = 1 ; TimeStep <= 30 ; TimeStep++)
	{

		// Decrement the distance of each enemy. Just for the sake of demo
		e1.DecrementDist();
		e2.DecrementDist();
		e3.DecrementDist();
		e4.DecrementDist();
		e5.DecrementDist();
		e6.DecrementDist();
		e7.DecrementDist();
		e8.DecrementDist();
		e9.DecrementDist();
		e10.DecrementDist();

		// Redraw the enemies
		pGUI->DrawBattle(BEnemiesForDraw, EnemyCount);

		pGUI->GetPointClicked(p);
	}

	delete pGUI;
}*/