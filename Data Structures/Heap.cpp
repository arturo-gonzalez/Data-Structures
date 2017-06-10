#include "Heap.h"
#include <iostream>
using namespace std; 

void Heap::percolateDown(int x)
{
	int l = left(x); 
	int r = right(x); 

	int largest = x; 

	if (l < array.size() && array[l] > array[x])
	{
		largest = l; 
	}
	if (r < array.size() && array[r] > array[largest])
	{
		largest = r; 
	}
	if (largest != x)
	{
		swap(array[largest], array[x]); 
		percolateDown(largest); 
	}

}
void Heap::percolateUp(int x)
{

	if (array[parent(x)] < array[x])
	{
		swap(array[x], array[parent(x)]);

		percolateUp(parent(x));
	}

}




void Heap::insert(int x)
{
	int i = array.size()-1; 
	array.push_back(x); 
	if (array.size() > 1)
	{
		percolateUp(i);
	}
	
}
void Heap::deleteMax()
{
	if (array.size() != 0)
	{
		array[0] = array.back(); 
		array.pop_back();
		percolateDown(0); 
	}
	
}
int Heap::getMax()
{
	if (array.size() != 0)
	{
		return array[0]; 
	}
}
void makeEmpty()
{

}

void Heap::display()
{
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << "  "; 
	}
}

vector<int> Heap::sort(vector<int> A)
{
	for (int i = 0; i < A.size(); i++)
	{
		
		insert(A[i]); 
	}
	vector<int> B; 
	for (int i = 0; i < A.size(); i++)
	{
		B.push_back(getMax()); 
		deleteMax(); 
	}
	return B; 
}
