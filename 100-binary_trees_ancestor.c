#include "binary_trees.h"

/**
 * binary_trees_ancestor - lowest common ancestor
 * @first: first node
 * @second: second node
 * Return: pointer to ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *next = NULL, *p_fir, *p_sec, *anc = NULL;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((void *)first);
	while (1)
	{
		p_fir = (void *)first;
		p_sec = (void *)second;
		while (p_fir->parent != next)
			p_fir = p_fir->parent;
		while (p_sec->parent != next)
			p_sec = p_sec->parent;
		if (p_sec != p_fir)
			break;
		if (p_sec == first)
			return ((void *)first);
		if (p_fir == second)
			return ((void *)second);
		anc = p_sec;
		next = anc;
	}
	return (anc);
}
