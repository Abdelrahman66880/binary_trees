#include "binary_trees.h"

/**
 * binary_tree_nodes - function that count childs
 * @tree: is pointer to count from it.
 * Return: return the number of childs
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int child_count;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right != NULL || tree->left != NULL)
	{
		child_count = binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1;
		return (child_count);
	}
	else
	{
		return (0);
	}
}
