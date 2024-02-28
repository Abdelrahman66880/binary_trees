#include "binary_trees.h"

/**
 * binary_tree_depth - function that determine the depth.
 * @tree:  is a pointer to the node to measure the depth.
 * Return: if tree is NULL, function must return 0.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
int parent_count;
if (tree == NULL)
{
return (0);
}

if (tree->parent == NULL)
{
return (0);
}
else
{
parent_count = 1 + binary_tree_depth(tree->parent);
return (parent_count);
}
}
