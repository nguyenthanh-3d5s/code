#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int s(int n) {
    if(n == 0) {
        return 0;
    }
    else {
        return n * n * n + s(n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", s(n));
    return 0;
}
