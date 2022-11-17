#include "binary_trees.h"

/**
 * binary_tree_leaves - this function counts leaves in a binary tree
 * @tree: pointer to root node of tree to count leaves
 * Return: no of leaves,
 * 0 if tree is NULL, NULL if pointer has no leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	count = count + (!tree->left & !tree->right) ? 1 : 0;
	count = count + binary_tree_leaves(tree->left);
	count = count + binary_tree_leaves(tree->right);
	return (count);
}
