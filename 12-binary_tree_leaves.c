#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that check if is it leaf or not.
 * @node: is a pointer to the node to check.
 * Return: Return 1 if it is leaf or 0 if not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_leaves - function that count the number of leaves.
 * @tree: pointer node of the tree to count the number of leaves.
 * Return: return the number of the leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaf_count;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		leaf_count = binary_tree_is_leaf(tree) +
			binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left);
		return (leaf_count);
	}
}
