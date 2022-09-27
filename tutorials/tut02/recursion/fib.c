
#include <stdio.h>
#include <stdlib.h> 
#include <assert.h>

int fib(int n) {
    assert(n >= 0);
    // BASE CASES 
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char **argv) {
    int fib_2 = fib(2);
    int fib_4 = fib(4);
    int fib_6 = fib(6);
    
    printf("fib(2) = %d\nfib(4) = %d\nfib(6) = %d\n", fib_2, fib_4, fib_6);
    
    // int fib_100 = fib(100);
}
