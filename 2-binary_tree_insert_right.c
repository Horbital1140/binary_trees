#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert_node as the right-child of another_node.
 *
 * @parent: the pointer to node to insert the_right-child in.
 * @value: value that store in the new_node.
 *
 * Return: the_pointer to the creatednode, NULL if fail or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_trees_nodes(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
