#include "bst.h"
#include <stdlib.h>
#include <stdio.h>


// compile with gcc main.c bst.c filename.c
int main(int argc, char** argv) {
    
    int a1[] = { };
    BSTree t1 = buildTreeFromArray(a1, 0);
    
    int a2[] = { 4, 2, 6, 5, 1, 7, 3 };
    BSTree t2 = buildTreeFromArray(a2, 7);
    
    int a3[] = { 5, 2, 6, 1, 3, 4, 6, 7 };
    BSTree t3 = buildTreeFromArray(a3, 7);
    
    int a4[] = { 1, 2, 3, 4, 5, 6, 7 };
    BSTree t4 = buildTreeFromArray(a4, 7);
    
    printf("%d\n", BSTreeHeight(t1));
    printf("%d\n", BSTreeHeight(t2));
    printf("%d\n", BSTreeHeight(t3));
    printf("%d\n", BSTreeHeight(t4));
}