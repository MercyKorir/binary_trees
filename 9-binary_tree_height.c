#include "binary_trees.h"

/**
 * binary_tree_height - this function measures height of binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: height, but 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree != NULL)
	{
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_height > right_height) ? 1 : right_height);
	}
	return (0);
}
