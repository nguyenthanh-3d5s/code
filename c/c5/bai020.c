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
    FOR(i, 1, n - 1) {
        if(a[i] > a[i - 1] && a[i] > a[i + 1]) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
