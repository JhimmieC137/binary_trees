#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Entry point
 *
 * @tree: pointer to root node
 * Return: Void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->parent)
			tree->parent = NULL;
		if (tree->left)
			tree->parent = NULL;
		if (tree->right)
			tree->parent = NULL;
	}
}
