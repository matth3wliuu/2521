#include "bst.h"
#include <stdlib.h>
#include <stdio.h>

int abs(int a) {
    return a >= 0 ? a : -a;
}

int max(int a, int b) {
    return a >= b ? a : b;
}

BSTree newNode(int value) {
    BSTree res = malloc(sizeof(*res));
    res->value = value;
    res->left = NULL;
    res->right = NULL;
    return res;
}

BSTree insert(BSTree tree, int value) {
    if (tree == NULL) {
        return newNode(value);
    }
    if (value < tree->value) {
        tree->left = insert(tree->left, value);
    }
    else if (value > tree->value) {
        tree->right = insert(tree->right, value);
    }
    return tree;
}

BSTree buildTreeFromArray(int *arr, int size) {
    if (size == 0) {
        return NULL;
    }
    BSTree res = newNode(arr[0]);
    for (int i = 1; i < size; i++) {
        insert(res, arr[i]);
    }
    return res;
}

static void printPreOrderRecur(BSTree tree) {
    if (tree == NULL) {
        return;
    }
    printf("%d ", tree->value);
    printPreOrderRecur(tree->left);
    printPreOrderRecur(tree->right);
}

void printPreOrder(BSTree tree) {
    printf("preorder: ");
    printPreOrderRecur(tree);
    printf("\n");
}
