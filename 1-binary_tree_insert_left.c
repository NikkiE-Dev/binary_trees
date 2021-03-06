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

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
	{
		return (NULL);
	}

	newNode->left  = NULL;
	newNode->right = NULL;

	if (parent->left)
	{
		newNode->n = parent->left->n;
		parent->left->n = value;
		parent->left->left = newNode;
		newNode->parent = parent->left;
	}
	else
	{
		parent->left = newNode;
		newNode->parent = parent;
		newNode->n = value;
	}
	return (newNode);
}
