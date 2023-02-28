#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: the node to be checked
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (2);
	if (tree->left != NULL && tree->right == NULL)
		return (1);
	if (tree->right != NULL && tree->left == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
}
