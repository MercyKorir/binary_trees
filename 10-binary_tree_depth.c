#include "binary_trees.h"

/**
 * binary_tree_depth - this function measures the depth
 * of a node in a binary tree
 * @tree: pointer to node to measure depth
 * Return: depth, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
