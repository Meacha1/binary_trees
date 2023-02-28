#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root of tree to be measured
 * Return: the size of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL) 
	{
		height_left = binary_tree_height(tree->left) + 1;
	}

	if (tree->right != NULL) 
	{
		height_right = binary_tree_height(tree->right) + 1;
	}

	return (height_left > height_right) ? height_left : height_right;
}
