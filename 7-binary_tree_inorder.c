#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses the elements of tree using in-order traversal
 * @tree: tree to go traverse
 * @func: function to use for each node
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
