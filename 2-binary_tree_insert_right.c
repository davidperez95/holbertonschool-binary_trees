#include "binary_trees.h"

/**
 * binary_tree_inset_right - Inserts a node as the right-child of another node
 * @parent: the parent node.
 * @value: the value to insert into the new nod right.
 * Return:  Pointer to the new node or Null if the node is not created.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_right;

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