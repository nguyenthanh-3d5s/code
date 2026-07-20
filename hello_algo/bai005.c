#include <stdio.h>

int tailRecur(int, int);

int main() {
    printf("%d", tailRecur(5, 0));
    return 0;
}

int tailRecur(int n, int res) {
    if(n == 0) {
        return res;
    }
    
    return tailRecur(n - 1, res + n);
}
