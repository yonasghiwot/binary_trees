#include "binary_trees.h"

/**
 * binary_tree_depth: measures depth of node in binary tree
 * @tree: node to calculate depth
 * Return: depth of the node or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		node_depth++;
		tree = tree->parent;
	}

	return (node_depth);
}
