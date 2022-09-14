#include "binary_trees.h"

/**
 * _binary_tree_size - Function that return of size of the tree
 * @tree: Is a pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect or 0 if the tree is not perfect.
 */
int _binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
		return (0);

	size = (1 + _binary_tree_size(tree->left) + _binary_tree_size(tree->right));
	return (size);
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 * @tree: Is a pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect or 0 if the tree is not perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		left = _binary_tree_size(tree->left);
		right = _binary_tree_size(tree->right);
	}
	if (left == right)
		return (1);
	return (0);
}
