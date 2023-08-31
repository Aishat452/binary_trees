#include "binary_trees.h"
/**
 * binary_tree_nodes - Counting nodes with 1 least child in binary trees
 * @tree: the pointer to root node of tree to count amount of nodes
 * Return: If the tree is NULL, then funct must return 0, otherwise node counts
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += (tree->left || tree->right) ? 1 : 0;
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
	}
	return (count);
}
