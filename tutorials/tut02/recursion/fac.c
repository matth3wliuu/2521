
#include <stdio.h>

int fac(int n) {
    // BASE CASE 
    if (n == 1) return 1;
    
    // RECURSIVE CASE 
    return n * fac(n - 1);
} 
    
int main(int argc, char **argv) {
    
    printf("%d\n", fac(6));
}