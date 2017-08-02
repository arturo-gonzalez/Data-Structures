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

void BST::printLevelorder(TreeNode * tree)
{
	int h = height(tree);
	int i; 
	for (i = 1; i <= h; i++)
	{
		cout << i; 
		printGivenlevel(root, i);
		cout << endl;
	}
		

}

void BST::printGivenlevel(TreeNode * tree, int level)
{
	if (tree == NULL)
	{
		return; 
	}
	if (level == 1)
	{
		cout << tree->value; 
	}
	else if (level > 1)
	{
		printGivenlevel(tree->left, level -1);
		printGivenlevel(tree->right, level - 1);
	}
}

int BST::height(TreeNode * tree)
{
	if (tree == NULL)
	{
		return 0; 
	}
	else
	{
		int lheight = height(tree->left);
		int rheight = height(tree->right); 

		if (lheight > rheight)
			return(lheight + 1);
		else return(rheight + 1);
	}
}