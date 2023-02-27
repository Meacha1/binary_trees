#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node on the tree
 * @parent: Pointer to the parent node
 * @value : n value for the created node
 * Return: a pointer to the created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (root == NULL)
		return (NULL);
	root->n = value;
	root->parent = parent;
	return (root);
}
