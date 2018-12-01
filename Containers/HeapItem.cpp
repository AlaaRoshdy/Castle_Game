#include  "HeapItem.h"
#include <iostream>
using namespace std;
//-----------------------------------
// Default constructor
//-----------------------------------
HeapItem::HeapItem()
{
	m_iKey = 0;
	m_dData = nullptr;
}

//-----------------------------------
// Constructor
//-----------------------------------
HeapItem::HeapItem(int key, Enemy* data)
{
	m_iKey = key;
	m_dData = data;
}

//-----------------------------------
// Destructor
//-----------------------------------
HeapItem::~HeapItem()
{
}

//-----------------------------------
// Return item priority
//-----------------------------------
int HeapItem::getKey()
{
	return m_iKey;
}

//-----------------------------------
// Set the priority key value
//-----------------------------------
void HeapItem::setKey(int key)
{
	m_iKey = key;
}

//-----------------------------------
// Return data item
//-----------------------------------
Enemy* HeapItem::getData()
{
	return m_dData;
}

//-----------------------------------
// Set the data item value
//-----------------------------------
void HeapItem::setData(Enemy* data)
{
	m_dData = data;
}