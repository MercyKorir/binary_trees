#include "binary_trees.h"

/**
 * binary_tree_uncle - this function finds uncle of a node
 * @node: pointer to node to find uncle
 * Return: pointer to the uncle node
 * NULL, if node is NULL
 * NULL, if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
