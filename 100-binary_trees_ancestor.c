#include "binary_trees.h"

/**
 * binary_trees_ancestor - Test ancestor function and print informations
 *
 * @first: First node
 * @second: Second node
 * Return: a pointer to the common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first
		, const binary_tree_t *second)
{
	if (first->parent == second)
		return (first->parent);
	if (second->parent == first)
		return (second->parent);
	for (; first->parent == NULL; first = first->parent)
	{
		for (; second->parent == NULL; second = second->parent)
		{
			if (first->parent == second->parent)
				return (first->parent);
		}
	}
	return (NULL);
}
