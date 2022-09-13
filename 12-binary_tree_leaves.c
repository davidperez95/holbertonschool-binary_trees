#include "binary_trees.h"

/**
 * @brief 
 * 
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t size = 0;

    if (tree == NULL)
        return (0);
    
    if (tree->left == NULL && tree->right == NULL)
        size++;
    
    if (tree->left != NULL)
        size++;
    
    if (tree->right != NULL)
        size++;
    return (size);
}