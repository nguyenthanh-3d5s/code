#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    ll sum = 0;
    ll gt = 1;

    for(int i = 1; i <= n; i++) {
        gt *= i;
        sum += gt;
    }

    printf("%lld\n", sum);

    return 0;
}
