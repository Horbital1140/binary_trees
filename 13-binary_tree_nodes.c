#include "binary_trees.h"
/**
* binary_tree_nodes - function to count the number of parent nodes
* @tree: the binary tree
* Return: the number of parent nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t x;
if (tree == NULL)
{
return (0);
}
x = tree->left || tree->right ? 1 : 0;
return (x + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
