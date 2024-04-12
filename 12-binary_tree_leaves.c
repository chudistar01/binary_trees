#include "binary_trees.h"

/**
 * binary_tree_leaves - function that measures
 * the size of a binary tree
 * @tree: tree to be checked
 * Return: size of a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, r = 0, l = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		leaf = r + l;
		return ((!l && !r) ? leaf + 1 : leaf + 0);
	}

}
