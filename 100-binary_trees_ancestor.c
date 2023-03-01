#include "binary_trees.h"

/**
 * binary_trees_ancestor - Test ancestor function and print informations
 *
 * @first: First node
 * @second: Second node
 * Return: a pointer to the common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second || first == second->parent)
		return ((binary_tree_t *)first);

	if (second == first->parent)
		return ((binary_tree_t *)second);

	return (binary_trees_ancestor(first->parent, second->parent));
}
