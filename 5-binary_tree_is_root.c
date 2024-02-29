#include "binary_trees.h"

/**
 * binary_tree_is_root - To checks if node is root of binary tree.
 * @node: Pointer to node to be check.
 *
 * Return: If the node is a root - 1.
 *         Otherwise root - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
