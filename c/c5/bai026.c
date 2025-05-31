#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)
#define m (int) 1e6 + 1

bool dem[m];

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
        dem[a[i]] = 1;
    }
    int cnt = 0;
    FOR(i, 0, m) {
        if(dem[i] != 0) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
