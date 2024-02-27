#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *tmpnode = malloc(sizeof(binary_tree_t));

    if (tmpnode == NULL)
    {
        return (NULL);
    }

    tmpnode->n = value;
    tmpnode->parent = parent;
    tmpnode->left = NULL;
    tmpnode->right = NULL;

    return (tmpnode);
}
