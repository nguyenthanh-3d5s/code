#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int n, u1, d;
    scanf("%d %d %d", &n, &u1, &d);
    ll un = u1 + (n - 1) * d;
    ll s = n * (u1 + un) / 2;
    printf("%lld\n", s);
    return 0;
}
