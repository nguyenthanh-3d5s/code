#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int bins(int a[], int l, int r, int x) {
    if(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == x) {
            return 1;
        }
        else if(a[m] > x) {
            return bins(a, m + 1, r, x);
        }
        else {
            return bins(a, l, m - 1, x);
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    printf("%d\n", bins(a, 0, n - 1, x));
    return 0;
}
