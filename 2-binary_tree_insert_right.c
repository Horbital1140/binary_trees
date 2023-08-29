#include "binary_trees.h"
/**
* binary_tree_insert_right - function to insert a new right child node
* @parent: the parent tree
* @value: the n value
* Return: the new node
*/


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));
if (parent == NULL || node == NULL)
{
return (NULL);
}
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
if (parent->right != NULL)
{
node->right = parent->right;
parent->right->parent = node;
parent->right = node;
}
parent->right = node;
return (node);
}
