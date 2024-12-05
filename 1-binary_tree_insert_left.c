#include "binary_trees.h"

/**
  * binary_tree_insert_left - add left node
  *
  * @parent: parent node
  * @value: node value
  * Return: new node
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);


	new_node->parent = parent;
	new_node->n = value;
	new_node->left = parent->left;
	new_node->right = NULL;
	parent->left = new_node;

	if (new_node->left != NULL)
		new_node->left->parent = new_node;
	return (new_node);
}
