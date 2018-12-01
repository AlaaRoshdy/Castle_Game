#pragma once
#ifndef HEAPITEM_H
#define HEAPITEM_H

#include "Enemies\Enemy.h"
class HeapItem
{
private:
	int m_iKey;                              // Heap item priority key
	Enemy* m_dData;                         // Dummy data value

public:
	HeapItem();                              // Default constructor
	HeapItem(int key, Enemy* data);     // Constructor
	~HeapItem();                         // Destructor
	int getKey();                         // Return item priority
	void setKey(int key);               // Set the priority key value
	Enemy* getData();                    // Return data item
	void setData(Enemy* data);          // Set the data item value
};

#endif