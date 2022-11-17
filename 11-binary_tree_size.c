#include "binary_trees.h"

/**
 * binary_tree_size - this function measures size of a binary tree
 * @tree: pointer to root of tree to be measured
 * Return: size, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	n = n + 1;
	n = n + binary_tree_size(tree->left);
	n = n + binary_tree_size(tree->right);
	return (n);
}
