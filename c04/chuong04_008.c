#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define min(a, b) (a) < (b) ? (a) : (b)
#define max(a, b) (a) > (b) ? (a) : (b)
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

void gcd(ll a, ll b, ll *res) {
    if(b == 0) {
        *res = a;
        return;
    }

    gcd(b, a % b, res);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int res = 0;

    gcd(a, b, &res);

    printf("%d\n", res);

    return 0;
}
