#include <stdio.h>
#define ll long long
#define elif else if
#define min(a, b) (a) < (b) ? (a) : (b)
#define max(a, b) (a) > (b) ? (a) : (b)

int main() {
    ll a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    ll Min = min(min(a, b), min(c, d));
    ll Max = max(max(a, b), max(c, d));

    printf("%lld %lld\n", Max, Min);

    return 0;
}
