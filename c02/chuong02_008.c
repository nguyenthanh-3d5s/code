#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if

int main() {
    ll n;
    scanf("%lld", &n);

    for(int i = 1; i <= sqrt(n); i++) {
        printf("%lld ", 1ll * i * i);
    }
    printf("\n");

    return 0;
}
