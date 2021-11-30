#include "binary_trees.h"

/**
 * binary_tree_is_full - full
 * @tree: tree
 * Return: 1 if yes, 0 if no
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	if (!tree->left || !tree->right)
		return (!tree->left && !tree->right);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	return (left * right);
}
