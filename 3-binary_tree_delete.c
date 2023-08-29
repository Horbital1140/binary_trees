#include "binary_trees.h"

/**
 * binary_tree_delete - it Deletes the entire binary_tree.
 *
 * @tree: the pointer to the_root node of the tree_to_delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
