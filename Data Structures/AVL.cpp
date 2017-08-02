#include "AVL.h"
#include <iostream>
#include <algorithm>
using namespace std;

void AVL::insert(TreeNode * &tree, int num)
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
		if (height(tree->left) - height(tree->right) == 2)
		{
			if (tree->left->value > num)
			{
				rotateWithLeftChild(tree); 
			}
			else
			{
				doubleWithLeftChild(tree); 
			}
		}
	}
	else if (num > tree->value)
	{
		insert(tree->right, num);
		if (height(tree->right) - height(tree->left) == 2)
		{
			if (tree->right->value > num)
			{
				rotateWithRightChild(tree);
			}
			else
			{
				doubleWithRightChild(tree);
			}
		}
	}

}

bool AVL::search(int num)
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

void AVL::remove(TreeNode *&tree, int num)
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

void AVL::makeDeletion(TreeNode*&tree)
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

void AVL::destroySubtree(TreeNode *tree)
{
	if (!tree)
		return;
	destroySubtree(tree->left);
	destroySubtree(tree->right);
	delete tree;
}

void AVL::displayInOrder(TreeNode *tree)
{
	if (tree)
	{
		displayInOrder(tree->left);
		cout << tree->value << "  ";
		displayInOrder(tree->right);
	}
}

void AVL::displayPreOrder(TreeNode * tree)
{
	if (tree)
	{
		cout << tree->value << "  ";
		displayPreOrder(tree->left);
		displayPreOrder(tree->right);
	}

}

void AVL::displayPostOrder(TreeNode * tree)
{
	if (tree)
	{
		displayPostOrder(tree->left);
		displayPostOrder(tree->right);
		cout << tree->value << "  ";
	}
}

void AVL::printLevelorder(TreeNode * tree)
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

void AVL::printGivenlevel(TreeNode * tree, int level)
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
		printGivenlevel(tree->left, level - 1);
		printGivenlevel(tree->right, level - 1);
	}
}

int AVL::height(TreeNode * tree)
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

void AVL::rotateWithLeftChild(TreeNode * &tree)
{
	TreeNode *k1 = tree->right;
	tree->left = k1->right;
	k1->right = tree; 
	tree->height = max(height(tree->left), height(tree->right)) + 1; 

}

void AVL::doubleWithLeftChild(TreeNode * &tree)
{
	rotateWithRightChild(tree->left);
	rotateWithLeftChild(tree); 
}

void AVL::rotateWithRightChild(TreeNode * &tree)
{
	TreeNode *k1 = tree->left;
	tree->right = k1->left;
	k1->left = tree;
	tree->height = max(height(tree->left), height(tree->right)) + 1;
}

void AVL::doubleWithRightChild(TreeNode * &tree)
{
	rotateWithRightChild(tree->right);
	rotateWithLeftChild(tree);
}