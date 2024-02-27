#include "binary_trees.h"
/**
 * binary_tree_node - Function that create a new node of the tree.
 *@parent: is a pointer to the parent node of the node that have been created.
 *@value: is the data to put in the new node.
 * Return:Your function must return a pointer to the new node or NULL if no.
*/

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
