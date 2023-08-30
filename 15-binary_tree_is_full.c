#include "binary_trees.h"
/**
* binary_tree_is_full - function to check if the binary tree is full
* @tree: the binary tree
* Return: int
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
int x, y, flag = 0;
if (tree != NULL)
{
if ((tree->left == NULL) ^ (tree->right == NULL))
{
flag = 0;
}
else
{
x = binary_tree_is_full(tree->left);
y = binary_tree_is_full(tree->right);
flag = tree->left && tree->right ? 1 & x & y : 1;
}
}
return (flag);
}
