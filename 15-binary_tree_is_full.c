#include "binary_trees.h"

/**
 * binary_tree_is_full -checks if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: 0 if NULL or 1 if full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (height_left);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
