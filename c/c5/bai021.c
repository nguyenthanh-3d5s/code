#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int main() {
    int n, x, k;
    scanf("%d %d %d", &n, &x, &k);
    int a[n + 1];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    k--;
    REP(i, n, k) {
        a[i] = a[i - 1];
    }
    a[k] = x;
    n++;
    FOR(i, 0, n) {
        printf("%d ", a[i]);
    }
    return 0;
}
