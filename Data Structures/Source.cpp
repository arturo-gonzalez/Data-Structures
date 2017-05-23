#include  <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
using namespace std; 

int main()
{

	////////////////////////////
	///////Linked List /////////
	////////////////////////////
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
	////////////////////////////
	////////Binay Tree  ////////
	////////////////////////////

	return 0; 
}