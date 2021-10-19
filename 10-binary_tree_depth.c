#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: Pointer to the node to measure the depth.
 * Return: NULL or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth_size;

	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	depth_size = 1 + binary_tree_depth(tree->parent);
	return (depth_size);
}
