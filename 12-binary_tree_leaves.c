#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 or number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tree_l = 0;

	if (tree)
	{
		tree_l += (!tree->left && !tree->right) ? 1 : 0;
		tree_l += binary_tree_leaves(tree->left);
		tree_l += binary_tree_leaves(tree->right);
	}
	return (tree_l);
}