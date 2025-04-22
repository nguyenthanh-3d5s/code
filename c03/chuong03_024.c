#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

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
    int x, y, z, n;
    scanf("%d %d %d %d", &x, &y, &z, &n);

    ll bc = lcm(x, lcm(y, z));
    ll tmp = (ll) pow(10, n - 1);
    ll kq = (tmp + bc - 1) / bc * bc;

    if(kq < pow(10, n)) {
        printf("%lld\n", kq);
    }
    else {
        printf("-1");
    }

    return 0;
}
