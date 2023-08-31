#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through the binary tree with
 * the pre-order traversal
 *
 * @tree: points to the root node of tree to be traversed
 * @func: a pointer to a function to call for each node
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	/*the traversal that starts from the root */
	func(tree->n);
	/* the left subtree that is recursively being called */
	binary_tree_preorder(tree->left, func);
	/* the right subtree that is recursively being called */
	binary_tree_preorder(tree->right, func);
}
