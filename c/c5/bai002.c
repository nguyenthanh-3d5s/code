#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i < b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i > b_; i--)

int nt(int n) {
    FOR(i, 2, sqrt(n) + 1) {
        if(n % i == 0) {
            return 0;
        }
    }
    return n > 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    FOR(i, 0, n) {
        scanf("%d", &a[i]);
    }
    int cnt = 0, sum = 0;
    FOR(i, 0, n) {
        if(nt(a[i])) {
            cnt++;
            sum += a[i];
        }
    }
    printf("%.3lf\n", 1.0 * sum / cnt);
    return 0;
}
