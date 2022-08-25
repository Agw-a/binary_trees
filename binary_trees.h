#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n:Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};


/*Basic binary tree*/
typedef struct binary_tree_s binary_tree_t;

/*Binary search tree*/
typedef struct binary_tree_s bst_t;

/*AVL Tree*/
typedef struct binary_tree_s avl_t;

/*Max Binary Heap*/
typedef struct binary_tree_s heap_t;

/*Function that creates a binary tree*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*Binary tree print function*/
void binary_tree_print(const binary_tree_t *);

/*Function to add node as a left child*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/*a function that inserts a node as the right-child of another node*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);


#endif /*_BINARY_TREES_H_*/
