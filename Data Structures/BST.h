#ifndef BST_H
#define BST_H
#include <iostream>
using namespace std;

class BST
{
private:
	class TreeNode
	{
		friend class BST; 
		int value; 
		TreeNode *left; 
		TreeNode *right; 
		TreeNode(int value1, TreeNode *left1=NULL, TreeNode *right1= NULL)
		{
			value = value1;
			left = left1; 
			right = right1; 
		}
	};

	TreeNode *root; 

	//helper functions; 
	void insert(TreeNode *&, int); 
	void remove(TreeNode *&, int); 
	void destroySubtree(TreeNode*);
	void makeDeletion(TreeNode *&); 
	void displayInOrder(TreeNode *); 
	void displayPreOrder(TreeNode *); 
	void displayPostOrder(TreeNode *); 
	void printLevelorder(TreeNode *); 
	void printGivenlevel(TreeNode *, int); 
	int height(TreeNode*); 


public: 

	BST()
	{
		root = NULL; 
	}
	~BST()
	{
		destroySubtree(root); 
	}
	void insert(int num)
	{
		insert(root, num); 
	}
	void remove(int num)
	{
		remove(root, num); 
	}
	bool search(int);
	void showInOrder(void)
	{
		displayInOrder(root); 
	}
	void showPreOrder()
	{
		displayPreOrder(root); 
	}
	void showPostOrder()
	{
		displayPostOrder(root);
	}

	void displayLevelorder()
	{
		printLevelorder(root); 
	}



	void getHeight()
	{
		height(root); 
	}

};
#endif
