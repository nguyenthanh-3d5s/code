#include <stdio.h>
#define ll long long
#define elif else if
#define min(a, b) (a) < (b) ? (a) : (b)

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int Min = min(a, b);

    ll gt = 1;

    for(int i = 1; i <= Min; i++) {
        gt *= i;
    }

    printf("%lld\n", gt);

    return 0;
}
