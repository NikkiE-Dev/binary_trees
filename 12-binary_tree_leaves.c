#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: NULL or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree))
{
	size_t left_size, right_size, measured_size;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL&& tree->left == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) +
							binary_tree_leaves(tree->right));
	}
}
