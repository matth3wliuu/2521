#include "bst.h"
#include <stdlib.h>
#include <stdio.h>


int BSTreeNumNodes(BSTree tree) {
    if (tree == NULL) {
        return 0;
    }   
    return 1 + BSTreeNumNodes(tree->left) + BSTreeNumNodes(tree->right);
}

