#include "binary_trees.h"
/**
 * binary_tree_preorder - prints elements of tree using pre-order traversal
 * @tree: tree to traverse in preorder
 * @func: function to use for each node
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
