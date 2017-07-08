#ifndef HASH_H
#define HASH_H
#include <iostream>
using namespace std;
#include <vector>; 
#include "LinkedList.h";
#include <list>

class Hash
{
private:
	//vector<LinkedList<string> >  lists; 
	
	int size;
	vector<LinkedList<string> > lists;
	

public:
	Hash(int size = 11); 
	int hash(string key, int size); 
	int find(string); 
	void insert(string); 
	void remove(string); 
	void display(); 

};
#endif