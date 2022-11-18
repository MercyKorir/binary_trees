#include "binary_trees.h"

/**
 * binary_tree_rotate_right - this function performs a right
 * rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *curr;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	curr = tree->left;
	temp = curr->right;
	curr->right = tree;
	tree->left = temp;
	if (temp != NULL)
		temp->parent = tree;
	temp = tree->parent;
	tree->parent = curr;
	curr->parent = temp;
	if (temp != NULL)
	{
		if (temp->left == tree)
			temp->left = curr;
		else
			temp->right = curr;
	}
	return (curr);
}
