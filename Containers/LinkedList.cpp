#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
	count = 0;
	Head = NULL;
}

//List is being desturcted ==> delete all items in the list
LinkedList::~LinkedList()
{
	DeleteAll();
}
////////////////////////////////////////////////////////////////////////
/*
* Function: PrintList.
* prints the values of all nodes in a linked list.
*/
void LinkedList::PrintList()
{
	cout<<"\nList has "<<count<<" nodes";
	cout<<"\nprinting list contents:\n\n";
	Node *p = Head;
	
	while(p != NULL)
	{
		cout << "[ " << p->getItem() << " ]";
		cout << "--->";
		p = p->getNext();
	}
	cout << "*\n";
}
////////////////////////////////////////////////////////////////////////
/*
* Function: InsertBeg.
* Creates a new node and adds it to the beginning of a linked list.
* 
* Parameters:
*	- data : The value to be stored in the new node.
*/
void LinkedList::InsertBeg(int data)
{
	Node *R = new Node(data);
	R->setNext(Head);
	Head = R;
	count++;

}
////////////////////////////////////////////////////////////////////////
/*
* Function: DeleteAll.
* Deletes all nodes of the list.
*/
void LinkedList::DeleteAll()
{
	Node *P = Head;
	while (Head != NULL)
	{
		P = Head->getNext();
		delete Head;
		Head = P;
	}
	count = 0;
}

void LinkedList::InsertEnd(int data)
{	
	Node *R = new Node(data);
	Node *P = Head;
	if (Head == NULL) {
		this->InsertBeg(data);
		return;
	}
	while(P->getNext() != NULL)
		P = P->getNext();
	R->setNext(NULL);
	P->setNext(R);
	count++;
	return;
}

bool LinkedList::Find(int Key)
{
	Node *P = Head;
	while (P != NULL) {
		if (P->getItem() == Key)
			return true;
		P = P->getNext();
	}
	return false;
	
}

int LinkedList::CountOccurance(int value)
{
	int cnt = 0;
	Node *P = Head;
	while (P != NULL) {
		if (P->getItem() == value) 
			cnt++;
		
		P = P->getNext();
	}
	return cnt;
}

void LinkedList::DeleteFirst()
{
	if (Head == NULL)
		return;
	Node *temp = Head->getNext();
	delete Head;
	Head = temp;
	return;

}

void LinkedList::DeleteLast()
{
	Node *P = Head;
	if (P == NULL)
		return;
	if (P->getNext() == NULL)
	{
		delete P;
		Head = NULL;
		count--;
		return;
	}
	while ((P->getNext())->getNext() != NULL)
		P = P->getNext();
	Node *temp = P->getNext();
	delete temp;
	P->setNext(NULL);
	count--;

}

bool LinkedList::DeleteNode(int value)
{
	Node *P = Head;
	if (P->getItem() == value) {
		Head = P->getNext();
		delete P;
		count--;
		return true;
	}
	while (P != NULL) {
		if (P->getNext() !=NULL && (P->getNext())->getItem() == value) {
			Node *temp = P->getNext();
			Node *nxt = temp->getNext();
			delete temp;
			P->setNext(nxt);
			count--;
			return true;
		}

		P = P->getNext();
	}
	return false;
}

bool LinkedList::DeleteNodes(int value)
{
	bool found = false;
	Node *P = Head;
	if (P->getItem() == value) {
		Head = P->getNext();
		Node *nxt = P->getNext();
		delete P;
		P = nxt;
		count--;
		found = true;

	}
	while (P != NULL) {
		if (P->getNext() != NULL && (P->getNext())->getItem() == value) {
			Node *temp = P->getNext();
			Node *nxt = temp->getNext();
			delete temp;
			P->setNext(nxt);
			count--;
			found = true;
		}

		P = P->getNext();
	}
	return found;
}


