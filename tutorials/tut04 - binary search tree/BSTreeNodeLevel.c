#include "bst.h"
#include <stdlib.h>
#include <stdio.h>

int BSTreeNodeLevel(BSTree t, int key) {
    if (t == NULL) {
        return -1;
    }
    if (t->value == key) {
        return 0;
    }
    
    int height;
    if (key < t->value) {
        height = BSTreeNodeLevel(t->left, key);
        if (height == -1) {
            return -1;
        }
    }
    else {
        height = BSTreeNodeLevel(t->right, key);
        if (height == -1) {
            return -1;
        }
    }
    
    return height + 1;
}