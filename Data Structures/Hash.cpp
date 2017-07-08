#include "Hash.h"
#include <iostream>
using namespace std;

Hash::Hash(int size1)
{
	size = size1; 
	//vector<LinkedList<string> > lists(size);
	lists.resize(size); 

}
int Hash::hash(string key, int size)
{
	int hashval = 0; 
	for (int i = 0; i < key.length(); i++)
	{
		hashval += key[i]; 
	}
	return hashval % size; 
}
int Hash::find(string i)
{
	return 0; 
}

void Hash::insert(string x)
{
	LinkedList<string> list = lists[hash(x, sizeof(lists))];

	list.add(x); 
}
void Hash::remove(string x)
{
	//lists[hash(x, lists.size())].remove(x); 
}

void Hash::display()
{
	for (int i = 0; i < sizeof(lists); i++)
	{
		lists[i].displayList(); 
		//cout << "hi"; 
	}
}