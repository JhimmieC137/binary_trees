#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Entry point
 * @parent - address of parent node
 * @value - data to be stored in created node
 *
 * Return: pointer to node on Success, NULL on failure
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

        temp = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!temp)
		return (NULL);

	temp->parent = parent;
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;

	return (temp);
}
