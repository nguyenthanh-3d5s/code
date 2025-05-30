#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int fibo(int n) {
    if(n == 1) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }
    else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo(n));
    return 0;
}
