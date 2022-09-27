
#include <stdio.h>
#include <stdlib.h>


int myPow(int x, unsigned int n) {
    if (n == 0) return 1;
    if (n == 1) return x;
    if (n % 2 == 0) {
        return myPow(x * x, n / 2);
    }
    else {
        return x * myPow(x * x, n / 2);
    }
}


int main(int argc, char **argv) {
    printf("5^2 = %d\n", myPow(5, 2));
    printf("3^3 = %d\n", myPow(3, 3));
    printf("2^4 = %d\n", myPow(2, 4));
}
