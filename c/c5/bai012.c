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
    int min = 1e9, max = -1e9;
    FOR(i, 0, n) {
        if(a[i] < min) {
            min = a[i];
        }
        if(a[i] > max) {
            max = a[i];
        }
    }
    REP(i, n - 1, -1) {
        if(a[i] == min) {
            printf("%d ", i);
            break;
        }
    }
    FOR(i, 0, n) {
        if(a[i] == max) {
            printf("%d ", i);
            break;
        }
    }
    return 0;
}
