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
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - this function measures height of binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: height, but 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((left_height > right_height) ? 1 : right_height);
}

