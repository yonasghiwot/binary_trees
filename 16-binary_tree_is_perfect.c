#include "binary_trees.h"

/**
 * binary_tree_is_perfect: function to check if a binary is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect
 *         0 if the tree is not perfect
 *         0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = bt_mk_height(tree);
	nodes = bt_mk_size(tree);

	power = (size_t)_mk_pow_recur(2, height + 1);
	return (power - 1 == nodes);
}

/**
 *_mk_pow_recur - returns the value of x raised to the power of y
 *@x: the value to exponentiate
 *@y: x** to
 *Return: x **y, or -1 if y is negative
 */

int _mk_pow_recur(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _mk_pow_recur(x, y - 1));

}

/**
 * bt_mk_size - size of a binary tree Measurement
 * @tree: tree to measure the size of
 *
 * Return: Size
 *         0 = NULL
 */
size_t bt_mk_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (bt_mk_size(tree->left) + bt_mk_size(tree->right) + 1);
}

/**
 * bt_mk_height - measures the height
 * @tree: tree to measure Hight
 *
 * Return: height
 *         0 = NULL
 */
size_t bt_mk_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + bt_mk_height(tree->left) : 0;
	height_r = tree->right ? 1 + bt_mk_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
