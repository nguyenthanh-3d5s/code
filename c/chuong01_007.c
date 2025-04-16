#include <stdio.h>
#define ll long long

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int x = a / b * b;
    int y = (a + b - 1) / b * b;

    printf("%d %d\n", x, y);
    
    return 0;
}
