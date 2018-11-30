
#include "LLNode.h"

LLNode::LLNode( )
{
	next= NULL;
}  // end default constructor

LLNode::LLNode( int newItem)
{
	item = newItem;
	next= NULL;

}//end constructor

void LLNode::setItem( int newItem)
{
	item = newItem;
} // end setItem

void LLNode::setNext(LLNode* nextNodePtr)
{
next = nextNodePtr;
} // end setNext

int LLNode::getItem() const
{
return item;
} // end getItem

LLNode* LLNode::getNext() const
{
return next;
} // end getNext