#include "binary_trees.h"

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
	if (!tree->left && !tree->right)
		return (0);
	balance += (tree->left != NULL);
	balance -= (tree->right != NULL);
	balance += binary_tree_balance(tree->left);
	balance -= binary_tree_balance(tree->right);
	return (balance);
}
