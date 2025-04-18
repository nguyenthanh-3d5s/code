#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    ll n;
    scanf("%lld", &n);

    int sum = 0;

    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("%d\n", sum);

    return 0;
}
