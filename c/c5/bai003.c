#include <stdio.h>
#include <math.h>
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
    FOR(i, 0, n) {
        if(min > a[i]) {
            min = a[i];
        }
    }
    int cnt = 0;
    FOR(i, 0, n) {
        if(a[i] == min) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
