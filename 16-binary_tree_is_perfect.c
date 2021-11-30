#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_nodes - binary_tree_nodes
 * @tree: tree
 * Return: amount of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (left + right + 1);
}

/**
 * binary_tree_is_perfect - check if perfect
 * @tree: tree
 * Return: boolean
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t expected = 2, height, i;

	height = binary_tree_height(tree);
	for (i = 0; i < height; i++)
		expected *= 2;
	expected--;
	if (binary_tree_nodes(tree) == expected)
		return (1);
	return (0);
}
