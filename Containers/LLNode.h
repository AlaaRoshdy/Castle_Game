//NULL is not a standard C++ keyword or defined symbol, Therefore the following 3 lines of code
//make your code portable to compilers that do not define NULL by default.
#ifndef NULL
#define NULL 0
#endif
#ifndef _LLNode
#define _LLNode
#include "../Enemies/Enemy.h"

//First let's declare a singele LLNode in the list
class LLNode
{
private :
	Enemy* item;	// A data item (can be any complex sturcture)
	LLNode* next;	// Pointer to next LLNode
public :
	LLNode();
	LLNode(Enemy* newItem);
	void setItem(Enemy*  newItem);
	void setNext(LLNode* nextNodePtr);
	Enemy* getItem() const ;
	LLNode* getNext() const ;
}; // end LLNode

#endif	
