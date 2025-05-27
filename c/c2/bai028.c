#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int gt = 1;
    FOR(i, 1, n) {
        gt *= i;
        sum += gt;
    }
    printf("%d\n", sum);
    return 0;
}
