#include <stdio.h>

int fibTail(int, int, int);

int main() {
    printf("%d", fibTail(5, 0, 1));
    return 0;
}

int fibTail(int n, int a, int b) {
    if(n == 1) {
        return a;
    }
    
    if(n == 2) {
        return b;
    }
    
    return fibTail(n - 1, b, a + b);
}
