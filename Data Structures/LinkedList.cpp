#include "LinkedList.h"
using namespace std;

LinkedList::~LinkedList()
{
	ListNode *nodePtr = NULL;
	while (nodePtr!=NULL)
	{
		//keep track of node to be deleted
		ListNode *garbage = nodePtr; 
		//move to next node if any
		nodePtr = nodePtr->next; 
		//delete the 'garbage' node
		delete garbage; 

	}


}
void LinkedList::add(int number)
{
	if (head == NULL)
	{
		head = new ListNode(number);
	}
	else
	{
		//create pointer to traerse the list
		ListNode *nodePtr = head; 
		while (nodePtr->next != NULL)
		{
			nodePtr = nodePtr->next; 
		}

		nodePtr->next = new ListNode(number); 

	
	}
}

void LinkedList::addSorted(int number)
{
	if (head == NULL||head->value >= number)
	{
		head = new ListNode(number, head);
	}
	else
	{
		//create pointer to traerse the list
		ListNode *previousNodePtr = head;
		ListNode *nodePtr = head->next;
		
		while (nodePtr != NULL && nodePtr->value < number)
		{
			previousNodePtr = nodePtr; 
			nodePtr = nodePtr->next;
		}

		previousNodePtr->next = new ListNode(number, nodePtr);


	}
}

void LinkedList::remove(int number)
{
	if (head == NULL)
	{

	}

}
void LinkedList::displayList()
{
	//pointer to the head of the list
	ListNode *nodePtr = head; 
	while (nodePtr)
	{
		cout << nodePtr->value<<"  "; 
		nodePtr = nodePtr->next; 
	}
	cout << endl;
}