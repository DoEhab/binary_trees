#include "binary_trees.h"

/**
  * binary_tree_is_leaf - check if leaf
  *
  * @node: node to be checked
  * Return: return 1 if leaf zero otherwise
  *
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
