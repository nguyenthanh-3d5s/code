#include <stdio.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a), b_ = (b); i <= b_; i++)
#define REP(i, a, b) for(int i = (a), b_ = (b); i >= b_; i--)

int s(int n) {
    if(n < 10) {
        return n;
    }
    else {
        return n % 10 + s(n / 10);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", s(n));
    return 0;
}
