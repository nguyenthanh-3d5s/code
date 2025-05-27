#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int gt = 1;
    FOR(i, 1, min(a, b)) {
        gt *= i;
    }
    printf("%d\n", gt);
    return 0;
}
