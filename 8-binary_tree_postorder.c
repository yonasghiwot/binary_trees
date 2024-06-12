#include "binary_trees.h"

/**
 * binary_tree_postorder: Traverse the binary tree by post-order
 * @tree: tree to traverse
 * @func: pointer to Func
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
