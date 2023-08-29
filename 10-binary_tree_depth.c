#include "binary_trees.h"

/**
 * binary_tree_depth - this measure depth of a node in a binary_tree.
 *
 * @tree: the pointer to the node that measure the depth.
 *
 * Return: returns 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
