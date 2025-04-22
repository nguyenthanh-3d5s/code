#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

int check_fb(ll n) {
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

int main() {
    ll n;
    scanf("%lld", &n);

    if(check_fb(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
