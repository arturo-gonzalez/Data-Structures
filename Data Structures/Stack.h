#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

class Stack
{
private:

	//queue node
	class StackNode
	{
		friend class Stack; 
		int value;
		StackNode *next;

		StackNode(int value1, StackNode *next1 = NULL)
		{
			next = next1;
			value = value1; 
		}
	};

	StackNode *top; 

public: 
	Stack()
	{
		top = NULL; 
	}

	//~Stack();
	void push(int);
	void pop(int &);
	bool isEmpty(); 

};
#endif