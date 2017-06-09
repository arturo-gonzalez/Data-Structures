#include "Heap.h"
#include <iostream>
using namespace std; 

void Heap::percolateDown(int x)
{
	int l = left(x); 
	int r = right(x); 

}
void Heap::percolateUp(int x)
{
	if (array[parent(x)] > array[x])
	{
		swap(array[x], array[parent(x)]);

		percolateUp(parent(x));
	}

}

bool Heap::isEmpty()
{

}
bool Heap::isFull()
{

}
const int Heap::findMin()
{

}

void Heap::insert(int x)
{
	int i = array.size()-1; 
	array.push_back(x); 
	percolateUp(i); 
}
void Heap::deleteMax()
{

}
void Heap::getMax()
{

}
void makeEmpty()
{

}
