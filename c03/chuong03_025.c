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
    int a, b;
    scanf("%d %d", &a, &b);

    FOR(i, a, b - 1) {
        FOR(j, i + 1, b) {
            if(gcd(i, j) == 1) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}
