#include <stdio.h>

int forLoopRecur(int);

int main() {
    printf("%d", forLoopRecur(5));
    return 0;
}

int forLoopRecur(int n) {
    int stack[1000];
    int top = -1;
    int res = 0;
    
    for(int i = n; i > 0; i--) {
        stack[++top] = i;
    }
    
    while(top >= 0) {
        res += stack[top--];
    }
    
    return res;
}
