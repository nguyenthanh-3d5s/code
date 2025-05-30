#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int min(int a, int b) {
    return (a < b) ? a : b;
}

int f(int n) {
    if(n == 1) {
        return 0;
    }
    else {
        int res1 = 1e9, res2 = 1e9, res3 = 1e9;
        if(n % 2 == 0) {
            res1 = f(n / 2) + 1;
        }
        if(n % 3 == 0) {
            res2 = f(n / 3) + 1;
        }
        if(n > 1) {
            res3 = f(n - 1) + 1;
        }
        return min(res1, min(res2, res3));
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
