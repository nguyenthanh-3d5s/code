#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    FOR(i, ceil(sqrt(a)), sqrt(b)) {
        printf("%d ", i * i);
    }
    return 0;
}
