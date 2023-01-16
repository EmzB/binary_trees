#include "binary_trees.h"
/**
 * binary_tree_insert_left - add new node to the left of the root
 * if present move down a level
 * @parent: root node
 * @value: element to be inserted
 * Return: new node inserted else Null on err
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
