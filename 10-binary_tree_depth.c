#include "binary_trees.h"
/**
* binary_tree_depth - function to get depth of a binary tree
* @tree: the tree
* Return: depth of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t flag = 0;
if (tree == NULL)
{
return (flag);
}
while (tree->parent)
{
flag++;
tree = tree->parent;
}
return (flag);
}
