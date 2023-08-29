#include "binary_trees.h"

/**
 * binary_tree_insert_left - it Insert_node as the left-child of another_node.
 *
 * @parent: A pointer to the_node to insert the_left child in.
 * @value: The value to store_the new node.
 *
 * Return: the pointer to the_created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}

