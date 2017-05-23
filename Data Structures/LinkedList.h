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

	//~LinkedList()
	//{
	//	ListNode<T> *nodePtr = NULL;
	//	while (nodePtr != NULL)
	//	{
	//		//keep track of node to be deleted
	//		ListNode<T> *garbage = nodePtr;
	//		//move to next node if any
	//		nodePtr = nodePtr->next;
	//		//delete the 'garbage' node
	//		delete garbage;

	//	}


	//}

	//template <class T>
	//void add(T number)
	//{
	//	if (head == NULL)
	//	{
	//		head = new ListNode<T>(number);
	//	}
	//	else
	//	{
	//		//create pointer to traerse the list
	//		ListNode<T> *nodePtr = head;
	//		while (nodePtr->next != NULL)
	//		{
	//			nodePtr = nodePtr->next;
	//		}

	//		nodePtr->next = new ListNode<T>(number);


	//	}
	//}

	//template <class T>
	//void addSorted(T number)
	//{
	//	if (head == NULL || head->value >= number)
	//	{
	//		head = new ListNode<T>(number, head);
	//	}
	//	else
	//	{
	//		//create pointer to traerse the list
	//		ListNode<T> *previousNodePtr = head;
	//		ListNode<T> *nodePtr = head->next;

	//		while (nodePtr != NULL && nodePtr->value < number)
	//		{
	//			previousNodePtr = nodePtr;
	//			nodePtr = nodePtr->next;
	//		}

	//		previousNodePtr->next = new ListNode<T>(number, nodePtr);


	//	}
	//}

	//template <class T>
	//void remove(T number)
	//{
	//	if (head == NULL)
	//	{

	//	}

	//}
	//
	//void displayList()
	//{
	//	//pointer to the head of the list
	//	ListNode<T> *nodePtr = head;
	//	while (nodePtr)
	//	{
	//		cout << nodePtr->value << "  ";
	//		nodePtr = nodePtr->next;
	//	}
	//	cout << endl;
	//}

};
#endif
