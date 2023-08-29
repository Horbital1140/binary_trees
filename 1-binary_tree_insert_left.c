#include "binary_trees.h"
/**
* binary_tree_insert_left - function to insert a new left child node
* @parent: the parent tree
* @value: the n value
* Return: the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));
if (parent == NULL || node == NULL)
{
return (NULL);
}
node->n = value;
node->parent = parent;
node->right = NULL;
if (parent->left == NULL)
{
node->left = NULL;
parent->left = node;
}
else
{
node->left = parent->left;
parent->left->parent = node;
parent->left = node;
}
return (node);
}
