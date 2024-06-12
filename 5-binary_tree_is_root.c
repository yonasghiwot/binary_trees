#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node to get checked
 * Return: 1 if node is a root and 0 if not a root or is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
