#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int check(int a[], int n) {
    int l = 0, r = n - 1;
    while(l <= r) {
        if(a[l] != a[r]) {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    if(check(a, n)) {
        printf("YES\n");
    }
    printf("NO\n");
    return 0;
}
