#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: new node or NULL
 */

 binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
 {
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
	{
		return (NULL);
	}

	newNode->left  = NULL;
	newNode->right = NULL;

	if (parent->left)
	{
		parent->left->n = value;
		parent->left->left = newNode;
		newNode->n = parent->left->n;
		newNode->parent = parent->left;
	}
	else
	{
		newNode->n = value;
		newNode->parent = parent;
		parent->left = newNode;

	}
	return (newNode);
 }
