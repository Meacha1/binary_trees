#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 *
 * @tree: pointer to the root to be traversed
 * @func: the function to be called at each node for exution
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	 binary_tree_inorder(tree->left, func);
	 func(tree->n);
	  binary_tree_inorder(tree->right, func);
}
