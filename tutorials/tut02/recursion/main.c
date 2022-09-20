#include <stdlib.h>
#include <stdio.h>

#include "List.h"

// compile using gcc main.c List.c

int main(int argc, char **argv) {
    int arr1[] = { 1, 2, 3, 4, 5 };
    List lst1 = buildListFromArray(5, arr1);
    
    displayList(lst1);
    printf("length of lst1 = %d\n", listLength(lst1)); 
    printf("number of odds in lst1 = %d\n", listCountOdds(lst1));
    printf("is lst1 sorted: %d\n", listIsSorted(lst1));
    
    int arr2[] = { 1, 7, 3, 2, 1, 4 };
    List lst2 = buildListFromArray(6, arr2);
    displayList(lst2);
    printf("is lst2 sorted: %d\n", listIsSorted(lst2));
    lst2 = listDelete(lst2, 1);
    displayList(lst2);
}