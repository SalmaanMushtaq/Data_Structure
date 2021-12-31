#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include "../binary_tree/btree.h"

BinaryNode *bst_insert(BinaryNode *tree, BinaryEntry data);
BinaryNode *bst_search(BinaryNode *tree, BinaryEntry data);

#endif
