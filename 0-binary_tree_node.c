#include "binary_trees.h"

/**
 * binary_tree_node - binary tree node to be created.
 *
 * @parent: the parent of the node pointer.
 * @value: The value to be inserted on the new_node.
 *
 * Return: If malloc fails - NULL, else - a pointer to the new_node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);


	new_node->y = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
