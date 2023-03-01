#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of the binary tree, 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

size_t binary_tree_height(const binary_tree_t *tree) {
    size_t height_left = 0, height_right = 0;

    if (tree == NULL) {
        return 0;
    }

    if (tree->left != NULL) {
        height_left = binary_tree_height(tree->left) + 1;
    }

    if (tree->right != NULL) {
        height_right = binary_tree_height(tree->right) + 1;
    }

    return (height_left > height_right) ? height_left : height_right;
}
