#include "binary_trees.h"
/**
* binary_tree_preorder - function to traverse a binary tree using preorder
* @tree: the tree to be traversed
* @func: function to be called to each node
* Return: void
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
{
return;
}
if (func != NULL)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
return;
}
