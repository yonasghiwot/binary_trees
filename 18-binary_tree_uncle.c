#include "binary_trees.h"

/**
 * binary_tree_uncle - Find uncle of  node
 * @node: a pointer to node which finds uncle
 *
 * Return: pointer to uncle node
 *         NULL if node is NULL
 *         NULL if parent is NULL
 *         NULL if the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Find sibling of a node
 * @node: pointer to node to find the sibling
 *
 * Return: pointer to sibling node
 *         NULL if node is NULL
 *         NULL if parent is NULL
 *         NULL if node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
