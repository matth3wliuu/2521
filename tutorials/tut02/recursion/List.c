#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "List.h"


List buildListFromStdin() {
    int size;
    printf("size = ");
    scanf("%d\n", &size);
    if (size == 0) {
        return NULL;
    }
    
    List toReturn = malloc(sizeof(*toReturn));
    Node *curr = toReturn;
    for (int i = 0; i < size; i++) {
        int val;
        scanf("%d", &val);
        if (i == 0) {
            curr->data = val;
            curr->next = NULL;
        }
        else {
            Node *toInsert = malloc(sizeof(*toInsert));
            toInsert->data = val;
            toInsert->next = NULL;
            curr->next = toInsert;
            curr = curr->next;
        }
    }
        
    return toReturn;
};

List buildListFromArray(int size, int arr[]) {
    if (size == 0) {
        return NULL;
    }
    
    List toReturn = malloc(sizeof(*toReturn));
    toReturn->data = arr[0];
    toReturn->next = NULL;
    Node *iter = toReturn;
    for (int i = 1; i < size; i++) {
        Node *toInsert = malloc(sizeof(*toInsert));
        toInsert->data = arr[i];
        toInsert->next = NULL;
        iter->next = toInsert;
        iter = iter->next;
    }
    
    return toReturn;
}

void displayList(List lst) {
    printf("List: ");
    for (Node *curr = lst; curr != NULL; curr = curr->next) {
        if (curr->next == NULL) {
            printf("%d", curr->data);
        }
        else {
            printf("%d, ", curr->data);
        }
    }
    printf("\n");
}

int listLength(List lst) {
    return -1;
}

int listCountOdds(List lst) {
    return -1;
}

bool listIsSorted(List lst) {
    return false;
}

List listDelete(List lst, int val) {
    return NULL;
}

