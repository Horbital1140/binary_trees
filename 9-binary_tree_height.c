#include "binary_trees.h"
/**
* binary_tree_height - function to get height of a binary tree
* @tree: the tree
* Return: height of the tree
*/


size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
size_t left_node = binary_tree_height(tree->left);
size_t right_node = binary_tree_height(tree->right);
if (left_node > right_node)
{
return (left_node + 1);
}
else
{
return (right_node + 1);
}
}
