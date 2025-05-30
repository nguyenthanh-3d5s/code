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
    int min = 1e9;
    FOR(i, 0, n - 1) {
        FOR(j, i + 1, n) {
            if(abs(a[i] - a[j]) < min) {
                min = abs(a[i] - a[j]);
            }
        }
    }
    printf("%d\n", min);
    return 0;
}
