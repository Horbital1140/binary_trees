#include "binary_trees.h"
/**
* binary_tree_leaves - function to count the number of leaf nodes
* @tree: the binary tree
* Return: the number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t flag;
if (tree == NULL)
{
return (0);
}
flag = tree->left || tree->right ? 0 : 1;
return (flag + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
