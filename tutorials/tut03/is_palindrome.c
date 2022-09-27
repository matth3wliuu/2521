#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPalindrome(const char* str) {
    int l = 0, r = strlen(str) - 1;
    while (l < r) {
        if (str[l] != str[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main(int argc, char **argv) {
    char str1[] = {"hello"};
    char str2[] = {"racecar"};
    char str3[] = {"abba"};
    
    printf("%d\n", isPalindrome(str1));
    printf("%d\n", isPalindrome(str2));
    printf("%d\n", isPalindrome(str3));
}