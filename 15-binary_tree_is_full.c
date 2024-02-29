#include "binary_trees.h"
int is_tree_full(const binary_tree_t *tree);

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_tree_full(tree));
}

/**
 * is_tree_full- returns 1 if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 0 or 1
 */
int is_tree_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_tree_full(tree->left) == 0 ||
		    is_tree_full(tree->right) == 0)
			return (0);
	}
	return (1);
}
