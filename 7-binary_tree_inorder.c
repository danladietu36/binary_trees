#include "binary_trees.h"

/**
 * binary_tree_inorder - transverse binary tree in preorder manner
 * @tree:  Pointer to the tree to transverse
 * @func: Pointer to a function to call for each node
 * Return: If tree or func is NULL, do nothing.
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

