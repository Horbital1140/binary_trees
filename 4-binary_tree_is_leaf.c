#include "binary_trees.h"

/**
 * binary_tree_is_leaf - this Check if a node is a leaf.
 *
 * @node: the pointer to the node_to_check.
 *
 * Return: it returns 1 if node is a leaf, if not  0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
