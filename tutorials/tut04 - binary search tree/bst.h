
#include <stdbool.h>

#define NOT_HEIGHT_BALANCED -99

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

// utility functions 
BSTree newNode(int value);
BSTree insert(BSTree tree, int value);
BSTree buildTreeFromArray(int *arr, int size);
void printPreOrder(BSTree tree);

// maths helpers
int abs(int a);
int max(int a, int b);

int BSTreeNumNodes(BSTree tree);
int BSTreeHeight(BSTree t);
int BSTreeNodeLevel(BSTree t, int key);
int BSTIsHeightBalanced(BSTree t);