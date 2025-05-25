#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    ll n, s;
    scanf("%lld %lld", &n, &s);
    if(s % n == 0) {
        printf("%lld\n", s/ n);
    }
    else {
        printf("%lld\n", s / n + 1);
    }
    return 0;
}
