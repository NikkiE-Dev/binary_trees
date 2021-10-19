#include "binary_trees.h"

/**
 * binary_tree_balance - measures the depth of a node in a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: balance of a binary tree or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right, balanced_size;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	balanced_size = height_left - height_right;
	}
	return (balanced_size);
}

/**
 * binary_tree_height -measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (tree)
	{
		if (tree->left)
		{
			height_left = 1 + binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			height_right = 1 + binary_tree_height(tree->right);
		}
		if (height_left >= height_right)
		{
			return (1 + binary_tree_height(tree->left));
		}
		if (height_right >= height_left)
		{
			return (1 + binary_tree_height(tree->right));
		}
	}
	return (0);
}
