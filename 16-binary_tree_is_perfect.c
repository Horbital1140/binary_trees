#include "binary_trees.h"
/**
* binary_tree_height - function to get height of a binary tree
* @tree: the tree
* Return: height of the tree
*/


size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_node, right_node;
if (tree == NULL)
{
return (0);
}
if (tree->left)
{
left_node = 1 + binary_tree_height(tree->left);
}
else
{
left_node = 0;
}
if (tree->right)
{
right_node = 1 + binary_tree_height(tree->right);
}
else
{
right_node = 0;
}
if (left_node > right_node)
{
return (left_node);
}
else
{
return (right_node);
}
}

/**
* binary_tree_balance - function to measure the balance factor of a binary tree
* @tree: the binary tree
* Return: int
*/

int binary_tree_balance(const binary_tree_t *tree)
{
int x, y;
if (tree == NULL)
{
return (0);
}
x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return (x - y);
}

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


/**
* binary_tree_is_perfect - function to check if the binary tree is perfect
* @tree: the binary tree
* Return: int
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree != NULL)
{
if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
{
return (1);
}
}
return (0);
}
