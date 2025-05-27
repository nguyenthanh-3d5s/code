#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int main() {
    int n;
    scanf("%d", &n);
    int gt = 1;
    double res = 0;
    FOR(i, 1, n) {
        res += 1.0 / gt;
        gt *= i;
    }
    printf("%.4lf\n", res);
    return 0;
}
