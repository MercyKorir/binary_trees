#include "binary_trees.h"

/**
 * binary_tree_nodes - this function counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to the root node of the trr to count
 * Return: number of nodes,
 * 0, if tree is NULL,
 * NULL if pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	count = count + (tree->left || tree->right) ? 1 : 0;
	count = count + binary_tree_nodes(tree->left);
	count = count + binary_tree_nodes(tree->right);
	return (count);
}
