#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if

int uoc_le(ll n) {
    int can = sqrt(n);

    if(1ll * can * can == n) {
        return 1;
    }

    return 0;
}

int main() {
    ll n;
    scanf("%lld", &n);

    if(uoc_le(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
