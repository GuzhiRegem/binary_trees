#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent to add new node
 * @value: value of new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old, *new;

	if (!parent)
		return (NULL);
	old = parent->left;
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (old)
		old->parent = new;
	new->left = old;
	parent->left = new;
	return (new);
}
