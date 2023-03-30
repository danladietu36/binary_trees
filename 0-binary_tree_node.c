#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node to create
 * @value: value of the node to be create
 *
 * Return: Pointer to the newnode or NULL on failure
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*variable declaation*/
	binary_tree_t *newNode;

	/* Alloocate memory space to the node */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/*assign values to the properties of the node */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left= NULL;
	newNode->right = NULL;

	/*return a pointer to the node */

	return (newNode);
}
