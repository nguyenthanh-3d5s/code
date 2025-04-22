#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)

void S(int n, ll *k) {
    if(n == 0) {
        return;
    }

    *k += 1ll * n * n * n;

    S(n - 1, k);
}

int main() {
    int n;
    scanf("%d", &n);

    ll k = 0;

    S(n, &k);

    printf("%lld\n", k);

    return 0;
}
