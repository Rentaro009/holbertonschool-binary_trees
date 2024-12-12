#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the right-child of another node
 *
 * @parent: pointer to the parent node to insert the right child
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (!parent)
		return (NULL);

	n_node = malloc(sizeof(binary_tree_t));
	if (!n_node)
		return (NULL);

	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;

	n_node->right = parent->right;

	if (parent->right)
		parent->right->parent = n_node;

	parent->right = n_node;

	return (n_node);
}
