#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if

int loc_phat(ll n) {
    while(n) {
        int r = n % 10;

        if(r != 0 && r != 6 && r != 8) {
            return 0;
        }

        n /= 10;
    }

    return 1;
}

int main() {
    ll n;
    scanf("%lld", &n);

    printf("%d\n", loc_phat(n));

    return 0;
}
