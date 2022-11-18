#include "binary_trees.h"

/**
 * binary_tree_rotate_left - this function performs a left
 * rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree
 * after rotation
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp, *curr;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	curr = tree->right;
	temp = curr->left;
	curr->left = tree;
	tree->right = temp;
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
