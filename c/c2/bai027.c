#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

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
