#include <stdio.h>

int recur(int);

int main() {
    printf("%d", recur(5));
    return 0;
}

int recur(int n) {
    if(n == 1) {
        return 1;
    }
    
    int res = recur(n - 1);
    
    return n + res;
}
