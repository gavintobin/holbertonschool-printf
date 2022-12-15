#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent of node to create
 * @value: value to put into node
 * Return: pointer to nn
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
	binary_tree_t *nn = malloc(sizeof(nn));
	binary_tree_t *parent;
	binary_tree_t *current;

nn->n = n;
nn->left = NULL;
nn->right = NULL;

	if (root == NULL)
		root = nn;
	else
	{
		current = root;
		parent = null;
	}
	while (1)
	{
		parent = current;

		if (n < parent->n)
		{
			current = current->left;

			if (current == NULL)
			parent->left = nn;
			return;

		}
	}
	else
	{
		current = current->right;

		if (current == NULL)
		{
			parent->right = nn;
			return;

		}
	}
}
