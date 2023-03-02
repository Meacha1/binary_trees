#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
    queue_t *queue = NULL;
    int flag = 0;

    if (tree == NULL)
        return (0);

    queue = queue_create();
    if (queue == NULL)
        return (0);

    enqueue(queue, (void *)tree);

    while (!is_empty(queue))
    {
        binary_tree_t *node = (binary_tree_t *)dequeue(queue);

        if (node->left)
        {
            if (flag)
            {
                queue_free(queue);
                return (0);
            }
            enqueue(queue, (void *)node->left);
        }
        else
            flag = 1;

        if (node->right)
        {
            if (flag)
            {
                queue_free(queue);
                return (0);
            }
            enqueue(queue, (void *)node->right);
        }
        else
            flag = 1;
    }

    queue_free(queue);
    return (1);
}
