#include "binary_trees.h"

/**
 * binary_tree_height - function that gives the height of tree.
 * @tree:is a pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

int left_count = 0;
int right_count = 0;

if (tree->left != NULL)
{
left_count = binary_tree_height(tree->left) + 1;
}
if (tree->right != NULL)
{
right_count = binary_tree_height(tree->right) + 1;
}

if (left_count > right_count)
{
return (left_count);
}
else
{
return (right_count);
}
}
