#include "binary_trees.h"
/**
 * binary_tree_balance - this measures balace factor of tree.
 * @tree: pointing to root node of tree to measure balance factors
 * Return: returns 0 else, returns factor of the balance.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
/**
 * binary_tree_height -  measuring height of binary tree
 * @tree: pointer that points to root node of tree that measures d height
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t l_h = 0, r_h = 0;

	if (tree)
	{
		l_h = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r_h = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l_h > r_h) ? l_h : r_h);
	}
	return (0);
}
