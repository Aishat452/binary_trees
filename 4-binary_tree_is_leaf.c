#include "binary_trees.h"
/**
 * binary_tree_is_leaf -  checks if the node is leaf.
 * @node: pointer to the node to check.
 * Return: returns 1 if its  leaf, 0 if its  not and NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);


	return (0);
}
