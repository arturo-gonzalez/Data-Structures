#include "Queue.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

Queue::Queue()
{
	front = NULL;
	rear = NULL;
}

Queue::~Queue()
{
	clear(); 
}

void Queue::enqueue(int num)
{
	if (isEmpty())
	{
		front = new QueueNode(num);
		rear = front; 
	}
	else
	{
		rear->next = new QueueNode(num); 
		rear = rear->next; 
	}
}

void Queue::dequeue(int &num)
{
	QueueNode *temp; 
	if (isEmpty())
	{
		cout << "The quuee is empty" << endl;
		exit(1); 
	}
	else
	{
		num = front->value; 
		temp = front; 
		front = front->next; 
		delete temp; 
	}
}

bool Queue::isEmpty()
{
	if (front == NULL)
		return true;
	else
		return false; 
}

void Queue::clear()
{
	int value;
	while (!isEmpty())
		dequeue(value); 
}
