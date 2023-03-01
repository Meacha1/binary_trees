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

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: the tree to be measured
 * Return: the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	return (left_size + right_size + 1);
}
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

	return ((height_left > height_right) ? height_left : height_right);
}
