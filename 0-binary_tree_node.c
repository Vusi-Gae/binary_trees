#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node for a binary tree.
 * @parent: A pointer the parent of the node to be created.
 * @value: The value to be assigned to the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
