#ifndef _LINKEDLIST
#define _LINKEDLIST

#include "LLNode.h"
#include "../Enemies/Enemy.h"
#include "../Containers/Heap.h"
class LinkedList
{
private:
	LLNode *Head;	//Pointer to the head of the list
		//You can add tail pointer too (depending on your problem)
	int count;	//Number of nodes in the list
public:
	LinkedList();
	~LinkedList();
	void InsertBeg(Enemy* data);	//inserts a new node at list head
	void DeleteAll();	//Deletes all nodes in the list
	bool DeleteNode(Enemy* value);
	void MoveAll();
	void ArrayOfPtrs(Enemy* Arr[]);
	//Divide function will "distribute" the data of the main linked list into 4 main linked lists based on the 
	//region the enemy belongs to.
	void Divide(LinkedList& RegionA, LinkedList& RegionB, LinkedList& RegionC, LinkedList& RegionD) const;
	void ToHeap(Heap& EnemyPriority) const;
};

#endif	
