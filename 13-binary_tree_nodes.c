#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: number of nodes or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t right_side, left_side;

    if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (0);
	}
	else
	{
        left_side = binary_tree_nodes(tree->left);
        right_side = binary_tree_nodes(tree->right);
		return (right_side + left_side + 1);
	}
}
