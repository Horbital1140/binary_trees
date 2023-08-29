#include "binary_trees.h"
/**
* binary_tree_is_leaf - function to check if a node is a leaf
* @node: the node to be checked
* Return: returns 1 if it's a leaf else 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node != NULL)
{
if (node->left || node->right)
{
return (0);
}
return (1);
}
return (0);
}
