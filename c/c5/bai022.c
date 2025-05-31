#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    int k = -1;
    FOR(i, 0, n) {
        if(a[i] == x) {
            k = i;
            break;
        }
    }
    if(k == -1) {
        printf("NO\n");
    }
    else {
        FOR(i, k, n - 1) {
            a[i] = a[i + 1];
        }
        n--;
        FOR(i, 0, n) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
