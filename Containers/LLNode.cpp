
#include "LLNode.h"

LLNode::LLNode( )
{
	next= NULL;
}  // end default constructor

LLNode::LLNode(Enemy* newItem)
{
	item = newItem;
	next= NULL;

}//end constructor

void LLNode::setItem(Enemy* newItem)
{
	item = newItem;
} // end setItem

void LLNode::setNext(LLNode* nextNodePtr)
{
next = nextNodePtr;
} // end setNext

Enemy* LLNode::getItem() const
{
return item;
} // end getItem

LLNode* LLNode::getNext() const
{
return next;
} // end getNext