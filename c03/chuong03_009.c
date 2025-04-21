#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);

    int can_duoi = ceil(sqrt(a));
    int can_tren = sqrt(b);

    printf("%d\n", can_tren - can_duoi + 1);

    return 0;
}
