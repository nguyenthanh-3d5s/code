#include <stdio.h>
#include <math.h>
#define ll long long
#define elif else if

int main() {
    ll n;
    scanf("%lld", &n);

    ll sum = 0;

    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            sum += i;

            if(i != n / i) {
                sum += n / i;
            }
        }
    }

    printf("%lld\n", sum);

    return 0;
}
