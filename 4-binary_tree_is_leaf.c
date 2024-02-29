#include "binary_trees.h"

/**
 * binary_tree_is_leaf - To checks if  node is leaf of a binary tree.
 * @node: Pointer to node to be check.
 *
 * Return: If node is a leaf - 1.
 *         Otherwise a leaf - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

