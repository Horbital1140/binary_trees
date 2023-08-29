#include "binary_trees.h"
/**
* binary_tree_node - function to create a binary tree
* @parent: the parent tree
* @value: the n value
* Return: the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));
if (node)
{
node->n = value;
node->left = NULL;
node->right = NULL;
node->parent = parent;
return (node);
}
return (NULL);
}
