#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

double s(int n) {
    if(n == 1) {
        return 1;
    }
    else {
        return 1.0 / n + s(n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%.3lf\n", s(n));
    return 0;
}
