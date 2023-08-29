#include "binary_trees.h"

/**
 * binary_tree_preorder - checking 2ru binary_tree using pre-order traversal.
 *
 * @tree: this is a pointer to the root_node of the tree_to_traverse.
 * @func: the pointer to a function_call for the_node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->y);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
