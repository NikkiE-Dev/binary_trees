#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: value of the child node
 * Return: new node or NULL
 */

 binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
 {
    binary_tree_t *newNode = NULL;

    newNode = malloc(sizeof(binary_tree_t));

    if (newNode == NULL)
    {
        return (NULL);
    }
    newNode->n = value;
    newNode->parent = parent;
    newNode->left  = NULL;
    newNode->right = NULL;

    return (newNode);
 }
