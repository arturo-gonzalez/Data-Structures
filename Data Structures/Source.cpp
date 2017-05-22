#include  <iostream>
#include "LinkedList.h"
#include "Stack.h"
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

	////////////////////////////
	////////Binay Tree  ////////
	////////////////////////////

	return 0; 
}