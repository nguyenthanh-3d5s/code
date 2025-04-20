#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 2, _n = (n); i <= _n; i++)

void pt(ll n) {
    REP(i, sqrt(n)) {
        if(n % i == 0) {
            int mu = 0;

            while(n % i == 0) {
                mu++;
                n /= i;
            }

            printf("%d^%d", i, mu);

            if(n != 1) {
                printf(" * ");
            }
        }
    }

    if(n > 1) {
        printf("%lld^1", n);
    }
}

int main() {
    ll n;
    scanf("%lld", &n);

    pt(n);

    return 0;
}
