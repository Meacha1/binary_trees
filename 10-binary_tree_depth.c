#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *@tree: The node to be measured
 * Return: The depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	for (; tree->parent != NULL; tree = tree->parent)
		depth++;
	return (depth);
}
