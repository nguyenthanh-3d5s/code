#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 1, _n = (n); i <= _n; i++)

int main() {
    ll n;
    scanf("%lld", &n);

    REP(i, sqrt(n)) {
        printf("%lld ", 1ll * i * i);
    }
    printf("\n");

    return 0;
}
