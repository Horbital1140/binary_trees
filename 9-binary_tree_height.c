#include "binary_trees.h"
/**
* binary_tree_height - function to get height of a binary tree
* @tree: the tree
* Return: height of the tree
*/


size_t binary_tree_height(const binary_tree_t *tree)
{
size_t flag = 0;
const binary_tree_t *temp = malloc(sizeof(binary_tree_t));
if (tree == NULL)
{
return (flag);
}
temp = tree;
while (temp->right || temp->left)
{
flag++;
temp = temp->left ? temp->left : temp->right;
}
return (flag);
}
