#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if tree is perfect or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_check, right_check, height, size;

	if (!tree)
	{
		return (0);
	}

	left_check = binary_tree_height(tree->left);
	right_check = binary_tree_height(tree->right);
	height = right_check + left_check;
	size = binary_tree_size(tree);

	if ((size == (1 << height)) && (left_check == right_check))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_size - measures the depth of a node in a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: NULL or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0, measured_size = 0;

	if (tree)
	{
		if (tree->left)
		{
			left_size = binary_tree_size(tree->left);
		}
		if (tree->right)
		{
			right_size = binary_tree_size(tree->right);
		}
		measured_size = (left_size + right_size) + 1;
		return (measured_size);
	}
	return (0);
}


/**
 * binary_tree_height -measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (tree)
	{
		height_left = binary_tree_height(tree->left);
		height_right = binary_tree_height(tree->right);

		if (height_left >= height_right)
		{
			return (height_left + 1);
		}
		else if (height_right >= height_left)
		{
			return (height_right + 1);
		}
	}
	return (0);
}
