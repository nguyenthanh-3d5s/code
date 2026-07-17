#include <stdio.h>

int whileLoop(int);

int main() {
    printf("%d", whileLoop(5));
    return 0;
}

int whileLoop(int n) {
    int res = 0;
    int i = 1;
    
    while(i <= n) {
        res += i;
        i++;
    }
    
    return res;
}
