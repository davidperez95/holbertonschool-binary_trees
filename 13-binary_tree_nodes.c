#include "binary_trees.h"

/**
 * @brief 
 * 
 * 
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count = 0;

    if (tree == NULL)
        return (count);
    
    if (tree->left != NULL || tree->right != NULL)
        count = 1;
        
    count += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
    return (count);
}