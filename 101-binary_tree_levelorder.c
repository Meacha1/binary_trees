#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order
 * traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing (void)
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *node;
	binary_tree_t *queue[100];
	int front = 0, rear = 0;

	if (tree == NULL || func == NULL;
			return;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		node = queue[front++];
		func(node->n);
		if (node->left)
			queue[rear++] = node->left;
		if (node->right)
			queue[rear++] = node->right;
	}
}
