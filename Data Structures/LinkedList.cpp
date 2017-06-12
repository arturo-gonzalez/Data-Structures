////#include "LinkedList.h"
//using namespace std;
//
//template<class T> 
//LinkedList<T>::~LinkedList()
//{
//	ListNode *nodePtr = NULL;
//	while (nodePtr!=NULL)
//	{
//		//keep track of node to be deleted
//		ListNode *garbage = nodePtr; 
//		//move to next node if any
//		nodePtr = nodePtr->next; 
//		//delete the 'garbage' node
//		delete garbage; 
//
//	}
//
//
//}
//
//template<class T> 
//void LinkedList<T>::add(T number)
//{
//	if (head == NULL)
//	{
//		head = new ListNode(number);
//	}
//	else
//	{
//		//create pointer to traerse the list
//		ListNode *nodePtr = head; 
//		while (nodePtr->next != NULL)
//		{
//			nodePtr = nodePtr->next; 
//		}
//
//		nodePtr->next = new ListNode(number); 
//
//	
//	}
//}
//
//template<class T> 
//void LinkedList<T>::addSorted(T number)
//{
//	if (head == NULL||head->value >= number)
//	{
//		head = new ListNode(number, head);
//	}
//	else
//	{
//		//create pointer to traerse the list
//		ListNode *previousNodePtr = head;
//		ListNode *nodePtr = head->next;
//		
//		while (nodePtr != NULL && nodePtr->value < number)
//		{
//			previousNodePtr = nodePtr; 
//			nodePtr = nodePtr->next;
//		}
//
//		previousNodePtr->next = new ListNode(number, nodePtr);
//
//
//	}
//}
//
//template<class T> 
//void LinkedList<T>::remove(T number)
//{
//	if (head == NULL)
//	{
//
//	}
//
//}
// 
//template<class T>
//void LinkedList<T>::displayList()
//{
//	//pointer to the head of the list
//	ListNode *nodePtr = head; 
//	while (nodePtr)
//	{
//		cout << nodePtr->value<<"  "; 
//		nodePtr = nodePtr->next; 
//	}
//	cout << endl;
//}