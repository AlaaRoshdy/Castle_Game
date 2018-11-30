#ifndef _LINKEDLIST
#define _LINKEDLIST

#include "LLNode.h"
#include "../Enemies/Enemy.h"
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
};

#endif	
