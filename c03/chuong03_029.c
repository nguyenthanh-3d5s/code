#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

int check(ll n) {
    if(n == 0 || n == 1) {
        return 1;
    }

    ll f1 = 1;
    ll f2 = 1;

    FOR(i, 2, 92) {
        ll fn = f1 + f2;

        if(fn == n) {
            return 1;
        }

        f2 = f1;
        f1 = fn;
    }

    return 0;
}

int nt(int n) {
    FOR(i, 2, sqrt(n)) {
        if(n % i == 0) {
            return 0;
        }
    }

    return n > 1;
}

int check2(int n) {
    int sum = 0;

    while(n) {
        sum += n % 10;
        n /= 10;
    }

    if(check(sum)) {
        return 1;
    }
    
    return 0;
}

int main() {
    ll n;
    scanf("%lld", &n);

    FOR(i, 1, n - 1) {
        if(nt(i) && check2(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
