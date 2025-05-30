#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

void kt(int f[]) {
    f[0] = 0;
    f[1] = 1;
    FOR(i, 2, 21) {
        f[i] = f[i - 1] + f[i - 2];
    }
}

int check(int f[], int n) {
    FOR(i, 0, 21) {
        if(f[i] == n) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int f[100];
    kt(f);
    int n;
    scanf("%d", &n);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    int ok = 0;
    FOR(i, 0, n) {
        if(check(f, a[i])) {
            printf("%d ", a[i]);
            ok = 1;
        }
    }
    if(!ok) {
        printf("NO\n");
    }
    return 0;
}
