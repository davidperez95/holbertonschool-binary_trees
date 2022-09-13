#include "binary_trees.h"

/**
 * @brief 
 * 
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    int size_left = 0, size_right = 0;

    if (tree == NULL)
        return (0);
    
    /*if (tree->left != NULL && tree->right != NULL)
        return (1);
    */
    size_left = binary_tree_size(tree->left + 1);
    size_right = binary_tree_size(tree->right + 1);

    if (size_left != size_right)
        return (0);
    /*if (tree->left != NULL || tree->right != NULL)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
    */
    return (1);
}