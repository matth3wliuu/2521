#include "bst.h"
#include <stdlib.h>
#include <stdio.h>


int BSTIsHeightBalanced(BSTree t) {
    if (t == NULL) {
        return -1;
    }
    int lHeight = BSTIsHeightBalanced(t->left);
    int rHeight = BSTIsHeightBalanced(t->right);
    
    int absDiff = abs(lHeight - rHeight);
    if (absDiff > 1) {
        return NOT_HEIGHT_BALANCED;
    }
    
    return 1 + max(lHeight, rHeight);
}