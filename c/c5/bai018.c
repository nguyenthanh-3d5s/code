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
    FOR(i, 0, n) {
        if(i == 0) {
            if(a[0] * a[1] < 0) {
                printf("%d ", a[0]);
            }
        }
        else if(i == n - 1) {
            if(a[n - 1] * a[n - 2] < 0) {
                printf("%d ", a[n - 1]);
            }
        }
        else {
            if(a[i] * a[i - 1] < 0 || a[i] * a[i + 1] < 0) {
                printf("%d ", a[i]);
            }
        }
    }
    return 0;
}
