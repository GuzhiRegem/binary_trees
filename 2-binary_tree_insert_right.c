#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent to add new node
 * @value: value of new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old, *new;

	if (!parent)
		return (NULL);
	old = parent->right;
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (old)
		old->parent = new;
	new->right = old;
	parent->right = new;
	return (new);
}
