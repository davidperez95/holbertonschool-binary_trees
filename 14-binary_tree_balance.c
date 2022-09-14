#include "binary_trees.h"

/**
 * _binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root of the tree to measure the height
 * Return: int
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	left = _binary_tree_height(tree->left);
	right = _binary_tree_height(tree->right);

	if (left < right)
		return (right + 1);
	else
		return (left + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
