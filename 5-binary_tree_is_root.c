#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checkes if the node is a leaf
 *
 * @node: the node to be checked
 * Return: 1 if the node is a leaf else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
        if (node == NULL)
                return (0);
        if (node->parent == NULL)
                return (1);
        else
                return (0);
}
