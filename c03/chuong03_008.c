#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);

    FOR(i, ceil(sqrt(a)), sqrt(b)) {
        printf("%lld ", 1ll * i * i);
    }

    return 0;
}
