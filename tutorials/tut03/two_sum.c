#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool hasTwoSum(int* arr, int size, int target) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main(int argc, char** argv) {
    int arr1[] = { 1, 2, 3, 4, 5 };
    
    printf("%d\n", hasTwoSum(arr1, 5, -2));
    printf("%d\n", hasTwoSum(arr1, 5, 5));
}