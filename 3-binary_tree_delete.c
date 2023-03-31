#include "binary_trees.h"

/**
 * binary_tree_delete - Function to delete an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
