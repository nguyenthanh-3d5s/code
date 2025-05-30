#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int dx(int a[], int l, int r) {
    if(l >= r) {
        return 1;
    }
    else {
        if(a[l] != a[r]) {
            return 0;
        }
        else{
            return dx(a, l + 1, r - 1);
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
    if(dx(a, 0, n - 1)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
