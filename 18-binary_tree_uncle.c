#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling
 * @node: node
 * Return: pointer to sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left, *right;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	left = node->parent->left;
	right = node->parent->right;
	if (left == node)
		return (right);
	return (left);
}

/**
 * binary_tree_uncle - uncle
 * @node: node
 * Return: uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
