#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if

int cp(ll n) {
    int can = sqrt(n);

    if(1ll * can * can == n) {
        return 1;
    }

    return 0;
}

int main() {
    ll n;
    scanf("%lld", &n);

    if(cp(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
