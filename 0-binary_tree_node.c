#include "binary_trees.h"

/**
 * binary_tree_node - binary_tree
 * @parent: parent
 * @value: value of node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *out = NULL;

	out = malloc(sizeof(binary_tree_t));
	if (!out)
		return (NULL);
	out->n = value;
	out->parent = parent;
	out->left = NULL;
	out->right = NULL;
	return (out);
}
