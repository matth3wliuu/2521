#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef Node *List;

List buildListFromStdin();
List buildListFromArray(int size, int arr[]);
void displayList(List lst);

int listLength(List lst);
int listCountOdds(List lst);
bool listIsSorted(List lst);
List listDelete(List lst, int val);

