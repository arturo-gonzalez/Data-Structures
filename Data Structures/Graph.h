#ifndef Graph_H
#define Graph_H
#include <iostream>
#include "LinkedList.h";
#include <list>
#include <queue>
#include <vector> 
using namespace std;


class Graph
{
	class vertex
	{
	public:
		string data;				//content
		list<vertex*> neighbors;	//list of neighbors
		bool visited;				//is visited
		vertex* predecesor; 
		float dist; 
		vertex *path; 

		vertex(string x)
		{
			data = x; 
		}

	};

	list<vertex*> adj;    // adjacency list

	//find vertex containg value of x
	vertex *findVertex(string x)
	{
		for each(vertex * v in adj)
		{
			if (v->data == x)
			{
				return v; 
			}
		}
		return NULL;
	}


public:
	Graph()  // Constructor
	{

	}

	void addVertex(string x)
	{
		adj.push_back(new vertex(x)); 
	}
	//add directed edge going from x to y
	void addDirectedEdge(string x, string y) 
	{
		vertex * vertx = findVertex(x); 
		vertex * verty = findVertex(y); 

		vertx->neighbors.push_back(verty); 
	}
	//add edge from x to y
	void addEdge(string x, string y)
	{
		addDirectedEdge(x, y); 
		addDirectedEdge(y, x); 
	}
	//Breadth First Search traversal
	void BFS(vertex * s) 
	{
		queue<vertex *> Q;		//vertex queue
		s->visited = true;		//set s to visited
		Q.push(s);				//add s to the queue

		while (Q.size() != 0)		//loop through the queue queue its not empty
		{
			vertex * x = Q.front(); //vertex x is equal to the first elemnt of the queue
			Q.pop();				//remove the first element from the queue; 

			for each(vertex *v in x->neighbors) //loop through the neighbors of x
			{
				if (v->visited == false)
				{
					v->visited = true;			//set visited to true
					v->predecesor = x;			//set x to be its predecessor
					Q.push(v);					//enqueue v
					cout << v->data<<" ";			//print the v's data
					//displayPredecessors(v); 
				}
			}

		}
	}

	void testBreadthFirstSearch(string s)
	{
		BFS(findVertex(s)); 
	}

	void Display()
	{
		for each(vertex *v in adj)
		{
			cout << v->data << ": "; 
			for each(vertex *u in v->neighbors)
			{
				cout << u->data << ", ";
			}
			cout << endl; 
		}
	}

	void displayPredecessors(vertex *s)
	{
		cout << "Its predecessor is " << s->predecesor->data << endl;	//display its predesesor
	}



};

#endif
