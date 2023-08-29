#include "binary_trees.h"

/**
 * binary_tree_height - this Measure height of a binary tree.
 *
 * @tree: it is a pointer to the root_node of the tree that measure the height.
 *
 * Return: returns 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lefty = 0, righty = 0;

		lefty = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		righty = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((lefty > righty) ? lefty : righty);
	}

	return (0);
}
