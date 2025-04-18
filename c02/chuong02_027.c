#include <stdio.h>
#define ll long long
#define elif else if

int main() {
    ll n;
    scanf("%lld", &n);

    while(n >= 10) {
        int tong = 0;

        while(n) {
            tong += n % 10;
            n /= 10;
        }

        n = tong;
    }

    printf("%lld\n", n);

    return 0;
}
