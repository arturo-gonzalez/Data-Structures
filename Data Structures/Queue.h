#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;

class Queue
{
private:
	//queue node
	struct QueueNode
	{
		friend class Queue; 
		int value; 
		QueueNode * next; 
		QueueNode(int value1, QueueNode *next1=NULL)
		{
			value = value1; 
			next = next1; 
		}

	};
	QueueNode *front;
	QueueNode *rear;

public:
	Queue();
	~Queue();
	void enqueue(int);
	void dequeue(int &);
	bool isEmpty();
	void clear();



};
#endif