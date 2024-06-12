#include "binary_trees.h"

/**
 * binary_tree_node: will create a new B-T node
 * @parent: pointer to parent of created node.
 * @value: pointer to  new node
 * Return: pointer to new node or NULL in failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->parent = parent;
	n_node->n = value;
	n_node->left = NULL;
	n_node->right = NULL;

	return (n_node);
}
