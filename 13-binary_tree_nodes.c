#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with child
 * @tree: pointer to the root node of the tree
 * Return: 0 or node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_c = 0;

	if (tree)
	{
		node_c += (tree->left || tree->right) ? 1 : 0;
		node_c += binary_tree_nodes(tree->left);
		node_c += binary_tree_nodes(tree->right);
	}
	return (node_c);
}
