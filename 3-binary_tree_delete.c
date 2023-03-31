#include "binary_trees.h"

/**
 * void binary_tree_delete - Function to delete an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);	
	binary_tree_delete(tree->left);
	free(tree);
}