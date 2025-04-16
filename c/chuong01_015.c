#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    ll n, a, b;
    scanf("%lld %lld %lld", &n, &a, &b);

    if(a * 2 <= b) {
        printf("%lld\n", n * a);
    }
    else {
        if(n % 2 == 0) {
            printf("%lld\n", n / 2 * b);
        }
        else {
            printf("%lld\n", n / 2 * b + a);
        }
    }

    return 0;
}
