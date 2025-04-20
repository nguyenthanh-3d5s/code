#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define REP(i, n) for(int i = 2, _n = (n); i <= _n; i++)

int nt(ll n) {
    int cnt = 0;

    REP(i, sqrt(n)) {
        if(n % i == 0) {
            int mu = 0;

            while(n % i == 0) {
                mu++;
                n /= i;
            }

            if(mu >= 2) {
                return 0;
            }

            cnt++;
        }
    }

    if(n > 1) {
        cnt++;
    }

    if(cnt == 3) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    ll n;
    scanf("%lld", &n);

    if(nt(n)) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}
