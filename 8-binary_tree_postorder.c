#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through the binary tree by using
 * the post-order traversal
 *
 * @tree: points to root node of tree to be traversed
 * @func: pointer to the function to be called for each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	/* the left subtree */
	binary_tree_postorder(tree->left, func);
	/* the right subtree */
	binary_tree_postorder(tree->right, func);
	/* the root of the tree */
	func(tree->n);
}
