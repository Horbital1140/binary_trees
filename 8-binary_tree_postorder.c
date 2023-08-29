#include "binary_trees.h"
/**
* binary_tree_postorder - function to traverse a binary tree using inorder
* @tree: the tree to be traversed
* @func: function to be called to each node
* Return: void
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
{
return;
}
if (func != NULL)
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
return;
}
