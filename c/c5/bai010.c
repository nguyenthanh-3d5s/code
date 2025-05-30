#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int nt(int n) {
    FOR(i, 2, sqrt(n) + 1) {
        if(n % i == 0) {
            return 0;
        }
    }
    return n > 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    FOR(i, 0, n) {
        int l = 0, r = 0;
        FOR(j, 0, i) {
            l += a[j];
        }
        FOR(j, i + 1, n) {
            r += a[j];
        }
        if(nt(l) && nt(r)) {
            printf("%d ", i);
        }
    }
    return 0;
}
