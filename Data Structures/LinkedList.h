#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>

using namespace std; 

template<class T> 
class LinkedList
{
private: 

	//list node
	template<class T>
	struct ListNode
	{
		ListNode<T> *next;
		T value;
		ListNode(T value1, ListNode<T> *next1 = NULL)
		{
			next = next1;
			value = value1; 
		}

	};

	ListNode<T> *head; //head
public:

	//constructor
	LinkedList();
	~LinkedList(); //destructor
	void add(T number);
	void addSorted(T number); 
	void remove(T number);
	void displayList();

	
};

template<class T>
LinkedList<T>::LinkedList()
{
	head = NULL;
}


template<class T>
LinkedList<T>::~LinkedList()
{
	ListNode<T> *nodePtr = NULL;
	while (nodePtr != NULL)
	{
		//keep track of node to be deleted
		ListNode<T> *garbage = nodePtr;
		//move to next node if any
		nodePtr = nodePtr->next;
		//delete the 'garbage' node
		delete garbage;
	}

}

template <class T>
void LinkedList<T>::add(T number)
{
	if (head == NULL)
	{
		head = new ListNode<T>(number);
	}
	else
	{
		//create pointer to traerse the list
		ListNode<T> *nodePtr = head;
		while (nodePtr->next != NULL)
		{
			nodePtr = nodePtr->next;
		}

		nodePtr->next = new ListNode<T>(number);


	}
}

template <class T>
void LinkedList<T>::addSorted(T number)
{
	if (head == NULL || head->value >= number)
	{
		head = new ListNode<T>(number, head);
	}
	else
	{
		//create pointer to traerse the list
		ListNode<T> *previousNodePtr = head;
		ListNode<T> *nodePtr = head->next;

		while (nodePtr != NULL && nodePtr->value < number)
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}

		previousNodePtr->next = new ListNode<T>(number, nodePtr);


	}
}

template <class T>
void LinkedList<T>::remove(T number)
{
	if (head == NULL)
	{

	}

}

template <class T>
void LinkedList<T>::displayList()
{
	//pointer to the head of the list
	ListNode<T> *nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << "  ";
		nodePtr = nodePtr->next;
	}
	cout << endl;
}




#endif
