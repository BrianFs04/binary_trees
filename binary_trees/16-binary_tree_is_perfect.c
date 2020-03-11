#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if it is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_nodes, right_nodes;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_nodes = binary_tree_is_perfect(tree->left);
	right_nodes = binary_tree_is_perfect(tree->right);

	if (left_nodes == right_nodes)
		return (1);

	return (0);
}
