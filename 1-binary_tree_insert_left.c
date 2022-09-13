#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: the parent node.
 * @value: the value to insert into the new nod left.
 * Return: Pointer to the new node or Null if the node is not created.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_left;
    
    if (parent == NULL)
        return (NULL);
    
    new_left = binary_tree_node(parent, value);
    if (new_left == NULL)
        return (NULL);

    if (parent->left != NULL)
    {
        new_left->left = parent->left;
        parent->left->parent = new_left;
    }
    parent->left = new_left;
    return (new_left);
}

