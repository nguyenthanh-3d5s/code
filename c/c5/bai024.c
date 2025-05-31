#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    FOR(i, 0, n - k + 1) {
        int tong = 0;
        FOR(j, 0, k) {
            tong += a[j + i];
        }
        printf("%d ", tong);
    }
    return 0;
}
