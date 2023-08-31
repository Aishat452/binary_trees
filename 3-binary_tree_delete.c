#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes the whole binary tree.
 * @tree: points to root node of tree to be deleted.
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
