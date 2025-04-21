#include <stdio.h>
#define ll long long
#define elif else if

ll gcd(ll a, ll b) {
    while(b) {
        ll r = a % b;
        a = b;
        b = r;
    }

    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);

    printf("%lld %lld\n", gcd(a, b), lcm(a, b));

    return 0;
}
