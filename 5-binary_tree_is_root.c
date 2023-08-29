#include "binary_trees.h"
/**
* binary_tree_is_root - function to check if a node is a root
* @node: the node to be checked
* Return: returns 1 if it's a leaf else 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
if (node != NULL)
{
if (node->parent)
{
return (0);
}
return (1);
}
return (0);
}
