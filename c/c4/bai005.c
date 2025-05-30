#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int gt(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * gt(n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", gt(n));
    return 0;
}
