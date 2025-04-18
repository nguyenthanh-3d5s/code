#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    ll tong = 0;

    for(int i = 1; i <= n; i++) {
        tong += 2 * i - 1;
    }

    printf("%lld\n", tong);

    return 0;
}
