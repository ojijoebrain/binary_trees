#include "binary_trees.h"
size_t binary_tree_len(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures the balance factor of the tree.
 * @tree: pointer to the root node of the tree
 * Return: 0 or balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_len(tree->left) -
				binary_tree_len(tree->right));
	}

	return (0);
}

/**
 * binary_tree_len - measures lenght tree.
 * @tree: pointer to the root node of the tree
 * Return: 0 or lenght
 */
size_t binary_tree_len(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t t_l = 0, t_r = 0;

		t_l = tree->left ? 1 + binary_tree_len(tree->left) : 1;
		t_r = tree->right ? 1 + binary_tree_len(tree->right) : 1;
		return ((t_l > t_r) ? t_l : t_r);
	}
	return (0);
}
