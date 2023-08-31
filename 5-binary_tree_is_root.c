#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is the root
 * @node:  points to the node to be checked
 * Return: returns 1 if the node is root, returns 0 if not and NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	/* the node that has no parent is the root */
	if (node->parent == NULL)
		return (1);

	return (0);
}
