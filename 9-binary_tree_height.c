#include "binary_trees.h"

/**
 * binary_tree_height: measures height of a binary tree
 * @tree: tree to be measureed in height
 * Return: height of the tree and  0 if is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t m_l = 0;
	size_t m_r = 0;

	if (!tree)
		return (0);

	m_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	m_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (m_l > m_r ? m_l : m_r);
}
