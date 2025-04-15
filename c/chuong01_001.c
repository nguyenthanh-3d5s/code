#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    long long res = 1ll * x * x * x + 3ll * x * x + x + 1;
    printf("%lld\n", res);
    return 0;
}
