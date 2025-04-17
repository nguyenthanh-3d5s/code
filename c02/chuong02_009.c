#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if

int main() {
    int n;
    scanf("%d", &n);

    ll tich = 1;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            tich *= i;
        }
    }

    printf("%lld\n", tich);

    return 0;
}
