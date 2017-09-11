#include  <iostream>
#include <stdlib.h>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "BST.h"
#include "heap.h"
#include "Hash.h"
#include "AVL.h"
#include "Graph.h"

using namespace std; 

int main()
{


	////////////////////////////
	///////Linked List /////////
	////////////////////////////
	cout << "------------" << endl;
	cout << "Linked list" << endl;
	
	LinkedList<string> list1; 
	list1.add("one");
	list1.add("apple"); 
	list1.add("sand");
	list1.add("mend"); 
	list1.displayList(); 
	list1.remove("sand"); 
	list1.displayList(); 

	//sorted linked list
	LinkedList<string> sortedlist;
	sortedlist.addSorted("sand");
	sortedlist.addSorted("and");
	sortedlist.addSorted("land");
	sortedlist.addSorted("black");
	sortedlist.addSorted("key");
	sortedlist.addSorted("sash");
	sortedlist.displayList();

	int size = sortedlist.getSize(); 
	cout << "The size is " <<size << endl; 


	////////////////////////////
	//////////Stack ////////////
	////////////////////////////
	cout << "------------" << endl;
	cout << "Stack" << endl; 
	int popped; 
	Stack stack; 
	stack.push(3);
	stack.push(8); 
	stack.push(9);
	stack.push(4); 
	stack.pop(popped);
	cout <<"Popping "<< popped << endl;
	stack.pop(popped);
	cout << "Popping " << popped << endl;
	stack.pop(popped);
	cout << "Popping " << popped << endl;

	////////////////////////////
	//////////Queue  ///////////
	////////////////////////////
	cout << "------------" << endl;
	cout << "Queue" << endl; 
	int dequeued;
	Queue  queue; 
	queue.enqueue(6);
	queue.enqueue(8);
	queue.enqueue(4);
	queue.enqueue(5);
	queue.enqueue(1);
	queue.dequeue(dequeued);
	cout << dequeued<<"  ";
	queue.dequeue(dequeued);
	cout << dequeued<<"  ";
	queue.dequeue(dequeued);
	cout << dequeued<<"  ";
	cout << endl;

	////////////////////////////
	////////Binay Tree  ////////
	////////////////////////////
	cout << "------------" << endl;
	cout << " Binary Tree" << endl;
	BST tree; 
	tree.insert(6); 
	tree.insert(9); 
	tree.insert(1); 
	tree.insert(3); 
	tree.insert(8); 
	tree.insert(5); 
	tree.insert(11);
	tree.insert(15);
	tree.insert(25);
	tree.insert(35);
	tree.insert(45);
	tree.showInOrder(); 
	cout << endl<<"searching for number 8 " << endl;
	bool isthere = tree.search(8); 
	if (isthere==true)
		cout << "The number is there" << endl; 
	tree.remove(3); 
	cout << "A number has been removed " << endl; 
	tree.showInOrder();
	cout << endl; 
	cout << "Printing tree view " << endl;
	tree.displayLevelorder();
	cout << endl; 

	////////////////////////////
	////////AVL  ////////
	////////////////////////////
	cout << "------------" << endl;
	cout << "AVL" << endl;
	AVL tree1;
	tree1.insert(6);
	tree1.insert(9);
	tree1.insert(1);
	tree1.insert(3);
	tree1.insert(8);
	//tree1.insert(5);
	//tree1.insert(11);
	//tree1.insert(15);
	//tree1.insert(25);
	//tree1.insert(35);
	//tree1.insert(45);
	tree1.showInOrder();
	cout << endl << "searching for number 8 " << endl;
	bool isthere1 = tree1.search(8);
	if (isthere1 == true)
		cout << "The number is there" << endl;
	//tree1.remove(3);
	//cout << "A number has been removed " << endl;
	tree1.showInOrder();
	cout << endl;
	cout << "Printing tree view " << endl;
	tree1.displayLevelorder();
	cout << endl;

	////////////////////////////
	////////Heap  ////////
	////////////////////////////
	cout << "------------" << endl;
	cout << " heap" << endl;
	
	Heap heap; 
	heap.insert(1);
	heap.insert(4);
	heap.insert(5);
	heap.insert(6);
	heap.insert(2); 
	heap.insert(7); 
	heap.insert(3);
	//return max
	int max = heap.getMax(); 
	cout << "The largest number is " << max << endl; 
	for (int i = 1; i < 7; i++)
	{
		heap.deleteMax();
		max = heap.getMax();
		cout << "The larges number is " << max << endl;

	}
	//heap.display(); 

	vector<int> A; 
	A.push_back(4);
	A.push_back(3);
	A.push_back(8);
	A.push_back(2); 

	Heap heap2;
	vector<int> B = heap2.sort(A); 
	for (int i = 0; i < B.size(); i++)
	{
		cout << B[i] << "  "; 
	}
	cout << endl;
	////////////////////////////
	////////Hash Table ////////
	////////////////////////////

	cout << "------------" << endl;
	cout << " hash" << endl;
	Hash hash(11); 

	hash.insert("table"); 
	hash.insert("money"); 
	hash.insert("weapon");
	hash.insert("paper"); 
	hash.insert("apple");
	hash.insert("sand");
	hash.insert("ice");
	//hash.display(); 

	////////////////////////////
	////////BFS////////
	////////////////////////////
	cout << "------------" << endl;
	cout << " BFS" << endl;
	Graph g; 

	g.addVertex("a"); 
	g.addVertex("b"); 
	g.addVertex("c"); 
	g.addVertex("d"); 

	g.addEdge("a", "b");
	g.addEdge("b", "d");
	g.addEdge("a", "d");
	g.addEdge("c", "d");

	g.Display(); 

	g.testBreadthFirstSearch("a"); 

	////////////////////////////
	////////Dijkstra////////
	////////////////////////////
	cout << "------------" << endl;
	cout << " Djkstra" << endl;

	return 0; 
}
