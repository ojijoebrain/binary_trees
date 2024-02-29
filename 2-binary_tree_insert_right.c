#include "binary_trees.h"

/**
 * binary_tree_insert_right - To insert node as child-right
 *                            of another in binary tree.
 * @parent: Pointer to a node to insert right-child in.
 * @value: Value that will store in the new node.
 *
 * Return:  For If parent is NULL or error occurs - NULL.
 *         Otherwise - pointer to new node.
 *
 * Description: If a parent already has a right-child, new node
 *              takes its place and old right-child is set as
 *              right-child of new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
