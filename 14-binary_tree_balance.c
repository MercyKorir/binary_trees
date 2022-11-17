#include "binary_trees.h"

/**
 * binary_tree_balance - this function measure the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: balance factor,
 * 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal = 0;

	if (tree == NULL)
		return (0);
	bal = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (bal);
}
