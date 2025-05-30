#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int check(int a[], int n) {
    if(n == 1) {
        if(a[0] % 2 == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        if(a[n - 1] % 2 == 1) {
            return 0;
        }
        else {
            return check(a, n - 1);
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
    if(check(a, n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
