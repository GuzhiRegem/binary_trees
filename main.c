#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root, *tmp;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_insert_left(root, 45);
    binary_tree_insert_right(root->left, 50);
    binary_tree_insert_left(root->left->left, 10);
    binary_tree_insert_left(root->left->left->left, 8);
    binary_tree_print(root);

	tmp = root;
    printf("Balance of %d: %+d\n", tmp->n, binary_tree_balance(tmp));
	tmp = root->right;
    printf("Balance of %d: %+d\n", tmp->n, binary_tree_balance(tmp));
	tmp = root->left;
    printf("Balance of %d: %+d\n", tmp->n, binary_tree_balance(tmp));
	tmp = root->right->right;
    printf("Balance of %d: %+d\n", tmp->n, binary_tree_balance(tmp));
	tmp = root->left->right;
    printf("Balance of %d: %+d\n", tmp->n, binary_tree_balance(tmp));
	tmp = root->left->left->right;
    printf("Balance of %d: %+d\n", tmp->n, binary_tree_balance(tmp));
	tmp = root->left->left;
    printf("Balance of %d: %+d\n", tmp->n, binary_tree_balance(tmp));
    return (0);
}
