#include "binary_trees.h"
/**
* binary_tree_inorder - function to traverse a binary tree using inorder
* @tree: the tree to be traversed
* @func: function to be called to each node
* Return: void
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
{
return;
}
if (func != NULL)
{
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
return;
}
