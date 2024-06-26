#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a
 * binary tree using pre-order traversal
 * @tree: tree of the node
 * @func: function pointer
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}

