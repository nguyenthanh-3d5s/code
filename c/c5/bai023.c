#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    int f[n];
    FOR(i, 0, n) {
        if(i == 0) {
            f[0] = a[0];
        }
        else {
            f[i] = f[i - 1] + a[i];
        }
    }
    FOR(i, 0, n) {
        printf("%d ", f[i]);
    }
    return 0;
}
