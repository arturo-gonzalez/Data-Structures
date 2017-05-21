#include  <iostream>
#include "LinkedList.h"
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

	////////////////////////////
	//////////Queue  ///////////
	////////////////////////////

	////////////////////////////
	////////Binay Tree  ////////
	////////////////////////////

	return 0; 
}