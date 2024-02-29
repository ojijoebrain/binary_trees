#include "binary_trees.h"
unsigned char is_node_leaf(const binary_tree_t *node);
size_t node_len(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_tree_perfect(const binary_tree_t *tree, size_t leaf_len, size_t node);


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_tree_perfect(tree, node_len(get_leaf(tree)), 0));
}

/**
 * is_node_leaf - checks if a node is a leaf
 * @node: pointer to the node
 * Return: 0 or 1
 */
unsigned char is_node_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * node_len - checks the lenght of a node
 * @tree: pointer to the node to measure
 * Return: lenght of node.
 */
size_t node_len(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + node_len(tree->parent) : 0);
}

/**
 * get_leaf - retrives a leaf node of a tree
 * @tree: pointer to the root node of the tree to find a leaf
 * Return: pointer to the first leaf of a node
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_node_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_tree_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * @leaf_len: lenght of a leaf
 * @node: current node
 * Return: 0 or 1
 */
int is_tree_perfect(const binary_tree_t *tree, size_t leaf_len, size_t node)
{
	if (is_node_leaf(tree))
		return (node == leaf_len ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_tree_perfect(tree->left, leaf_len, node + 1) &&
		is_tree_perfect(tree->right, leaf_len, node + 1));
}
