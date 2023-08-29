#include "binary_trees.h"
/**
* binary_tree_depth - function to get depth of a binary tree
* @tree: the tree
* Return: depth of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t flag = 0;
const binary_tree_t *temp = malloc(sizeof(binary_tree_t));
if (tree == NULL)
{
return (flag);
}
temp = tree;
while (temp->parent)
{
flag++;
temp = temp->parent;
}
return (flag);
}
