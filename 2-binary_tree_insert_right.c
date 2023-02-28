#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a binary tree node to the right
 *
 * @value: Integer stored in the new node
 * @parent: Pointer to the parent node to the new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL || parent == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
	}
	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->n = value;
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->left = NULL;
	}
	return (new_node);
}

