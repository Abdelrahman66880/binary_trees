#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node the right-child of another node.
 *@parent: pointer to the node to insert the right-child in.
 *@value: the value to store in the new node,
 * Return: return a pointer to the created node, or NULL on failure or if no.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

binary_tree_t *newNode = NULL;
if (parent == NULL)
{
return (NULL);
}

newNode = malloc(sizeof(binary_tree_t));
newNode->n = value;
newNode->left = NULL;
newNode->right = NULL;
newNode->parent = parent;

if (parent->right == NULL)
{
parent->right = newNode;
}
else
{
newNode->right = parent->right;
parent->right = newNode;
newNode->right->parent = newNode;
}

return (newNode);
}
