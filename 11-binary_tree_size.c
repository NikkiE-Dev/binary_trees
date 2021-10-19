#include "binary_trees.h"

/**
 * binary_tree_size - measures the depth of a node in a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: NULL or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_size, right_size, measured_size;

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
