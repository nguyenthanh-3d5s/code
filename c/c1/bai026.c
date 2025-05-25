#include <stdio.h>
#include <math.h>
#define ll long long

ll min(ll a, ll b) {
    return (a < b) ? a : b;
}

ll max(ll a, ll b) {
    return (a > b) ? a : b;
}

int main() {
    ll a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    ll r1 = min(min(a, b), min(c, d));
    ll r2 = max(max(a, b), max(c, d));
    printf("%lld %lld\n", r2, r1);
    return 0;
}
