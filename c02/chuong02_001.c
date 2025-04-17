#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    ll sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("%lld\n", sum);

    return 0;
}
