#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    ll res = 1ll * n * (n - 1) / 2;

    printf("%lld\n", res);

    return 0;
}
