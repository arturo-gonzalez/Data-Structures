#include  <iostream>
#include <stdlib.h>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "BST.h"
#include "heap.h"

using namespace std; 

int main()
{

	////////////////////////////
	///////Linked List /////////
	////////////////////////////
	cout << "------------" << endl;
	cout << "Linked list" << endl;
	
	LinkedList list; 
	list.add(4);
	list.add(6); 
	list.add(7);
	list.add(3); 
	list.displayList(); 

	//sorted linked list
	LinkedList sortedlist;
	sortedlist.addSorted(7);
	sortedlist.addSorted(6);
	sortedlist.addSorted(4);
	sortedlist.addSorted(1);
	sortedlist.addSorted(9);
	sortedlist.addSorted(2);
	sortedlist.displayList();


	////////////////////////////
	//////////Stack ////////////
	////////////////////////////
	cout << "------------" << endl;
	cout << "Stack" << endl; 
	int popped; 
	Stack stack; 
	stack.push(3);
	stack.push(8); 
	stack.push(9);
	stack.push(4); 
	stack.pop(popped);
	cout <<"Popping "<< popped << endl;
	stack.pop(popped);
	cout << "Popping " << popped << endl;
	stack.pop(popped);
	cout << "Popping " << popped << endl;

	////////////////////////////
	//////////Queue  ///////////
	////////////////////////////
	cout << "------------" << endl;
	cout << "Queue" << endl; 
	int dequeued;
	Queue  queue; 
	queue.enqueue(6);
	queue.enqueue(8);
	queue.enqueue(4);
	queue.enqueue(5);
	queue.enqueue(1);
	queue.dequeue(dequeued);
	cout << dequeued<<"  ";
	queue.dequeue(dequeued);
	cout << dequeued<<"  ";
	queue.dequeue(dequeued);
	cout << dequeued<<"  ";
	cout << endl;

	////////////////////////////
	////////Binay Tree  ////////
	////////////////////////////
	cout << "------------" << endl;
	cout << " Binary Tree" << endl;
	BST tree; 
	tree.insert(6); 
	tree.insert(9); 
	tree.insert(1); 
	tree.insert(3); 
	tree.insert(8); 
	tree.insert(5); 
	tree.showInOrder(); 
	cout << endl<<"searching for number 8 " << endl;
	bool isthere = tree.search(8); 
	if (isthere==true)
		cout << "The number is there" << endl; 
	tree.remove(3); 
	cout << "A number has been removed " << endl; 
	tree.showInOrder();
	cout << endl; 

	////////////////////////////
	////////Heap  ////////
	////////////////////////////
	cout << "------------" << endl;
	cout << " heap" << endl;
	
	Heap heap; 
	heap.insert(1);
	heap.insert(4);
	heap.insert(5);
	heap.insert(6);
	heap.insert(2); 
	heap.insert(7); 
	heap.insert(3);
	//return max
	int max = heap.getMax(); 
	cout << "The largest number is " << max << endl; 
	for (int i = 1; i < 7; i++)
	{
		heap.deleteMax();
		max = heap.getMax();
		cout << "The larges number is " << max << endl;

	}
	//heap.display(); 

	vector<int> A; 
	A.push_back(4);
	A.push_back(3);
	A.push_back(8);
	A.push_back(2); 

	Heap heap2;
	vector<int> B = heap2.sort(A); 
	for (int i = 0; i < B.size(); i++)
	{
		cout << B[i] << "  "; 
	}

	return 0; 
}
