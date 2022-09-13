#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node at the right-child of another node
 * @parent: the parent node
 * @value: the value to insert into the new node
 * Return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right = NULL;

	if (parent == NULL)
		return (NULL);

	new_right = binary_tree_node(parent, value);
	if (new_right == NULL)
		return (NULL);

	if (new_right->parent != NULL)
	{
		new_right->right = parent->right;
		parent->right = new_right;
	}
	parent->right = new_right;

	return (new_right);
}
