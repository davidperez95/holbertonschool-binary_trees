#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: Pointer to the parent node of the node to create
 * @value: Is the value to put in th enew node.
 * Return: The new node or failure if the create a new node failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;

	new_node->n = value;
	new_node->left = new_node->right = NULL;

	return (new_node);
}
