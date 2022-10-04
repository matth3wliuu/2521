
#include "bst.h"
#include <stdlib.h>
#include <stdio.h>


int BSTreeHeight(BSTree t) {
    if (t == NULL) {
        return -1;
    }
    
    int lHeight = BSTreeHeight(t->left);
    int rHeight = BSTreeHeight(t->right);
    
    return 1 + max(lHeight, rHeight);
}