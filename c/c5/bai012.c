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
    int minpos, maxpos;
    FOR(i, 0, n) {
        if(a[i] <= min) {
            min = a[i];
            minpos = i;
        }
        if(a[i] > max) {
            max = a[i];
            maxpos = i;
        }
    }
    printf("%d %d\n", minpos, maxpos);
    return 0;
}
