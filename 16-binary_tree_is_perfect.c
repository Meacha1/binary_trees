#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is perfect - 1, otherwise - 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes, i;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	for (i = 0; i <= height; i++)
	{
		if (nodes == (1 << i) - 1)
			return (1);
	}

	return (0);
}
