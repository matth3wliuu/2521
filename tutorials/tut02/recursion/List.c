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
    // base case: list is empty => length must equal 1
    if (lst == NULL)  {
        return 0;
    }
    return 1 + listLength(lst->next);
}

int listCountOdds(List lst) {
    // base case: list is empty => must have no odd numbers 
    if (lst == NULL) {
        return 0;
    }
    // if current value is odd, add 1 to return value
    if (lst->data % 2 != 0) {
        return 1 + listCountOdds(lst->next);
    }
    else {
        return listCountOdds(lst->next);
    }
}

bool listIsSorted(List lst) {
	// base case 1: list is empty => must be sorted
	if (lst == NULL) {
		return true;
	}
    // base case 2: list contains only one item => must be sorted
	if (lst->next == NULL) {
		return true;
	}
	// base case 3: list contains more than one item and 
	// the first two items are not in ascending order
	if (lst->data > lst->next->data) {
		return false;
	}
	
	return listIsSorted(lst->next);		
}

List listDelete(List lst, int val) {
    // base case 1: if the list empty => can't delete anything
    if (lst == NULL) {
        return lst;
    }
    // base case 2: if val exists, return the list starting from the next node
    if (lst->data == val) {
        return lst->next;   
    }
    else {
        lst->next = listDelete(lst->next, val);
        return lst;
    }
}
