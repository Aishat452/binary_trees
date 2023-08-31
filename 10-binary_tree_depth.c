#include "binary_trees.h"

/**
 * binary_tree_depth - this function measures the depth of 
 * the node in the binary tree.
 * @tree: pointer to node that measures the depth.
 * Return: 0 otherwise, returns the depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
