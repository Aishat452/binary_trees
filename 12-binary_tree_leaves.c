#include "binary_trees.h"
/**
 * binary_tree_leaves - Counting leaves in binary trees
 * @tree: pointer root node trees to count leaves
 * Return: returns number of leaves in trees
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
