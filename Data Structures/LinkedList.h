#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std; 

class LinkedList
{
private: 

	//list node
	struct ListNode
	{
		ListNode *next;
		int value;
		ListNode(int value1, ListNode *next1 = NULL)
		{
			next = next1;
			value = value1; 
		}

	};

	ListNode *head; //head
public:

	//constructor
	LinkedList()
	{
		head = NULL; 
	}
	
	~LinkedList(); //destructor
	void add(int number);
	void addSorted(int number); 
	void remove(int number);
	void displayList();

};
#endif