#include "binary_trees.h"

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
		if (tree->left)
		{
			height_left = 1 + binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			height_right = 1 + binary_tree_height(tree->right);
		}
		if (height_left >= height_right && height_left != 0)
		{
			return (height_left);
		}
		if (height_right >= height_l && height_right != 0)
		{
			return (height_right);
		}
	}
}
