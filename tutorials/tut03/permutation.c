#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// slow version
// time complexity: O(n^2)
// space complexity: O(1)
void printPermutation(char* animals[], int* nums, int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 0; j < size; j++) {
            if (nums[j] == i) {
                printf("%s\n", animals[j]);
            }
        }
    }
}

// fast version 
// time complexity: ?
// space complexity: ?
// void printPermutation(char* animals[], int* nums, int size) {
//     char* tmp[size];
//     for (int i = 0; i < size; i++) {
//         tmp[nums[i] - 1] = animals[i];
//     }
//     for (int i = 0; i < size; i++) {
//         printf("%s\n", tmp[i]);
//     }
// }


int main(int argc, char **argv) {
    char* animals[] = { "cat", "dog", "mouse" };
    int nums[] = { 2, 3, 1 };
    
    printPermutation(animals, nums, 3);
}