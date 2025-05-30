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
    int k;
    scanf("%d", &k);
    int cnt = 0;
    FOR(i, 0, n - 1) {
        FOR(j, i + 1, n) {
            if(a[i] + a[j] == k) {
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
