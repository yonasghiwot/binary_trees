#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is the node a leaf
 * @node: a node
 * Return: 1 = is a leaf
 *         0 =  a leaf
 *         0 = is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
