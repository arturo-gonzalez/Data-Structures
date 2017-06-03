#include  <iostream>
#include <stdlib.h>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "BST.h"
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


	return 0; 
}
