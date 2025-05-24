#include <stdio.h>
#include <math.h>
#define ll long long

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
