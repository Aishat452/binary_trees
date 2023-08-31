#include "binary_trees.h"
/**
 * binary_tree_node - This is a function that creates the tree node
 * @parent: the pointer to parent node of the node to be created
 * @value: new nodes value
 * Return: the pointer to new node, and NULL if it fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	new_tree = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_tree == NULL)
		return (NULL);

	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = NULL;

	return (new_tree);
}
