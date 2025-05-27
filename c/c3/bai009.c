#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int duoi = ceil(sqrt(a));
    int tren = sqrt(b);
    printf("%d\n", tren - duoi + 1);
    return 0;
}
