#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n, u1, d;
    scanf("%d %d %d", &n, &u1, &d);

    ll un = u1 + (n - 1) * d;
    ll s = n * (u1 + un) / 2;

    printf("%lld\n", s);

    return 0;
}
