#include "BST.h"
#include <iostream>
using namespace std;

void BST::insert(TreeNode * &tree, int num)
{
	if (!tree)
	{
		tree = new TreeNode(num); 
		return; 
	}

	if (tree->value == num)
	{
		return; 
	}
	if (num < tree->value)
	{
		insert(tree->left, num); 
	}
	else
	{
		insert(tree->right, num); 
	}

}

bool BST::search(int num)
{
	TreeNode *tree = root; 
	while (tree)
	{
		if (tree->value == num)
			return true;
		else if (num < tree->value)
			tree = tree->left;
		else
			tree = tree->right; 
	}
}

void BST::remove(TreeNode *&tree, int num)
{
	if (tree == NULL)
		return;
	if (num < tree->value)
		remove(tree->left, num);
	else if (num > tree->value)
		remove(tree->right, num);
	else
		makeDeletion(tree); 
}

void BST::makeDeletion(TreeNode*&tree)
{
	TreeNode *nodeToDelete = tree; 

	TreeNode *attachPoint; //place where the left subtree is attached 

	if (tree->right == NULL)
		tree = tree->left;
	else if (tree->left == NULL)
		tree = tree->right; 
	else//node has two children
	{
		//access right subtree
		attachPoint = tree->right; 
		//find smallest node on right subtree
		while (attachPoint->left != NULL)
		{
			attachPoint = attachPoint->left; 
		}
		attachPoint->left = tree->left; 
		tree = tree->right; 
	}
	delete nodeToDelete; 

}

void BST::destroySubtree(TreeNode *tree)
{
	if (!tree)
		return; 
	destroySubtree(tree->left);
	destroySubtree(tree->right); 
	delete tree; 
}

void BST::displayInOrder(TreeNode *tree)
{
	if (tree)
	{
		displayInOrder(tree->left);
		cout << tree->value << "  ";
		displayInOrder(tree->right); 
	}
}

void BST::displayPreOrder(TreeNode * tree)
{
	if (tree)
	{
		cout << tree->value << "  ";
		displayPreOrder(tree->left);
		displayPreOrder(tree->right); 
	}

}

void BST::displayPostOrder(TreeNode * tree)
{
	if (tree)
	{
		displayPostOrder(tree->left);
		displayPostOrder(tree->right); 
		cout << tree->value << "  "; 
	}
}