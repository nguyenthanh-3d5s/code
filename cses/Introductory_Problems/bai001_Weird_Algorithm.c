#include <stdio.h>
#define ll long long

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%lld ", n);
    while(n != 1) {
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }
        printf("%lld ", n);
    }
    return 0;
}
