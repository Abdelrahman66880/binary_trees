#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that check if the node is leaf or not.
 * @node: is a pointer to the node to check.
 * Return: return 1 if the node is leaf or 0 if not.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}

if (node->right == NULL && node->left == NULL)
{
return (1);
}
else
{
return (0);
}
}
