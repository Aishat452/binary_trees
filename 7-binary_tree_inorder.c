#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree
 * using in-order traversal
 *
 * @tree: Pointer to root node of tree to the traverse.
 * @func: Pointer to a the function to be called for each of the node
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	/* the left subtree to trasverse */
	binary_tree_inorder(tree->left, func);
	/* root of the trees to trasverse */
	func(tree->n);
	/* right subtree to trasverse */
	binary_tree_inorder(tree->right, func);
}
