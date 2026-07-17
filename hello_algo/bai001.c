#include <stdio.h>

int forLoop(int);

int main() {
    printf("%d", forLoop(5));
    return 0;
}

int forLoop(int n) {
    int res = 0;
    
    for(int i = 1; i <= n; i++) {
        res += i;
    }
    
    return res;
}
