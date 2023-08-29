#include "binary_trees.h"

/**
 * binary_tree_inorder - checking 2ru a binary_tree using in-order traversal.
 *
 * @tree: the pointer to the root_node of the tree to traverse.
 * @func: the pointer to a function to call for the node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->y);
		binary_tree_inorder(tree->right, func);
	}
}

