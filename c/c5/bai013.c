#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

const int mod = 1e9 + 7;

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    int tong = 0, tich = 1;
    FOR(i, 0, n) {
        tong += a[i];
        tong %= mod;
        tich *= a[i];
        tich %= mod;
    }
    printf("%d %d\n", tong, tich);
    return 0;
}
