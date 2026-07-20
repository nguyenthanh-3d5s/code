#include <stdio.h>

int fib(int);

int main() {
    printf("%d", fib(5));
    return 0;
}

int fib(int n) {
    if(n == 1 || n == 2) {
        return n - 1;
    }
    
    int res = fib(n - 1) + fib(n - 2);
    
    return res;
}
