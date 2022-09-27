#include <stdio.h>
#include <stack>
#include <cmath>

std::stack<int> intToBinary(int n) {
    std::stack<int> res = std::stack<int>{};
    int counter = 0;
    while (n > 0) {
        res.push(n % 2);
        n = std::floor(n / 2);
        printf("iteration: %d\n", counter + 1);
        counter++;
    }
    return res;
}

int main(int argc, char **argv) {
    std::stack<int> st = intToBinary(11);
    // std::stack<int> st = intToBinary(17);
    printf("0b");
    while (not st.empty()) {
        int val = st.top();
        printf("%d", val);
        st.pop();
    }
    printf("\n");
}