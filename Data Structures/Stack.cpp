#include "Stack.h"
#include <iostream>
#include <stdlib.h>
using namespace std; 

void Stack::push(int num)
{
	top = new StackNode(num, top); 

}

void Stack::pop(int &num)
{
	StackNode *temp; 
	if (isEmpty())
	{
		cout << "The Stack is empty" << endl;
		exit(1);
	}
	else
	{
		num = top->value; 
		temp = top; 
		top = top->next; 
		delete temp; 
	}
}

bool Stack::isEmpty()
{
	if (!top)
	{
		return true; 
	}
	else
	{
		return false; 
	}
}
