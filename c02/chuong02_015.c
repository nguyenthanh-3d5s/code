#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    ll gt = 1;

    for(int i = 1; i <= n; i++) {
        gt *= i;
    }

    printf("%lld\n", gt);

    return 0;
}
