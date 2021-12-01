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
 * binary_tree_balance - binary_tree_balance
 * @tree: tree to balance
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);
	balance += tree->left ? (int)binary_tree_height(tree->left) : -1;
	balance -= tree->right ? (int)binary_tree_height(tree->right) : -1;
	return (balance);
}
