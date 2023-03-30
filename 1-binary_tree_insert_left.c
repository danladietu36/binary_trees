#include "binary_tree.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: Pointer to the parent of the node to be inserted
 * @value: value to store in the new node
 *
 * Return: Pointer to the new node created ot NULL on fairlure.
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* Declare variable for the new node */
	binary_tree_t *newNode;

	/* Alloacte memory space for the new node */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	/* Checks if parent exist */

	if (!parent)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = parent->left;
	parent->left = newNode;

	if (newNode->left)
		newNode->left->parent = newNode;
	return (newNode);
}
