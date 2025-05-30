#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int c(int n) {
    if(n < 10) {
        return 1;
    }
    else {
        return 1 + c(n / 10);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", c(n));
    return 0;
}
