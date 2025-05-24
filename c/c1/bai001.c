#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int x;
    scanf("%d", &x);
    ll res = 1ll * x * x * x + 3ll * x * x + x + 1;
    printf("%lld\n", res);
    return 0;
}
