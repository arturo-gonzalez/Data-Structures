#ifndef HEAP_H
#define HEAP_H
#include <iostream>
using namespace std;
#include <vector>; 

class Heap
{
private:
	int currentSize;
	vector<int> array;

	void bouldHeap();
	void percolateDown(int x); 
	void percolateUp(int x); 

	int parent(int i)
	{
		return (i - 1) / 2; 
	}

	int left(int i)
	{
		return 2 * i +1 ; 
	}

	int right(int i)
	{
		return 2 * i + 2; 
	}


public: 
	bool isEmpty();
	bool isFull();
	const int findMin();

	void insert(int x);
	void deleteMax();
	int getMax(); 
	void makeEmpty();
	void display();
	vector<int> sort(vector<int>);


};
#endif