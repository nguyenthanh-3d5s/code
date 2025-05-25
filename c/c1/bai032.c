#include <stdio.h>
#include <math.h>
#define ll long long

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int k2, k3, k5, k6;
    scanf("%d %d %d %d", &k2, &k3, &k5, &k6);
    int k256 = min(k2, min(k5, k6));
    int k32 = min(k3, k2 - k256);
    ll res = 1ll * 256 * k256 + 1ll * k32 * 32;
    printf("%lld\n", res);
    return 0;
}
