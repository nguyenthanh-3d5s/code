#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 1, _n = (n); i <= _n; i++)

ll tong_uoc(ll n) {
    ll sum = 0;

    REP(i, sqrt(n)) {
        if(n % i == 0) {
            sum += i;

            if(i != n / i) {
                sum += n / i;
            }
        }
    }

    return sum;
}

int main() {
    ll n;
    scanf("%lld", &n);

    printf("%lld\n", tong_uoc(n));

    return 0;
}
