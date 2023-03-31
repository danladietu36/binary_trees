#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_right - Function to insert node as the rihjt child
 * @parent: Pointer to the parent node
 * @value:  value to be store in the node
 *
 * Description - Replaces the node at the right if exists withe new node and store the old node as child of the new node. if no node exist at right of the parent, store the new node.
 *
 * Retrun: Pointer to the new node or NULL on fairlure.
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* Declare the variable to store the new node */
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	/* Allocate memory space to the variable*/
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	/* Allocate values to the variables */
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;

	if (new->right)
		new->right->parent = new;
	return (new);
}
