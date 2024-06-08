#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 *
 * @parent: Pointer to parent
 * @value: Value to be stored in node
 *
 * Return: pointer to new node on Success, NULL on Failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	temp = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!temp)
		return (NULL);

	temp->n = value;
	temp->left = parent->left;

	if (parent->left != NULL)
		parent->left->parent = temp;

	parent->left = temp;
	temp->parent = parent;


	return (temp);
}
